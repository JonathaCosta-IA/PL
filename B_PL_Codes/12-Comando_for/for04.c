/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa em C que calcule o fatorial de um número, utilizando o for.
*/
#include <stdio.h>
int main() {
    int numero, fatorial = 1;
    // Solicitar ao usuário para digitar um número
    printf("Digite um número inteiro positivo: "); scanf("%d", &numero);
    // Verificar se o número é válido (não-negativo)
    if (numero < 0) {
        printf("Fatorial não está definido para números negativos.\n");
    } else {
        // Calcular o fatorial usando um loop for
    for (int i = 1; i <= numero; i++) {
            fatorial *= i;  // Multiplica o valor atual do fatorial pelo contador i
        }
        // Exibir o resultado
        printf("O fatorial de %d é: %d\n", numero, fatorial);
    }
    return 0;
}

