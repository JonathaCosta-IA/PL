
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* Código de Rotinas Auxiliares
Note que,em C, não é possível retornar diretamente um array (ou vetor) de uma função, pois arrays locais são alocados na
stack e são descartados quando a função termina.
Contudo, é possível:
 - Passar um ponteiro para o vetor como argumento para a função.
 - Alocar o vetor dinamicamente na heap usando malloc.
 - Ou apenas pre-definir o vetor no código main e atualizar(carregar) o vetor conforme solução abaixo:
*/
void CarregarVetor(int numeros[], int tamanho)
{
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++)
    {
        int k = rand() % 99;
        numeros[i] = k;
    }
}

void ExibirVetor(int numeros[], int tamanho)
{
    // Rotina utilizada para exibir um vetor
    printf(" {");
    for (int i = 0; i < tamanho; i++)
    {
        (i != tamanho - 1) ? printf("%d,", numeros[i]) : printf("%d}", numeros[i]);
    }
}

void OrdenarVetorMet01(int v[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)         // Itera até n-1 vezes
        for (j = 0; j < n - i - 1; j++) // Compara elementos adjacentes
        {
            if (v[j + 1] < v[j])
            {
                int aux = v[j]; // Permuta
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
}