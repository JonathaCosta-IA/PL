/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa em C que calcule a soma de todos os números pares dos números entre 1 e 100.
*/
#include <stdio.h>
int main() {
    int soma = 0;
    // Usar um loop for para somar todos os números pares de 1 a 100
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {  // Verifica se o número é par
            soma += i;     // Adiciona o número par à soma
        }}
    // Exibir o resultado
    printf("A soma de todos os números pares entre 1 e 100 é: %d\n", soma);
    return 0;
}

