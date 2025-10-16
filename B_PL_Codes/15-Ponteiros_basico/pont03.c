/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido com ponteiros.
Escreva um código em C que preencha um vetor com 10 números e retorne quais são os números ímpares deste vetor.
*/

#include <stdio.h>

int main() {
    int v[10], i, *p;

    printf("Digite 10 números:\n");
    for (p = v; p < v + 10; p++) {
        scanf("%d", p);
    }

    printf("Números ímpares:\n");
    for (p = v; p < v + 10; p++) {
        if (*p % 2 != 0)
            printf("%d ", *p);
    }

    printf("\n");
    return 0;
}

