#include <stdio.h>
#include "bib-code4.h"
#include <stdlib.h>
/*
Estruturas de chamadas do código em nível mais elevado.
*/
void ExecuteInstrucoes(int ch)
{
    while(ch!=0)
    {
        printf("\n\nEscolha a versão da solução digitando uma das opções a seguir.\n");
        printf("(0) para encerrar\n");
        for (int i=1;i<=4;i++){printf("(%d) para versão %d\n",i,i);}
        scanf("%d",&ch);
        ExecuteSwitch(ch);
    }
}

void ExecuteSwitch(int ch){
    switch(ch){
        float num;
        case 1:{
                printf("\nVersão %d em execução.\n",ch);
                printf("Informe um número:\n ");scanf("%f",&num);
                int num_int = (int) num;
                if((num>0) & (num - num_int==0)) printf("O número informado (%.0f) pertence aos naturais!",num);
                else printf("O número informado (%.2f) não pertence aos naturais!",num);
                system("clear"); // use "cls" no Windows
               break;
                }
        case 2:{
                printf("\nVersão %d em execução.\n",ch);
                printf("Informe um número:\n ");scanf("%f",&num);
                TestNum(num);
                system("clear"); // use "cls" no Windows
                break;
                }
        case 3:{
               num=RecebeNum(ch);
               TestNum(num);
               system("clear"); // use "cls" no Windows
               break;
                }
        case 4:{
               TestNum(RecebeNum(ch));
               system("clear"); // use "cls" no Windows
               break;
                }
              }
}
