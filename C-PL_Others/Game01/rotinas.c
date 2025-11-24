#include <stdio.h>   // Biblioteca padrão
#include <stdlib.h>  // Uso do srand, rand, system()
#include <string.h>  // Uso do strcpy, etc.
#include <time.h>    // Uso do time()
#include "rotinas.h"

void EscolhePalavra(char palavra[])
{
    srand(time(NULL));
    int p = 1+rand()%7;
    printf("Número sorteado: %d\n", p);
    if      (p == 1) strcpy(palavra, "um");
    else if (p == 2) strcpy(palavra, "dois");
    else if (p == 3) strcpy(palavra, "tres");
    else if (p == 4) strcpy(palavra, "quatro");
    else if (p == 5) strcpy(palavra, "cinco");
    else if (p == 6) strcpy(palavra, "seis");
    else if (p == 7) strcpy(palavra, "palavra_muito_maior");
}


void ExibePalavra(char p[])
{   int tam = strlen(p);
    printf("Estou em rotinas.c. Tam vale %d\n",tam);
    for(int i=0;i<tam;i++){
    printf("%c",p[i]);
    }
    printf("\n");

}
char RecebeLetra()
{   char l;
    printf("\nInforme uma letra:  "); scanf(" %c",&l);
    return l;
}

void AtualizaPalavra(char p0[],char p[],char letra)
{   int tam = strlen(p);
    for(int i=0;i<tam;i++){
        if(p0[i]==letra) p[i]=letra;
    }

}

