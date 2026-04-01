//Gera um número entre 1 e 100 (inclusive).
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero = rand() % 100 + 1; // 101 para incluir o valor 100;
    printf("Número entre 1 e 100: %d\n", numero);
    return 0;
}

// Ajuste atualizando a semente
