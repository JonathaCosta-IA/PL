/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um código em C que preencha um vetor com 10 números e retorne quais são
os números primos deste vetor.
*/
#include <stdio.h>
int main() {
    int i, j, num[10];
    // Preenchendo o vetor com números
    printf("Digite 10 números:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1); scanf("%d", &num[i]);
    }
    printf("Números primos no vetor:\n");
    for (i = 0; i < 10; i++) {
        if (num[i] < 2) {
            continue;} // Números menores que 2 não são primos
        int cont = 0; // Resetando o contador para cada número
        for (j = 2; j <= num[i] / 2; j++) {
            if (num[i] % j == 0){
                cont++;          // Encontrou um divisor
                break;          }// Não é primo }
                                            }
        if (cont == 0) {printf("%d ", num[i]);} // Se cont ainda for 0, então o número é primo
                            }
    printf("\n");
    return 0;


}
