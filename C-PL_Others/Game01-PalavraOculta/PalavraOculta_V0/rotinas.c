#include <stdio.h>   // Biblioteca padrão
#include <time.h>    // Uso do time()
#include "rotinas.h"

char RecebeLetra()
{   char l;
    printf("\nInforme uma letra:  "); scanf(" %c",&l);
    return l;
}

int ContPalavra(char p[])
{
  // Recebe o vetor e conta os valores ate encontrar o caracter nulo '\0'.
     int i;
     for (i=0; ;i++){if (p[i] == '\0') break;}
     return i;
}

void AtualizaPalavra(char p0[],char p1[],char letra)
{   int tam = ContPalavra(p1);
    for(int i=0;i<tam;i++)
       {if(p0[i]==letra) p1[i]=letra;}
}

int compare(char p1[],char p2[])
{
   int letra_diferente = 1;    // Assumindo que não existe letra diferente;
   int tam = ContPalavra(p1);  // Verificando o tamanho da palavra;
   for (int i=0;i<tam;i++)
   { if (p1[i] != p2[i])
        {letra_diferente = 0;  // Comuta para 0 se encontrar qualquer letra diferente
          break;}
   }
   return letra_diferente;
}

