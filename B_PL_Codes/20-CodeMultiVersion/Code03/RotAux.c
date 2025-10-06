#include <stdio.h>
#include "bib.h"

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
        int num;
        case 1:{
                printf("\nVersão %d em execução.\n",ch);
                printf("Informe um número:\n ");scanf("%d",&num);
                int cont_div = 0;
                for(int i=1;i<=num;i++)
                    {if (num%i==0){cont_div++;}
                    }
                if (cont_div==2) printf("O número informado é primo!\n");
                else printf("O número informado não é primo!\n");
               break;
                }
        case 2:{
                printf("\nVersão %d em execução.\n",ch);
                printf("Informe um número:\n ");scanf("%d",&num);
                TestPrimo(num);
                break;
                }
        case 3:{
               num=RecebeNum(ch);
               TestPrimo2(num);
               break;
                }
        case 4:{
               TestPrimo2(RecebeNum(ch));
               break;
                }
              }
}

