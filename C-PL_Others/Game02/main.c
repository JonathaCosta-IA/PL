/*
Produza um código em C para executar o jogo da forca.
Versão 02.
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
        printf("\nVocê tem %d tentativas.\n",jogo.cont);
        printf("\nA palavra é:  ");
        ExibePalavra(jogo.p);
        char l = RecebeLetra();
        printf("\n");
        AtualizaPalavra(jogo.p0,jogo.p,l);
        ExibePalavra(jogo.p);
        system("clear");
        jogo.cont--;
        if (strcmp(jogo.p,jogo.p0)==0) {printf("\n\nParabéns! Você acertou a palavra!\n\n");break;}
        if (jogo.cont==0) {printf("\nTentativas esgotadas!\n\n");break;}
        }
    return 0;
}
