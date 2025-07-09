/*
Produza um código em C para executar o jogo da forca.
Versão 01.
*/
#include <stdio.h>   // Biblioteca padrão
#include <stdlib.h>  // Uso do srand, rand, system()
#include <string.h>  // Uso do strcpy, etc.
#include <time.h>    // Uso do time()
#include "rotinas.h"

int main()
{
    char p0[20];
    EscolhePalavra(p0);
    int tam = strlen(p0);
    char p[tam];
    for (int i=0; i<tam ; i++)
        {p[i]='*';}
    int cont = tam + 3;
    while(true)
        {
        printf("\nVocê tem %d tentativas.\n",cont);
        printf("\nA palavra é:  ");
        ExibePalavra(p);
        char l = RecebeLetra();
        printf("\n");
        AtualizaPalavra(p0,p,l);
        ExibePalavra(p);
        system("clear");
        cont--;
        if (strcmp(p,p0)==0) {printf("\n\nParabéns! Você acertou a palavra!\n\n");break;}
        if (cont==0) {printf("\nTentativas esgotadas!\n\n");break;}
        }
    return 0;
}
