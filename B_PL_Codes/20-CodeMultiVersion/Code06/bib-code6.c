#include <stdio.h>
#include <stdlib.h>
#include "bib-code6.h"

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
    char letra;
    printf("\n\nInforme uma letra: ");scanf(" %c",&letra);
    Teste1Letra(letra);
}

void ExecuteSolucao2()
{
    char letra = LeituraLetra();
    Teste2Letra(letra);
}
void ExecuteSolucao3()
{
    char letra = LeituraLetra();    // LeituraLetra retorna um char
    char* dado = &letra;            // ponteiro para letra
    Teste2Letra(*dado);             // desreferencia para passar o char
                                    // Note que é usada a mesma Funçao Teste2Letra, porem agora passando o endereço pelo ponteiro;
}
void ExecuteSolucao4()
{
    char letra = LeituraLetra();    // LeituraLetra retorna um char
    char* dado = &letra;            // ponteiro para letra
    Teste3Letra(*dado);             // desreferencia para passar o char

}

//*****************************************************
// FUNÇÕES AUXILIARES DE SUB-ROTINAS
//*****************************************************

char LeituraLetra()
{
    char letra;
    printf("\n\nInforme uma letra: ");scanf(" %c",&letra);
    return letra;
}

void Teste1Letra(char letra)
{
    if (
        (letra == 'a') || (letra == 'A') ||
        (letra == 'e') || (letra == 'E') ||
        (letra == 'i') || (letra == 'I') ||
        (letra == 'o') || (letra == 'O') ||
        (letra == 'u') || (letra == 'U')
       ) printf("A letra é uma vogal!");
    else
        printf("A dado informado não é uma vogal!");
}


void Teste2Letra(char letra)
{
    switch (letra){
        case 'a' : {printf("A letra é uma vogal!"); break;}
        case 'e' : {printf("A letra é uma vogal!"); break;}
        case 'i' : {printf("A letra é uma vogal!"); break;}
        case 'o' : {printf("A letra é uma vogal!"); break;}
        case 'u' : {printf("A letra é uma vogal!"); break;}
        case 'A' : {printf("A letra é uma vogal!"); break;}
        case 'E' : {printf("A letra é uma vogal!"); break;}
        case 'I' : {printf("A letra é uma vogal!"); break;}
        case 'O' : {printf("A letra é uma vogal!"); break;}
        case 'U' : {printf("A letra é uma vogal!"); break;}
        default: printf("A dado informado não é uma vogal!");
                }
}


void Teste3Letra(char letra)
{
    ((letra == 'a') || (letra == 'A') ||
    (letra == 'e') || (letra == 'E') ||
    (letra == 'i') || (letra == 'I') ||
    (letra == 'o') || (letra == 'O') ||
    (letra == 'u') || (letra == 'U')) ? printf("A letra é uma vogal!"):
    printf("A dado informado não é uma vogal!");
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

