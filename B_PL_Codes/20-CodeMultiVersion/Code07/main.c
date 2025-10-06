#include <stdio.h>
#include <stdlib.h>
#include "bib-code7.h"

/******************************************************************************
Escopo do código:
Produzir 'n' versões de códigos para a proposta a seguir:
  - Leia um número entre 0 e 10, e escreva este número por extenso.
*******************************************************************************/

int main()
{
    int ch=1;
    do{ch = InstrucoesGerais(ch);   // Recarrega ch
        if (ch == 0) break;
        if (ch == 1) {CabecalhoSolucao(ch);ExecuteSolucao1();}
        if (ch == 2) {CabecalhoSolucao(ch);ExecuteSolucao2();}
        if (ch == 3) {CabecalhoSolucao(ch);ExecuteSolucao3();}
        if (ch == 4) {CabecalhoSolucao(ch);ExecuteSolucao4();}
        }while(ch!=0);
    return 0;
}
