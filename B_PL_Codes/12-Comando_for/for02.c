/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa em C que leia a idade de 10 pessoas e imprima quantas são maiores de idade, utilizando o for.
*/
#include <stdio.h>
int main() {
    int idade, contador_maior = 0;
    // Ler a idade de 10 pessoas
    for (int i = 1; i <= 10; i++) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        // Verificar se a pessoa é maior de idade (18 anos ou mais)
        if (idade >= 18) {
            contador_maior++; }}
    // Exibir a quantidade de pessoas maiores de idade
    printf("Quantidade de pessoas maiores de idade: %d\n", contador_maior);
    return 0;
}


