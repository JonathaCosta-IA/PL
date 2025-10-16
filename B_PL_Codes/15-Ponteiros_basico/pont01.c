/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido com ponteiros.
Escreva um código em C que preencha um vetor com 10 números e indique o maior número ao varrer o vetor preenchido.
*/

#include <stdio.h>
int main() {
    int v[10], i, *p, maior;

    printf("Digite 10 números:\n");
    for (p = v; p < v + 10; p++) {
        scanf("%d", p);
    }

    p = v;
    maior = *p;
    for (i = 1; i < 10; i++) {
        if (*(v + i) > maior)
            maior = *(v + i);
    }

    printf("Maior número: %d\n", maior);
    return 0;
}


