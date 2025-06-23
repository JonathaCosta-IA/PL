/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa em C que receba um dígito e informe se é uma pontução identificando-o (. : ;  ! ? ).
*/
#include <stdio.h>
int main() {
    char digito;
    // Solicitar ao usuário que insira um caractere
    printf("Digite um caractere: ");
    scanf("%c", &digito);
    // Verificar se o caractere é um sinal de pontuação
    switch (digito) {
        case '.':  printf("Você digitou um ponto final.\n"); break;
        case ':': printf("Você digitou dois pontos.\n"); break;
        case ';':  printf("Você digitou um ponto e vírgula.\n"); break;
        case '!':  printf("Você digitou um ponto de exclamação.\n"); break;
        case '?':  printf("Você digitou um ponto de interrogação.\n"); break;
        default: printf("O caractere digitado não é um sinal de pontuação reconhecido.\n");
    }
    return 0;
}

