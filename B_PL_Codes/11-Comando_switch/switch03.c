/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa em C que leia um número entre 0 e 10 e escreva este número por extenso. Utilize o comando switch.
*/
#include <stdio.h>
int main() {
    int numero;
    // Solicitar ao usuário para inserir um número entre 0 e 10
    printf("Digite um número entre 0 e 10: ");
    scanf("%d", &numero);
    // Verificar se o número está dentro do intervalo permitido
    if (numero < 0 || numero > 10) {
        printf("Número fora do intervalo permitido.\n");
        return 1; // Encerra o programa se o número estiver fora do intervalo
    }
    // Escrever o número por extenso
    switch (numero) {
        case 0: printf("Zero\n"); break;
        case 1: printf("Um\n"); break;
        case 2: printf("Dois\n"); break;
        case 3: printf("Três\n"); break;
        case 4: printf("Quatro\n"); break;
        case 5: printf("Cinco\n"); break;
        case 6: printf("Seis\n"); break;
        case 7: printf("Sete\n"); break;
        case 8: printf("Oito\n"); break;
        case 9: printf("Nove\n"); break;
        case 10: printf("Dez\n"); break;
        default: printf("Erro inesperado.\n"); break;
    }
    return 0;
}

