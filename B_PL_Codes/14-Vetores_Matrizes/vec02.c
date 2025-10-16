/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um código em C que preencha um vetor com 10 números e indique o maior, o
menor número e a diferença entre eles.
*/
#include <stdio.h>
int main() {
    int vetor[10];
    int i, maior, menor, diferenca;
    // Preenchendo o vetor com números
    printf("Digite 10 números:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);    }
    // Inicializando maior e menor como o primeiro elemento do vetor
    maior = menor = vetor[0];
    // Encontrando o maior e o menor número no vetor
    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];        }
        if (vetor[i] < menor) {
            menor = vetor[i];   }   
                                      }
    // Calculando a diferença entre o maior e o menor número
    diferenca = maior - menor;
    // Exibindo o maior, o menor número e a diferença
    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);
    printf("A diferença entre o maior e o menor número é: %d\n", diferenca);
    return 0;
}



