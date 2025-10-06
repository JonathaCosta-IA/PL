/*
Lógica de programação
Prof. Jonatha Costa
Utilizando blocos e funções em arquivos distintos, faça um código que:
Leia 10 numeros e informe o maior e o menor valor dentres os dez, e também a média aritmética.
*/

#include <stdio.h>
#include "RotinasAuxiliares.h"

int main() {
    int numeros[10];
    int max, min;
    float media;
    // Ler os números
    LerNumeros(numeros, 10);
    // Calcular maior, menor e média
    max = EncontrarMaior(numeros, 10);
    min = EncontrarMenor(numeros, 10);
    media = CalcularMedia(numeros, 10);

    // Exibir os resultados
    printf("\n");
    printf("Maior número: %d\n", max);
    printf("Menor número: %d\n", min);
    printf("Média aritmética: %.2f\n", media);
}

