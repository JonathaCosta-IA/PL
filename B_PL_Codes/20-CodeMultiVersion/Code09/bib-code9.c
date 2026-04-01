#include <stdio.h>
#include <stdlib.h>
#include "bib-code9.h"
#include <math.h>

/*
FUNÇÕES PRINCIPAIS
*/
void ExecuteSolucao1()
{   /*Neste solução todos os elementos são definicos em processo direto, sem uso de subfunçoes,
    e os vetores são inicializados com uma lista de valores.
    */
    int x[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int y[]={10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    printf("\n\nX = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}"
           "\nY = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}\n");
    float S=0;
    for (int i=0;i<10;i++){S+=x[i];}
    printf("\nA valor do somatorio de Xi é: %.1f",S);
    S=0;
    for (int i=0;i<10;i++){S+=x[i]*y[i];}
    printf("\nA valor do somatorio de Xi*Yi é: %.1f",S);
    S=0;
    for (int i=0;i<10;i++){float aux = pow(x[i],2) + pow(y[i],2);
                            S+= pow(aux,1.0/(i+1));}
    printf("\nA valor do somatorio da raiz i-ésima de (Xi² + Yi²) é: %.1f",S);
// Em C e permitido inicializar um vetor com {...}
    // no momento em que ele é declarado,
    // Pode ser x[3]={1,2,3,4} tamanho declarado estrito
    // ou x[]={1,2,3,4} - tamanho deduzido pelo compilador

}
void ExecuteSolucao2()
{  /*Neste solução todos os elementos são definicos em processo direto, com uso de subfunçoes,
     para carregar os vetores.
    */
    int x[10]={}; // Lista vazia, com tamanho do vetor definido
    int y[10]; // Lista vazia, com tamanho do vetor definido
    CarregaVetores(x,y);
    ImprimeVetores(x,y);

    float S=0;
    for (int i=0;i<10;i++){S+=x[i];}
    printf("\nA valor do somatorio de Xi é: %.2f",S);
    S=0;
    for (int i=0;i<10;i++){S+=x[i]*y[i];}
    printf("\nA valor do somatorio de Xi*Yi é: %.2f",S);
    S=0;
    for (int i=0;i<10;i++){float aux = pow(x[i],2) + pow(y[i],2);
                            S+= pow(aux,1.0/(i+1));}
    printf("\nA valor do somatorio da raiz i-ésima de (Xi² + Yi²) é: %.2f",S);

}
void ExecuteSolucao3()
{  /* Simile a solução 02, porém com chamada de funções externas para os cálculos dos somatorios.
     A subdfunçoes são do tipo retorn float.
*/
    int x[10],y[10];
    CarregaVetores(x,y);
    ImprimeVetores(x,y);

    float soma1 = CalculaSomatorio1(x,y);
    float soma2 = CalculaSomatorio2(x,y);
    float soma3 = CalculaSomatorio3(x,y);

    printf("\nA valor do somatorio de Xi é: %.3f",soma1);
    printf("\nA valor do somatorio de Xi*Yi é: %.3f",soma2);
    printf("\nA valor do somatorio da raiz i-ésima de (Xi² + Yi²) é: %.3f",soma3);

}
void ExecuteSolucao4()
{  /* Simile a solução 03, porém com chamada de funções externas utilizando ponteiros.
*/
    int x[10],y[10];
    CarregaVetores(x,y);
    ImprimeVetores(x,y);

    float soma1 = CalculaSomatorio1Vec(x);
    float soma2 = CalculaSomatorio2Vec(x,y);
    float soma3 = CalculaSomatorio3Vec(x,y);

    printf("\nA valor do somatorio de Xi é: %.3f",soma1);
    printf("\nA valor do somatorio de Xi*Yi é: %.3f",soma2);
    printf("\nA valor do somatorio da raiz i-ésima de (Xi² + Yi²) é: %.3f",soma3);


}

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

/*
FUNÇÕES DE ASSISTÊNCIA
*/

float CalculaSomatorio3(int x[],int y[])
{
    float S=0;
    for (int i=0;i<10;i++){
        float aux = pow(x[i],2) + pow(y[i],2);
        S+= pow(aux,1.0/(i+1));}
     return S;
}


float CalculaSomatorio2(int x[],int y[])
{
    float S=0;
    for (int i=0;i<10;i++){S+=x[i]*y[i];}
    return S;
}


float CalculaSomatorio1(int x[],int y[])
{
    float S=0;
    for (int i=0;i<10;i++){S+=x[i];}
    return S;
}


float CalculaSomatorio1Vec(int *x)
{
    float S=0;
    for (int i=0;i<10;i++){S+=x[i];}
    return S;
}


float CalculaSomatorio2Vec(int *x,int *y)
{
    float S=0;
    for (int i=0;i<10;i++){S+=x[i]*y[i];}
    return S;
}



float CalculaSomatorio3Vec(int *x,int *y)
{
    float aux=0,S=0;
    for (int i=0;i<10;i++){
                aux = pow(x[i],2) + pow(y[i],2);
                S+=pow(aux,1.0/(i+1));}
    return S;
}



void CarregaVetores(int x[], int y[]) {
    for (int i = 0; i < 10; i++) {
        x[i] = i + 1;
        y[i] = 10 - i;
    }
    /* COMENTÁRIO:
       Em C, não é possível inicializar um vetor com uma lista de valores
       (como x[] = {1, 2, 3};) dentro de uma função, a não ser na declaração.
       Por isso, o vetor deve ser carregado elemento por elemento.
    */
}

void ImprimeVetores(int x[], int y[]) {
    int i;
    printf("\nVetor X = {");
    for(i=0;i<10;i++){printf("%d ",x[i]);}
    printf("}");

    printf("\nVetor Y = {");
    for(i=0;i<10;i++){printf("%d ",y[i]);}
    printf("}\n");
}
/*
FUNÇÕES DE FORMATAÇÃO VISUAL
*/
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



/*ERRO NO CODEBLOCKS
Ajuste o erro de linker para -lm.
Vá em Project > Build Options.
Selecione o projeto (não apenas Debug ou Release).
Vá na aba Linker settings.
Em Other linker options, adicione:
"-lm"

A flag -lm é usada ao compilar programas em C (ou C++)
para linkar a biblioteca matemática padrão, chamada libm (de "math").
*/

