
//Gera e exibe um número aleatório entre 0 e 9.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero = rand() % 10;
    printf("Número aleatório: %d\n", numero);
    return 0;
}

// Note que sem srand(), a sequência será a mesma em cada execução.

