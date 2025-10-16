#include <stdio.h>
#include <stdlib.h>
#include "bib-code9.h"

/******************************************************************************
Escopo do código:
Produzir 'n' versões de códigos para a proposta a seguir:
  (1) Somatorio de xi;
  (2) Somatorio de xi*yi;
  (3) Somatorio da raiz i-esima de (xi² + yi²);

  Sendo x={1, 2, 3, 4, 5, 6, 7, 8, 9, 10} e y={10, 9, 8, 7, 6, 5, 4, 3, 2, 1}.
*******************************************************************************/

int main()
{   int ch;
    do{ch=InstrucoesGerais(ch);   // Recarrega ch
        if (ch == 0) break;
        if (ch == 1) {CabecalhoSolucao(ch);ExecuteSolucao1();}
        if (ch == 2) {CabecalhoSolucao(ch);ExecuteSolucao2();}
        if (ch == 3) {CabecalhoSolucao(ch);ExecuteSolucao3();}
        if (ch == 4) {CabecalhoSolucao(ch);ExecuteSolucao4();}
        }while(ch!=0);
    return 0;
}
