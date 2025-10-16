#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "bib-code8.h"

//*****************************************************
// DEFINIÇÕES DE ROTINAS PRINCIPAIS
//*****************************************************

int InstrucoesGerais(int ch)
{
    printf("\n\nEscolha a versão da solução digitando uma das opções a seguir.\n");
    for (int i=0;i<=4;i++){
        if (i==0)  {printf("(0) para encerrar\n");}
        else {printf("(%d) para versão %d\n",i,i);}
                        }
    scanf("%d",&ch);
    return ch;
}

void ExecuteSolucao1()
{
    int a,b;
    bool cond=0;
    while (cond==false){
        printf("\nInforme o primeiro numero (a) com 0 ≤ a ≤ 10: "); scanf(" %d",&a);
        printf("\Informe o segundo numero (b) com 25 ≤ b ≤ 100: "); scanf(" %d",&b);
        if((a<0) || (a>10) || (b<25) || (b>100)) {printf("\nValores fora de intervalo!\nTente novamente!\n");}
        else cond=true;
    }

    printf("\nOs números primos contidos no intervalo %d - %d são: ",a,b);
    for(int i=a;i<=b;i++)
    {   // Teste de números primo
        if (i>1){
            int cont = 2;                           // Contador de divisores do número 1 e o num
            for (int j = 2; j <= i / 2; j++)      // Limite de divisores (num/2) ver o comentário
                {if (i % j == 0){cont++;break;}}  // Encontra dividores
            if (cont == 2) printf("%d ",i); // Se cont ainda for 0, então o número é primo
            };
    }
}

void ExecuteSolucao2()
{
    int a,b;
    bool cond=0;
    while (cond==false){
        printf("\nInforme o primeiro numero (a) com 0 ≤ a ≤ 10: ");scanf(" %d",&a);
        printf("Informe o segundo numero (b)com 25 ≤ b ≤ 100: ");scanf(" %d",&b);
        if((a<0) || (a>10) || (b<25) || (b>100)) {printf("\nValores fora de intervalo!\nTente novamente!\n");}
        else cond=true;
    }
    printf("\nOs números primos contidos no intervalo %d - %d são: ",a,b);
    for(int i=a;i<=b;i++)
    { Test1Primo(i);}
}

void ExecuteSolucao3()
{
    int a,b;
    ReceberNumeros(&a,&b);
    printf("\nOs números primos contidos no intervalo %d - %d são: ",a,b);
    for(int i=a;i<=b;i++)
    { Test1Primo(i);}
}

void ExecuteSolucao4()
{
    int a = GerarNum(0,10);
    int b = GerarNum(25,100);
    printf("\nNumeros gerados utilizando o GLC.");
    printf("\nOs números primos contidos no intervalo %d - %d são:\n ",a,b);
    for(int i=a;i<=b;i++)
    { Test1Primo(i);}
}


//*****************************************************
// FUNÇÕES AUXILIARES DE SUB-ROTINAS
//*****************************************************

void ReceberNumeros(int *a,int *b)
{
    bool cond=0;
    while (cond==false)
        {
        printf("\nInforme o primeiro numero (a) com 0 ≤ a ≤ 10: ");scanf(" %d",a);
        printf("Informe o segundo numero (b)com 25 ≤ b ≤ 100: ");scanf(" %d",b);
        if((*a<0) || (*a>10) || (*b<25) || (*b>100)) {printf("\nValores fora de intervalo!\nTente novamente!\n");}
        else cond=true;
        }
/* Comentário:
   Visto que a e b são ponteiros, o próprio scanf muda sua chamada de "&a" para apenas "a", por exemplo.
*/
}

void Test1Primo(int num)
{
    if (num>1){
        int cont = 2;                           // Contador de divisores do número 1 e o num
        for (int j = 2; j <= num / 2; j++)      // Limite de divisores (num/2) ver o comentário
            {if (num % j == 0){cont++;break;}}  // Encontra dividores
        if (cont == 2) printf("%d ",num); // Se cont ainda for 0, então o número é primo
            }
}


int GerarNum(int v1,int v2)
{
    srand(time(NULL));
    return  rand() % (v2 - v1 + 1) + v1;
/*
COMENTÁRIO
- rand() gera um número inteiro entre 0 e RAND_MAX.
- O operador % limita o valor ao intervalo desejado por (range) + (inicio).
- Logo: (75 + 1) + (25) garante que o valor final vá de 25 até 100, inclusive.
  O uso do +1 é para incluir o elemento final do range.
*/

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

