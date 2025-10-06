/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa que imprima todos os divisores de um número inteiro positivo.
*/
#include <stdio.h>
int main() {
    int numero, i = 1;
    // Solicita ao usuário que insira um número inteiro positivo
    printf("Digite um número inteiro positivo: "); scanf("%d", &numero);
    // Verifica se o número é positivo
    if (numero <= 0)
    { printf("Por favor, insira um número positivo.\n");
        return 1; // Encerra o programa se o número não for positivo
    }
    // Laço para encontrar e imprimir todos os divisores do número
    printf("Os divisores de %d são:\n", numero);
    while (i <= numero) {
        if (numero % i == 0) {printf("%d\n", i); }
        i++; }
    return 0;
    }

