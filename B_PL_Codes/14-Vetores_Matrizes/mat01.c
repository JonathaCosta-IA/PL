/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um código em C que preencha uma matriz 3 x 3 e imprima-a.
*/
#include <stdio.h>
int main() {
    int matriz[3][3];  // Declaração da matriz 3x3
    int i, j;
    // Preenchendo a matriz com valores fornecidos pelo usuário
    printf("Digite os valores para preencher a matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);}}
    // Imprimindo a matriz
    printf("\nMatriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);}
        printf("\n");}
    return 0;
}


