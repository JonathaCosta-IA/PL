/******************************************************************************
Escopo do código:
Produzir '4' versões de códigos para a proposta a seguir:
  - Ler um número e informar se o número par ou impar;
*******************************************************************************/
#include <stdio.h>
#include "bib.h"

int main()
{   int ch=1;
    int num;
    while(ch!=0){
    printf("\n\nEscolha a versão da solução digitando uma das opções a seguir.\n");
    printf("(0) para encerrar\n");
    for (int i=1;i<=4;i++){printf("(%d) para versão %d\n",i,i);}
    scanf("%d",&ch);
    switch(ch)
        {
        case 1:{
            printf("\nVersão %d em execução.\n",ch);
            printf("Informe um número:\n ");scanf("%d",&num);
            if (num%2==0) printf("O número informado é par!\n");
            else printf("O número informado é impar!\n");
            break;
            }
        case 2:{
            printf("\nVersão %d em execução.\n",ch);
            RecebeNumTestaNum();
            break;}
        case 3:{
            printf("\nVersão %d em execução.\n",ch);
            int num=RecebeNum();
            TestaNum(num);
            break;
                }
        case 4:{
            printf("\nVersão %d em execução.\n",ch);
            int num=RecebeNum();
            const char* resultado =  TestaNumV1(num);  // ponteiro para string constante
            printf("%s", resultado);
            break;
                }
        }
}
return 0;
}
