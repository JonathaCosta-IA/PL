#include <stdio.h>
#include "bib-code4.h"

/*
Estruturas de chamadas do código em nível mais baixo, sub-rotinas.
*/

void TestNum(float num)
{    int num_int = (int) num;
     if((num>0) & (num - num_int==0)) {printf("O número informado (%.0f) pertence aos naturais!",num);}
     else {printf("O número informado (%.2f) não pertence aos naturais!",num);}
}

int RecebeNum(int ch)
{   int x;
    printf("\nVersão %d em execução.\n",ch);
    printf("Informe um número:\n ");scanf("%d",&x);
    return x;
}
