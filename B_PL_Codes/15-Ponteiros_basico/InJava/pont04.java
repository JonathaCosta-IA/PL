/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido com ponteiros.
Escreva um código em C que preencha um vetor com 10 números e retorne quais são os números primos deste veto
*/

#include <stdio.h>

int main() {
    int v[10], i, j, primo, *p;

    printf("Digite 10 números:\n");
    for (p = v; p < v + 10; p++) {
        scanf("%d", p);
    }

    printf("Números primos:\n");
    for (p = v; p < v + 10; p++) {
        if (*p < 2) continue;
        primo = 1;
        for (j = 2; j <= *p / 2; j++) {
            if (*p % j == 0) {
                primo = 0;
                break;
            }
        }
        if (primo) printf("%d ", *p);
    }

    printf("\n");
    return 0;
}

