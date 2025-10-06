/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um código em C que preencha um vetor com 10 números e retorne quais são
os números ímpares deste vetor.
*/
#include <stdio.h>
int main() {
    int vetor[10], int i;
    // Preenchendo o vetor com números
    printf("Digite 10 números:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);}
    // Exibindo os números ímpares do vetor
    printf("Números ímpares no vetor:\n");
    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 != 0) {
            printf("%d ", vetor[i]);
        }}
    printf("\n");
    return 0;
}

