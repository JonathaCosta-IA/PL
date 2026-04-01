/*
Simule 3 partidas entre Ceará e Fortaleza. Para cada jogo, gere dois números aleatórios (0 a 5),
representando os gols de cada time, e exiba o resultado.
Prof. Jonatha Costa
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // para obter valores diferentes a cada execução

    for (int i = 1; i <= 3; i++) {        // rodadas
        int ceara = rand() % 6;           // Máximo de gol 6
        int fortaleza = rand() % 6;       // Máximo de gol 6

        printf("Jogo %d: Ceará %d x %d Fortaleza\n", i, ceara, fortaleza);
    }
    return 0;
}

