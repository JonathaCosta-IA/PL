/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa que mostre todos os números ímpares de 1 até 100 utilizando o comando while.
*/
#include <stdio.h>
int main() {
    int numero = 1;
    // Enquanto o número for menor ou igual a 100, o laço continua
    while (numero <= 100) {
        // Verifica se o número é ímpar
        if (numero % 2 != 0) { printf("%d\n", numero); }
        numero++;    // Incrementa o número
                                            }
    return 0;
}

