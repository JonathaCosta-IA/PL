/*
Exercícios com matrizes
Prof. Jonatha Costa
Versão 01. 09.04.26
---------------------------------
a) Gere duas matrizes 3x3 em modo randômico, com valores entre 0 e 9. Exiba as matrizes.
b) Encontrar o determinantes das matrizes A,B e informar se são inversíveis ou não.
c) Calcular a matriz C com o produto matricial entre as matrizes A e B.
d) Calcular a matriz D com o produto matricial entre as matrizes B e A.
e) Encontrar o determinantes das matrizes C e D e informar se são inversíveis ou não.
f) Verificar se o determinante das matrizes C e D são iguais, e explicar o resultado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// -----------------------------

float DeterminanteMatriz(int M[3][3])
{
    float det;
    det = (M[0][0] * M[1][1] * M[2][2] +
           M[0][1] * M[1][2] * M[2][0] +
           M[0][2] * M[1][0] * M[2][1]) -

          (M[0][2] * M[1][1] * M[2][0] +
           M[0][0] * M[1][2] * M[2][1] +
           M[0][1] * M[1][0] * M[2][2]);

    printf("\nO determinante da matriz é %.2f.", det);
    if (det == 0)
        printf("\nA matriz não é inversível, pois seu determinante é %.2f.", det);
    else
        printf("\nA matriz é inversível, pois seu determinante é diferente de zero. Det = %.2f.", det);
    return det;
}

void MultiplicarMatrizes(int A[3][3], int B[3][3], int C[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = 0; // Inicializa o elemento C[i][j]
            for (int k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k] * B[k][j]; // Soma o produto dos elementos correspondentes
            }
        }
    }
}

void GerarMatriz(int M[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            M[i][j] = rand() % 10; // Gera um número entre 0 e 9
        }
    }
}

void ExibirMatriz(int M[3][3])
{
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int A[3][3], B[3][3], C[3][3], D[3][3];
    srand(time(NULL)); // Inicializa a semente para números randômicos
    // Gerar as matrizes A e B com valores randômicos entre 0 e 9
    GerarMatriz(A);
    GerarMatriz(B);
    ExibirMatriz(A);
    ExibirMatriz(B);
    MultiplicarMatrizes(A, B, C);
    ExibirMatriz(C);
    MultiplicarMatrizes(B, A, D);
    ExibirMatriz(D);
    float detC = DeterminanteMatriz(C);
    float detD = DeterminanteMatriz(D);
    if (detC == detD)
        printf("\nO determinante das matrizes C e D é o mesmo: %.2f.", detC);
    printf("\n\nComo esperado de propriedades de matrizes, o determinante do produto de matrizes é igual ao produto dos determinantes: \ndet(C) = det(A) * det(B) e \ndet(D) = det(B) * det(A).");
}