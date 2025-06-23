/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa que solicite 10 números ao usuário, através de um laço while, e ao final mostre qual destes números é o maior.
*/
#include <stdio.h>
int main() {
    int numero, i = 1, maior;
    // Solicitar o primeiro número e o assume como o maior inicialmente
    printf("Digite o número 1: ");
    scanf("%d", &numero);
    maior = numero;
    // Laço while para solicitar os outros 9 números
    while (i < 10) 
    {    printf("Digite o número %d: ", i + 1); scanf("%d", &numero);
        // Verificar se o número atual é maior que o maior registrado
        if (numero > maior) { maior = numero;}
        i++;  }
    // Exibir o maior número digitado
    printf("O maior número digitado foi: %d\n", maior);
    return 0;
}



