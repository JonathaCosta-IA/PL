// Código de Rotinas Auxiliares

#include <stdio.h>

void GerarVetor(int numeros[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        numeros[i]=(i+1)*2;}
    }

// Função para encontrar o maior númerocom operador ternário
int EncontrarMaior( int numeros[], int tamanho) {
    int maior = numeros[0];
    for (int i = 1; i < tamanho; i++)
        {maior = (numeros[i] > maior) ? numeros[i]:maior;}
    return maior;
}

// Função para encontrar o menor número com operador ternário
int EncontrarMenor( int numeros[], int tamanho) {
    int menor = numeros[0];
    for (int i = 1; i < tamanho; i++)
        {menor = (numeros[i]<menor) ? numeros[i]:menor;}
    return menor;
}

// Função para calcular a média
float CalcularMedia( int numeros[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
        {soma += numeros[i];}
    return (float) soma / tamanho;
}
