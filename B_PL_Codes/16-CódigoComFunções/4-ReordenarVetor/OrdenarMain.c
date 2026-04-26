#include <stdio.h>
#include "lib.h"
#include <stdlib.h>
int main()
{

    int v[] = {10, 8, 12, 3, 5};
    // Determinar o tamanho do vetor
    int n = sizeof(v) / sizeof(v[0]);
    int metodo;
    do
    {
        printf("\nEscolha um método de ordenação do vetor:"
               "\n(1) - Método de permuta direta"
               "\n(2) Método do bolha\n");
        scanf("%d", &metodo);

        switch (metodo)
        {
        case 1:
            system("clear");
            printf("Vetor original:");
            // Imprimir vetor original
            ImprimirVetor(v, n);
            // Organizar vetor
            OrdenarVetorMet01(v, n);
            // Imprimir vetor
            printf("Vetor ordenado utilizando o método de permuta:");
            ImprimirVetor(v, 5);
            break;

        case 2:
            system("clear");
            printf("Vetor original:");
            ImprimirVetor(v, n);
            OrdenarVetorMet02(v, n);
            printf("Vetor ordenado utilizando o método do bolha:");
            ImprimirVetor(v, 5);
            break;
        default:
            printf("Método fora da lista de opções!");
            break;
        }

        printf("\nDigite (0) para encerrar ou qualquer tecla para reiniciar.");
        scanf("%d", &metodo);
        system("clear");
    } while (metodo != 0);
    printf("Código encerrado!");
}
