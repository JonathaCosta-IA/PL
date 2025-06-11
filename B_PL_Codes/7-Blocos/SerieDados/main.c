/*
Lógica de programação
Prof. Jonatha Costa
Utilizando blocos e funções em arquivos distintos, faça um código que leia 10 numeros e informe:
o maior número, o menor número, os números pares, os números primos,
a média aritmética entre os 10 números, a variância e o desvio padrão.
*/
#include <stdio.h>
#include "SerieDados.h"
#include <math.h>

int main() {
     // Definindo variáveis
    int tam_vet=10; //  Tamanho do vetor de numeros
    int numeros[tam_vet],primos[tam_vet];
    int pares[tam_vet]={};
    float max,min,media,variancia,desvio_padrao;

    // Preencher os números no vetor
    CarregarVetor(numeros, tam_vet);

    // Calculando o maior, o menor e a média
    max = EncontrarMaior(numeros, tam_vet);
    min = EncontrarMenor(numeros, tam_vet);
    media = CalcularMedia(numeros, tam_vet);

    // Carregar os pares no vetor e os primos
    int cont_pares = CarregarPares(numeros, pares, tam_vet);
    int cont_primos = CarregarPrimos(numeros, primos, tam_vet);

    // Calculando a covariância e o desvio padrão
    variancia = CalcularVariancia(numeros, tam_vet);
    desvio_padrao = CalcularDesvioPadrao(numeros, tam_vet);

    // Exibindo resultados
    printf("\nVetor de dados em análise:");ExibirVetor(numeros, tam_vet);
    printf("\nOs números pares são:"); ExibirVetor(pares, cont_pares );
    printf("\nOs números primos são:");ExibirVetor(primos, cont_primos );
    printf("\nMaior número: %.2f", max);
    printf("\nMenor número: %.2f", min);
    printf("\nMédia aritmética: %.2f", media);
    printf("\nVariância: %.2f", variancia);
    printf("\nO desvio padrão: %.2f", desvio_padrao);


}

