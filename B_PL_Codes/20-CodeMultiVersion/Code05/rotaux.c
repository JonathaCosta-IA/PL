#include <stdio.h>
#include "bib-code5.h"
#include <stdlib.h>
#include <time.h>
#define PI 3.14159265358979323846

void DestaqueSol()
{
     for (int i=0;i<33;i++){printf("%s","*");}
}

void CarregaValores1(float v[])
{
  for (int i = 0; i < 5; i++) {
    v[i] = i * 3.14;}
}

float* CarregaValores2(float v[])
{   srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
    v[i] = (rand() % 10)*PI;}
    return v;
}

void ExecuteTesteNumeros(float v[])
{
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

void ExecuteTeste2Numeros(float v[], float* M, float* m, float* total) // Ponteiros como atributos de passagem
{
    *M =v[0];
    *m =v[0];
    *total=0.0;
    for (int i=0;i<5;i++){
    if (v[i]>*M) *M=v[i];
    if (v[i]<*m) *m=v[i];
    *total+=v[i];
        }
/* COMENTÁRIO:
Diferentemente de outras linguagens, como Py, em C, as funções não podem retornar
múltiplos valores diretamente. Então, a soluçao aqui é utilizar ponteiros como
parâmetros de saída para alterar os valores originais da variável passada.
*/
}
