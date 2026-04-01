#include <stdio.h>

void ImprimirVetor(int v[],int tam)
{   printf("{");
    for (int i=0;i<tam;i++)
    { printf(" %d",v[i]);}
    printf(" }\n");
}

void OrdenarVetor(int v[],int n)
{    int  i,j;
    for (i=0;i<n-1;i++)      // Itera até n-1 vezes
        for (j=0;j<n-i-1;j++)  // Compara elementos adjacentes
            {if(v[j+1]<v[j])
                {int aux=v[j];// Permuta
                 v[j]=v[j+1];
                 v[j+1]=aux;}
            }
}

int main()
{int v[]={10,8,12,3,5};
 // Determinar o tamanho do vetor
 int n=sizeof(v)/sizeof(v[0]);
 // Imprimir vetor original
   printf("Vetor original:");
   ImprimirVetor(v,n);
// Organizar vetor
    OrdenarVetor(v,n);
// Imprimir vetor
   printf("Vetor ordenado:");
   ImprimirVetor(v,5);
}

/* CONCEITO DO ALGORITMO DE ORDENAÇÃO DA BOLHA.
1)Laço externo:
for (i=0; i<n-1; i++) // Itera até n-1 vezes
O laço interno percorre o vetor, comparando cada par de elementos adjacentes.
A variável j representa o índice do elemento atual sendo comparado.
O intervalo percorrido diminui a cada passagem, porque os últimos elementos do vetor já estarão
ordenados após cada iteração do laço externo.

2) Laço externo:
for (j=0; j<n-i; j++) // Compara elementos adjacentes
O laço interno percorre o vetor, comparando cada par de elementos adjacentes.
A variável j representa o índice do elemento atual sendo comparado.
O intervalo percorrido diminui a cada passagem, porque os últimos elementos do vetor
 já estarão ordenados após cada iteração do laço externo
*/



