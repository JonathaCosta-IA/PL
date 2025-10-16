/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um código em C que crie um algoritmo que leia os elementos de uma matriz
inteira de 3 x 3 e imprima outra matriz multiplicando cada elemento da primeira matriz
por 2.
*/
#include <stdio.h>
int main() {
    int matriz[3][3];        // Declaração da matriz original 3x3
    int matrizMultiplicada[3][3];  // Declaração da matriz que conterá os elementos multiplicados
    int i, j;
    // Preenchendo a matriz original com valores fornecidos pelo usuário
    printf("Digite os valores para preencher a matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j); scanf("%d", &matriz[i][j]);}}
    // Criando a nova matriz multiplicada por 2
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            matrizMultiplicada[i][j] = matriz[i][j] * 2;}}
    // Imprimindo a matriz original
    printf("\nMatriz Original 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);}
            printf("\n");}
    // Imprimindo a matriz multiplicada por 2
    printf("\nMatriz Multiplicada por 2 (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matrizMultiplicada[i][j]);}
        printf("\n");}
    return 0;
}

