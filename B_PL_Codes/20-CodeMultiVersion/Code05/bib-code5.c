#include <stdio.h>
#include "bib-code5.h"
#include <stdlib.h>

/*
Estruturas de chamadas do código em nível mais elevado.
*/
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
{   system("clear");
    for (int i=0;i<33;i++){printf("%s","*");}
    printf ("\nSolução da versão 01 em execução.\n");
    for (int i=0;i<33;i++){printf("%s","*");}

    float v[5];
    CarregaValores1(v);
    float M=v[0],m=v[0],soma=0.0;
    for (int i=0;i<5;i++){
        if (v[i]>M) M=v[i];
        if (v[i]<m) m=v[i];
        soma+=v[i];
        }
    printf ("\n\nDentre os números:");
    for (int i=0;i<5;i++){printf(" %.2f ",v[i]);}
    printf("\nO maior valor dentre os numeros é %.2f.",M);
    printf("\nO menor valor dentre os numeros é %.2f.",m);
    printf("\nA média entre os valores é %.2f.",soma/5);

}
void ExecuteSolucao2()
{   system("clear");
    DestaqueSol();
    printf ("\nSolução da versão 02 em execução.\n");
    DestaqueSol();

    float valores[5];
    float* v = CarregaValores2(valores);  // Carrega valores do vetor usando ponteiros
    float M=v[0],m=v[0],soma=0.0;
    for (int i=0;i<5;i++){
        if (v[i]>M) M=v[i];
        if (v[i]<m) m=v[i];
        soma+=v[i];
        }
    printf ("\n\nDentre os números:");
    for (int i=0;i<5;i++){printf(" %.2f ",v[i]);}
    printf("\nO maior valor dentre os numeros é %.2f.",M);
    printf("\nO menor valor dentre os numeros é %.2f.",m);
    printf("\nA média entre os valores é %.2f.",soma/5);
}

void ExecuteSolucao3()
{    system("clear");
     DestaqueSol();
     printf ("\nSolução da versão 03 em execução.\n");
     DestaqueSol();

     float valores[5];
     float* v = CarregaValores2(valores);
     ExecuteTesteNumeros(v);
}
void ExecuteSolucao4()
{   system("clear");
    DestaqueSol();
    printf ("\nSolução da versão 04 em execução.\n");
    DestaqueSol();

    float valores[5];
    float M, m, total;
    float* v = CarregaValores2(valores);

    ExecuteTeste2Numeros(v, &M, &m, &total); //  Endereço dos ponteiros na chamada da função.

    printf ("\n\nDentre os números:");
    for (int i=0;i<5;i++){printf(" %.2f ",v[i]);}
    printf("\nO maior valor dentre os numeros é %.2f.",M);
    printf("\nO menor valor dentre os numeros é %.2f.",m);
    printf("\nA média entre os valores é %.2f.",total/5);

/*
COMENTÁRIO:
Veja que primeiro nesta versão declaramos as variáveis diretas: float valores[5], M, m, total.

Depois, chamamos uma função para alterar todas essas variáveis de uma só vez e mandar um retorno
de alteração/atualizaçao de todas. Porém, isso não pode ser feito diretamente em C, como noutras
linguagens, por exemplo em Python.

Isso ocorre porque, em C, os argumentos são passados por valor. Ou seja, a função recebe apenas
uma CÓPIA das variáveis — e NÃO consegue alterá-las diretamente.

Por isso, faz-se necessário passar para a função o ENDEREÇO das variáveis de interesse usando "&",
como em: &M, &m, &total.

Dessa forma, ao usar &M, &m, &total, estamos dizendo:
"Função, aqui está o endereço de memória de M, m e total. Modifique diretamente os conteúdos
 dessas variáveis."

A função, por sua vez, trata os endereços &M, &m, &total por meio de ponteiros, definidos
assim no momento da construção da função (veja no arquivo "rotaux.c",a função
"ExecuteTeste2Numeros"):

    *M =v[0];
    *m =v[0];
    *total=0.0;
    for (int i=0;i<5;i++){
    if (v[i]>*M) *M=v[i];
    if (v[i]<*m) *m=v[i];
    *total+=v[i];
        }
Resumindo:
  Chamada da função (no main)
    -   Usa o operador de endereço (&) : "Onde está isso"
    -   ExecuteTeste2Numeros(valores, &M, &m, &total);

  Declaração da função (protótipo)
    -  Usa o operador de desreferência, ou indireção (*): "O que tem lá?"
    -  void ExecuteTeste2Numeros(float v[], float* M, float* m, float* total);
*/

}


