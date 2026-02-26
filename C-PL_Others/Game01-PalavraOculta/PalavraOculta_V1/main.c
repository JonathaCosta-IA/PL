/*
Produza um código em C para executar o jogo da palavra oculta.
Versão 01, comentada.
*/
#include <stdio.h>   // Biblioteca padrão
#include <stdlib.h>  // Uso do srand, rand, system()
#include <string.h>  // Uso do strcpy, etc.
#include <time.h>    // Uso do time()
#include "rotinas.h"

int main()
{
    char p0[20];         // Definindo um vetor para a palavra-alvo
    EscolhePalavra(p0);  // Definindo qual a palavra-alvo
    char p1[strlen(p0)]; // Definindo um vetor para a palavra-exibida
    for (int i=0; i < strlen(p0) ; i++) // Definir o valor '*' para palavra-exibida
    {p1[i]='*';}
    int cont = strlen(p0) + 3;        // Carregando um contador de erros

    while(true)
        {
            printf("\nVocê tem %d tentativas!\n",cont);
            printf("\nA palavra é:  ");
            printf("%s",p1);                // Exibindo o valor atual de palavra-exibida
            char l = RecebeLetra();         // Chamando a rotina de recebimento de letra
            AtualizaPalavra(p0,p1,l);       // Atualizando a palavra-exibida
            printf("%s",p1);                // Exibindo o valor atual de palavra-exibida
            system("clear");                // Limpando a tela
            cont--;                         // Decrementando as tentativas de erro
            bool res = strcmp(p1,p0);       // Comparando se as strings são iguais.'
            if (res==0)                     //res= '0' se as strings foram identicas
                {printf("\n\nParabéns! Você acertou a palavra!\n\n");
                break; // Saindo do while
                }
            if (cont==0)
                {printf("\nTentativas esgotadas!\n\n");
                break; // Saindo do while
                }
        }
    return 0;
}
