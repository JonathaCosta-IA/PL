#include <stdio.h>
#include <stdlib.h>
#include "bib-code7.h"

//*****************************************************
// DEFINIÇÕES DE ROTINAS
//*****************************************************

int InstrucoesGerais(int ch)
{
    printf("\n\nEscolha a versão da solução digitando uma das opções a seguir.\n");
    for (int i=0;i<=4;i++){
        if (i==0)  {printf("(0) para encerrar\n");}
        else {printf("(%d) para versão %d\n",i,i);}
                        }
    scanf(" %d",&ch);
    return ch;
}

void ExecuteSolucao1()
{
    int num;
    printf("\n\nInforme uma numero entre 0-10: ");scanf(" %d",&num);
    Teste1Num(num);
}

void ExecuteSolucao2()
{
    int num = LeituraNum();
    Teste2Num(num);
}
void ExecuteSolucao3()
{
    int num = LeituraNum();         // Leitura de um numero retorna um int
    int* dado = &num;               // ponteiro para o numero
    Teste2Num(*dado);             // desreferencia para passar o char
                                    // Note que é usada a mesma Funçao Teste2Letra, porem agora passando o endereço pelo ponteiro;
}
void ExecuteSolucao4()
{
    int num = LeituraNum();       // Leitura de um numero retorna um int
    int* dado = &num;             // ponteiro para letra
    Teste3Num(*dado);           // desreferencia para passar o char

}

//*****************************************************
// FUNÇÕES AUXILIARES DE SUB-ROTINAS
//*****************************************************

int LeituraNum()
{
    int num;
    printf("\n\nInforme um numero: ");scanf(" %d",&num);
    return num;
}

void Teste1Num(int num)
{
    if (num==1) printf("O número informado é um.");
    else if (num==2) printf("O número informado é dois.");
    else if (num==3) printf("O número informado é três.");
    else if (num==4) printf("O número informado é quatro.");
    else if (num==5) printf("O número informado é cinco.");
    else if (num==6) printf("O número informado é seis.");
    else if (num==7) printf("O número informado é sete.");
    else if (num==8) printf("O número informado é oito.");
    else if (num==9) printf("O número informado é nove.");
    else
        printf("O dado informado não é uma entrada válida no intervalo entre 0 e 10!");
}


void Teste2Num(int num)
{
    switch (num){
        case 1 : {printf("O número informado é um."); break;}
        case 2 : {printf("O número informado é dois."); break;}
        case 3 : {printf("O número informado é três."); break;}
        case 4 : {printf("O número informado é quatro."); break;}
        case 5 : {printf("O número informado é cinco");break;}
        case 6 : {printf("O número informado é seis."); break;}
        case 7 : {printf("O número informado é sete."); break;}
        case 8 : {printf("O número informado é oito."); break;}
        case 9 : {printf("O número informado é nove."); break;}
        default:  printf("O dado informado não é uma entrada válida no intervalo entre 0 e 10!");
                }
}


void Teste3Num(int num)
{

(num==1) ? printf("O número informado é um."):
(num==2) ? printf("O número informado é dois."):
(num==3) ? printf("O número informado é três."):
(num==4) ? printf("O número informado é quatro."):
(num==5) ? printf("O número informado é cinco."):
(num==6) ? printf("O número informado é seis."):
(num==7) ? printf("O número informado é sete."):
(num==8) ? printf("O número informado é oito."):
(num==9) ? printf("O número informado é nove."):
           printf("O dado informado não é uma entrada válida no intervalo entre 0 e 10!");

}

//*****************************************************
// FUNÇÕES DE MELHORIA DE INTERAÇAO COM O USUÁRIO
//*****************************************************

void CabecalhoSolucao(int i)
{
    system("clear");
    DestaqueSol();
    printf ("\nSolução da versão 0%d em execução.\n",i);
    DestaqueSol();
}

void DestaqueSol()
{
     for (int i=0;i<33;i++){printf("%s","*");}
}

