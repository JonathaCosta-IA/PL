/******************************************************************************
Escopo do código:
Produzir 'n' versões de códigos para a proposta a seguir:
  - Ler 5 valores, encontrar o maior, o menor e a média utilizando números reais (float).
  NOTA: Questão ajustada para usar GLC.
*******************************************************************************/
#include <stdio.h>
#include "bib-code5.h"

int main()
{
    int ch=1;
    while(ch!=0){
        ch = InstrucoesGerais(ch); // Recarrega ch
        if (ch == 0) break;
        if (ch == 1) ExecuteSolucao1();
        if (ch == 2) ExecuteSolucao2();
        if (ch == 3) ExecuteSolucao3();
        if (ch == 4) ExecuteSolucao4();
            };
    return 0;
}
