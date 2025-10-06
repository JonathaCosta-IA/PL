/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
screva um código em C que receba os elementos de uma matriz inteira de 3 x 3 e
imprima todos os elementos, exceto os elementos da diagonal principal.
*/
#include <stdio.h>

int main() {
    int matriz[3][3];  // Declaração da matriz 3x3
    int i, j;
    // Preenchendo a matriz com valores fornecidos pelo usuário
    printf("Digite os valores para preencher a matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j); scanf("%d", &matriz[i][j]);}
                            }
    // Imprimindo todos os elementos, exceto os da diagonal principal
    printf("\nElementos da matriz, exceto os da diagonal principal:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(i != j) {  // Condição para excluir os elementos da diagonal principal
                printf("%d\t", matriz[i][j]);
            } else {
                printf("\t");  // Espaço em branco para manter o alinhamento
            }}
        printf("\n");}
    return 0;
}

