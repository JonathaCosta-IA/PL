/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa que solicite um número ao usuário, e mostre sua tabuada completa (de 1 até 10).
*/
#include <stdio.h>
int main() {
    int numero, i = 1;
    // Solicitar ao usuário que insira um número
    printf("Digite um número para ver a sua tabuada: ");
    scanf("%d", &numero);
    // Laço while para gerar a tabuada de 1 a 10
    while (i <= 10) {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++; // Incrementar o contador}
    return 0;
}


