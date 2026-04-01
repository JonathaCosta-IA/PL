#include "SerieDados.h"
#include<stdio.h>
int CarregarPares(int numeros[], int pares [], int tamanho){
// Rotina usada para preencher um vetor pre-definido no programa principal
    int cont=0;
    for (int i = 0; i < tamanho; i++)
        { if (numeros[i]%2==0){
        pares[cont]=numeros[i];
        cont++;}
        }
return cont;
}

