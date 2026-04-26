// Código de Rotinas Auxiliares

#include <stdio.h>

// Função para ler os números
void LerNumeros(int numeros[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
}

// Função para encontrar o maior número
int EncontrarMaior( int numeros[], int tamanho) {
    int maior = numeros[0];
    for (int i = 1; i < tamanho; i++)
        {if (numeros[i] > maior) {maior = numeros[i];}
        }
    return maior;
}

// Função para encontrar o menor número
int EncontrarMenor( int numeros[], int tamanho) {
    int menor = numeros[0];
    for (int i = 1; i < tamanho; i++)
        {if (numeros[i] < menor) {menor = numeros[i];}
        }
    return menor;
}

// Função para calcular a média
float CalcularMedia( int numeros[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    return (float) soma / tamanho;
}
