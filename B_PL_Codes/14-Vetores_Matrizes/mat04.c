/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um código em C que receba os elementos de uma matriz inteira de 4 x 4 e
imprima os elementos da diagonal principal.
*/
#include <stdio.h>
int main() {
    int matriz[4][4];  // Declaração da matriz 4x4
    int i, j;
    // Preenchendo a matriz com valores fornecidos pelo usuário
    printf("Digite os valores para preencher a matriz 4x4:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j); scanf("%d", &matriz[i][j]);
        }}
    // Imprimindo os elementos da diagonal principal
    printf("\nElementos da diagonal principal:\n");
    for(i = 0; i < 4; i++) {
        printf("%d\t", matriz[i][i]);}
    printf("\n");
    return 0;
}

