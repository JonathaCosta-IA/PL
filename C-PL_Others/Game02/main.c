/*
Produza um código em C para executar o jogo da forca.
Versão 02,comentada
*/
#include <stdio.h>   // Biblioteca padrão
#include <stdlib.h>  // Uso do srand, rand, system()
#include <string.h>  // Uso do strcpy, etc.
#include <time.h>    // Uso do time()
#include "rotinas.h"

int main()
{
    struct GameInfo jogo = PrepararGame(); // Utilizando a estrutura GameInfo com multi-dados
    while(true)
        {
            printf("\nVocê tem %d tentativas!\n",jogo.cont);
            printf("\nA palavra é:  ");
            printf("%s",jogo.p1);                // Exibindo o valor atual de palavra-exibida
            char l = RecebeLetra();              // Chamando a rotina de recebimento de letra
            AtualizaPalavra(jogo.p0,jogo.p1,l);  // Atualizando a palavra-exibida
            printf("%s",jogo.p1);                // Exibindo o valor atual de palavra-exibida
            system("clear");                     // Limpando a tela
            jogo.cont--;                         // Decrementando as tentativas de erro
            bool res = strcmp(jogo.p1,jogo.p0);  // Comparando se as strings são iguais.'
            if (res==0)                          // res= '0' se as strings foram identicas
                {printf("\n\nParabéns! Você acertou a palavra!\n\n");
                break;}
            if (jogo.cont==0)
                {printf("\nTentativas esgotadas!\n\n");break; }
        }
    return 0;
}
