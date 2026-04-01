/******************************************************************************
Escopo do código:
Produzir 'n' versões de códigos para a proposta a seguir:
  - Ler um letra e verificar se é vogal ou não.
  NOTA: Questão ajustada para usar GLC.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "bib-code6.h"

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


