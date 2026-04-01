#include <stdio.h>
#include <stdlib.h>
/*
O código abaixo simula o lançamento de uma moeda 50 vezes e conta quantas vezes caiu cara ou coroa.
*/
int main() {
    int i, cara = 0, coroa = 0;
    for(i = 0; i < 50; i++) {
        int resultado = rand() % 2; // 0 ou 1
        if(resultado == 0)
            cara++;
        else
            coroa++;
    }

    printf("Cara: %d vezes\n", cara);
    printf("Coroa: %d vezes\n", coroa);

    return 0;
}


// Note que o resultado não muda, pois a semente (srand()) não é atualizada.
// Ajuste o código srand(time(NULL)), após incluir a biblioteca <time.h>
