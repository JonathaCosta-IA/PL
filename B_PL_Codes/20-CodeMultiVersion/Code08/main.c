#include <stdio.h>
#include <stdlib.h>
#include "bib-code8.h"

/******************************************************************************
Escopo do código:
Produzir 'n' versões de códigos para a proposta a seguir:
  - Elabore um código que receba dois números, a e b tal que 0 ≤ a ≤ 10 e
    25 ≤ b ≤ 100, identifique e informe os valores ímpares de primos contidos
    nesse intervalo.
  - Questão adaptada para utilizar GLC.
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
