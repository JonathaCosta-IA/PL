/*
Lógica de programação
Prof. Jonatha Costa
Utilizando blocos e funções em arquivos distintos, faça um código que:
Leia 10 numeros e informe o maior e o menor valor dentres os dez, e também a média aritmética.
*/

#include <stdio.h>
#include "RotinasAuxiliares_ver01.h"

int main() {
    int tam_vet=10;
    int numeros[tam_vet];
    int max, min;
    float media;
    // Gerar os números
    GerarVetor(numeros, tam_vet);
    // Calcular maior, menor e média
    max = EncontrarMaior(numeros, tam_vet);
    min = EncontrarMenor(numeros, tam_vet);
    media = CalcularMedia(numeros, tam_vet);

    // Exibir os resultados
    printf("\n");
    printf("Maior número: %d\n", max);
    printf("Menor número: %d\n", min);
    printf("Média aritmética: %.2f\n", media);
}

