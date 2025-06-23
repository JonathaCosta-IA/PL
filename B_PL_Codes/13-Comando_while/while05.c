/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
 Escreva um programa que leia 10 números e escreva a diferença entre o maior e o menor valor lido.
*/
#include <stdio.h>
int main() {
    int numero, i = 1, maior, menor;
    // Solicita o primeiro número e o define como maior e menor
    printf("Digite o número 1: ");  scanf("%d", &numero);
    maior = numero;    menor = numero;
    // Laço while para solicitar os outros 9 números
    while (i < 10) {
        printf("Digite o número %d: ", i + 1); scanf("%d", &numero);
        // Atualizar o maior e menor número conforme necessário
        if (numero > maior) { maior = numero; }
        if (numero < menor) { menor = numero; }
        i++;  }
    // Calcular e exibir a diferença entre o maior e o menor número
    printf("A diferença entre o maior e o menor valor lido é: %d\n", maior - menor);
    return 0;
}



