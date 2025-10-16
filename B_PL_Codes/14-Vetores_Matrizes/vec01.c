/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um código em C que preencha um vetor com 10 números e indique o maior
número ao varrer o vetor preenchido.
*/
#include <stdio.h>
int main() {
    int vetor[10], i, maior;
    // Preenchendo o vetor com números
    printf("Digite 10 números:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1); 
        scanf("%d", &vetor[i]);
    }
    // Inicializando o maior número como o primeiro elemento do vetor
    maior = vetor[0];
    // Encontrando o maior número no vetor
    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }}
    // Exibindo o maior número
    printf("O maior número é: %d\n", maior);
    return 0;
}

