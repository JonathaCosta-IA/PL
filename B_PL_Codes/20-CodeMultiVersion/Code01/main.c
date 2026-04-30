/******************************************************************************
Escopo do código:
Produzir 'n' versões de códigos para a proposta a seguir:
  - Ler um número e informar se o número é maior, menor ou igual a 7,0;
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "bib.h"
#include <stdbool.h>

void RecebeNum(); // Cabeçalho de rotina no próprio arquivo main.c
int main()
{
    int ch = 1;
    int num;
    while (ch != 0)
    {
        printf("\n\nEscolha a versão da solução digitando uma das opções a seguir.\n");
        printf("(0) para encerrar\n");
        for (int i = 1; i < 10; i++)
        {
            printf("(%d) para versão %d\n", i, i);
        }
        // scanf("%d",&ch);
        if (scanf("%d", &ch) != true)
        {   // tenta ler inteiro; retorna 1 (sucesso), 0 (erro) ou EOF
            // true == 1 → condição: “não li 1 inteiro válido”
            printf("Entrada inválida!\n"); // avisa erro
            scanf("%*s");                  // descarta entrada inválida do buffer
            continue;                      // volta ao início do loop
        }

        system("clear");
        switch (ch)
        {
        case 1:
        {
            printf("\nVersão %d em execução.\n", ch);
            printf("Informe um número:\n ");
            scanf("%d", &num);
            if (num < 7)
                printf("O número informado é menor que sete!\n");
            if (num == 7)
                printf("O número informado é igual a sete!\n");
            if (num > 7)
                printf("O número informado é maior que sete!\n");
            break;
        }
        case 2:
        {
            printf("\nVersão %d em execução.\n", ch);
            printf("Informe um número:\n ");
            scanf("%d", &num);
            (num < 7) ? printf("O número informado é menor que sete!\n") : (num == 7) ? printf("O número informado é igual a sete!\n")
                                                                                      : printf("O número informado é maior que sete!\n");
            break;
        }
        case 3:
        {
            printf("\nVersão %d em execução.\n", ch);
            RecebeNum();
            break;
        }
        case 4:
        {
            printf("\nVersão %d em execução.\n", ch);
            RecebeNumV2();
            break;
        }
        case 5:
        {
            printf("\nVersão %d em execução.\n", ch);
            char mensagem[100];
            RecebeNumV3(mensagem);
            printf("%s", mensagem);
            break;
        }
        case 6:
        {
            printf("\nVersão %d em execução.\n", ch);
            const char *mensagem = RecebeNumV4(); // ponteiro para string constante
            printf("%s", mensagem);
            break;
        }
        case 7:
        {
            printf("\nVersão %d em execução.\n", ch);
            int n = RecebeNumGeral();
            ProcessaNum(n);
            break;
        }
        case 8:
        {
            printf("\nVersão %d em construção.\n", ch);
        }
        case 9:
        {
            printf("\nVersão %d em construção.\n", ch);
        }
        }
    }
    return 0;
}

void RecebeNum() // Definição da rotina no próprio arquivo main.c
{
    int num;
    printf("Informe um número:\n ");
    scanf(" %d", &num);
    (num < 7) ? printf("O número informado é menor que sete!\n") : (num == 7) ? printf("O número informado é igual a sete!\n")
                                                                              : printf("O número informado é maior que sete!\n");
}

/*
if (scanf("%d", &ch) != true) {
    // scanf tenta ler um inteiro (%d) e retorna:
    // 1  -> sucesso (leu 1 inteiro)
    // 0  -> falha (entrada não é número, ex: 'a')
    // EOF-> erro ou fim de entrada
    // 'true' vale 1, então:
    // condição significa: "se NÃO li exatamente 1 inteiro válido"

    system("clear");
    // limpa a tela (funciona em Linux/macOS)
    // não é portátil (no Windows seria "cls")

    printf("Entrada inválida!\n");
    // informa ao usuário que a entrada foi inválida

    scanf("%*s");
    // lê e DESCARTA a entrada inválida do buffer
    // evita loop infinito (remove o caractere incorreto)

    continue;
    // volta para o início do loop (while)
    // evita usar valor inválido em 'ch'
}

*/