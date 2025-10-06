/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa em C que imprima todos os divisores de um número, utilizando o laço for
*/
#include <stdio.h>
int main() {
    int numero;
    // Solicitar ao usuário para digitar um número
    printf("Digite um número inteiro positivo: "); scanf("%d", &numero);
    // Verificar se o número é positivo
    if (numero <= 0) {
        printf("Por favor, insira um número positivo.\n");
    } else {
        // Imprimir todos os divisores do número
        printf("Os divisores de %d são: ", numero);
        for (int i = 1; i <= numero; i++) 
        {if (numero % i == 0) {printf("%d ", i);} 
        }
        printf("\n");}
    return 0;
}

