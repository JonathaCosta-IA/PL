/*
Exercícios com matrizes
Prof. Jonatha Costa
Versão 01. 09.04.26
---------------------------------
a) Encontrar a traço das matrizes A,B,C
b) Encontrar a soma dos produtos aij * bij * cij
c) Encontrar o determinante de cada matriz
d) Testar se as matrizes são inversíveis
e) Média de cada matriz
f) Verificar o somatório das matrizes é maior ou igual a media
g) Exibir somente os ímpares de cada matriz
*/

#include <stdio.h>
void Exibir_Traco_Matriz(int A[3][3]);
void ChamarTracos(int A[3][3], int B[3][3], int C[3][3]);
void Exibir_Somatorio_Xij_Matrizes(int A[3][3], int B[3][3], int C[3][3]);

int CalculeDetMatriz(int A[3][3]);

int main()
{
    // Definir as matrizes
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{0, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int C[3][3] = {{10, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // Criar uma rotina para calcular o traço da matriz e exibir
    ChamarTracos(A, B, C);

    // Criar uma rotina para calcular a soma dos produtos aij * bij * cij
    Exibir_Somatorio_Xij_Matrizes(A, B, C);

    // Criar uma rotina para calcular o determinante da matriz e exibir

    int Det[3] = {CalculeDetMatriz(A), CalculeDetMatriz(B), CalculeDetMatriz(C)};
    for (int i = 0; i < 3; i++)
    {
        printf("\nO determinante da matriz %d é %d.", i + 1, Det[i]);
    }
    printf("\n");
    // Criar uma rotina para testar se as matrizes são inversíveis
    for (int i = 0; i < 3; i++)
    {
        if (Det[i] == 0)
            printf("\nA matriz %d não é inversível, pois seu determinante é %d.", i + 1, Det[i]);
        else
            printf("\nA matriz %d é inversível, pois seu determinante é diferente de zero. Det = %d.", i + 1, Det[i]);
    }
    // Criar uma rotina para calcular a média de cada matriz

    // Criar uma rotina para verificar se o somatório das matrizes é maior ou igual a media

    // Criar uma rotina para exibir somente os ímpares de cada matriz

    return 0;
}

// Área de definição das sub-rotinas

void Exibir_Traco_Matriz(int A[3][3])
{
    int traco;
    traco = A[0][0] + A[1][1] + A[2][2];
    printf("\nO traço da matriz é %d.", traco);
}

void ChamarTracos(int A[3][3], int B[3][3], int C[3][3])
{
    Exibir_Traco_Matriz(A);
    Exibir_Traco_Matriz(B);
    Exibir_Traco_Matriz(C);
}

void Exibir_Somatorio_Xij_Matrizes(int A[3][3], int B[3][3], int C[3][3])
{

    int soma = 0; // Variável auxiliar
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma += A[i][j] * B[i][j] * C[i][j];
        }
    }
    printf("\n\nO somatório [A(ib) x B(ij) x C(ij)] é %d.\n", soma);
}

int CalculeDetMatriz(int A[3][3])
{
    int det;
    det = (A[0][0] * A[1][1] * A[2][2] +
           A[0][1] * A[1][2] * A[2][0] +
           A[0][2] * A[1][0] * A[2][1]) -

          (A[0][2] * A[1][1] * A[2][0] +
           A[0][0] * A[1][2] * A[2][1] +
           A[0][1] * A[1][0] * A[2][2]);

    return det;
}