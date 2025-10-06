/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido com ponteiros.
Escreva um código em C que preencha um vetor com 10 números e indique o maior, o menor número e a diferença entre eles.
*/

#include <stdio.h>

int main() {
    int v[10], i, *p, maior, menor;

    printf("Digite 10 números:\n");
    for (p = v; p < v + 10; p++) {
        scanf("%d", p);
    }

    maior = menor = *v;
    for (i = 1; i < 10; i++) {
        if (*(v + i) > maior) maior = *(v + i);
        if (*(v + i) < menor) menor = *(v + i);
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Diferença: %d\n", maior - menor);
    return 0;
}

