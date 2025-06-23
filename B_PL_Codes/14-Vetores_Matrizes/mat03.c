/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um código em C que receba 6 valores numéricos inteiros numa matriz 2 x 3 e
mostre a soma destes 6 números.
*/
#include <stdio.h>
int main() {
    int matriz[2][3];  // Declaração da matriz 2x3
    int soma = 0;      // Variável para armazenar a soma dos elementos
    int i, j;
    // Preenchendo a matriz com valores fornecidos pelo usuário
    printf("Digite 6 valores inteiros para preencher a matriz 2x3:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];  // Acumulando o valor na variável soma
        }}
    // Exibindo a soma dos elementos da matriz
    printf("\nA soma dos elementos da matriz é: %d\n", soma);
    return 0;
}

