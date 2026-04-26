#include <stdio.h>

void ImprimirVetor(int v[], int tam)
{
    printf("{");
    for (int i = 0; i < tam; i++)
    {
        printf(" %d", v[i]);
    }
    printf(" }\n");
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

void OrdenarVetorMet02(int v[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)         // Itera até n-1 vezes
        for (j = 0; j < n - i - 1; j++) // Compara elementos adjacentes
        {                               // Utilizando ternário com XOR
            (v[j] > v[j + 1]) ? (v[j] ^= v[j + 1], v[j + 1] ^= v[j], v[j] ^= v[j + 1]) : 0;
        }
}

/* PERMUTA UTILIZANDO O TERNÁRIO COM XOR

(v[j] ^= v[j + 1], v[j + 1] ^= v[j], v[j] ^= v[j + 1])
O Operador XOR (^=) realizar a troca sem usar uma variável auxiliar.
A lógica da troca com XOR é:
    v[j] ^= v[j + 1]; // Sentença 01
    v[j + 1] ^= v[j]; // Sentença 02
    v[j] ^= v[j + 1]; // Igual a sentença 01

Esses passos garantem a troca dos valores entre v[j] e v[j+1]
*/