//Exibe 5 números aleatórios entre 0 e 99.
#include <stdio.h>
#include <stdlib.h>

int main() {
    for(int i = 0; i < 5; i++) {
        int numero = rand() % 100;
        printf("Número %d: %d\n", i+1, numero);
    }
    return 0;
}

// Atualize a semente para obter novos valores
