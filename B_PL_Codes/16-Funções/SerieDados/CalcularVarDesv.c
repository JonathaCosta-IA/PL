#include "SerieDados.h"
#include <math.h>
// Função para calcular a variancia
float CalcularVariancia( int numeros[], int tamanho) {
    float soma_var=0;
    float media = CalcularMedia(numeros, tamanho);
        for (int i = 0; i < tamanho; i++)
        {soma_var = soma_var + (numeros[i] - media)*(numeros[i] - media);}
    return (float) (soma_var / tamanho);
 }

// Função para calcular o desvio padrao
float CalcularDesvioPadrao( int numeros[], int tamanho) {
    float variancia = CalcularVariancia(numeros, tamanho);
    return (float) sqrt(variancia);
 }
