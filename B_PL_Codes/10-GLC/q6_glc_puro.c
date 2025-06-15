
/* GLC
O comando rand() executa o script abaixo 1x.
Aqui são demonstradas 10 iteracões para apreciação das resultados.
Note que as variáveis utilizadas (a,c,x,m) necessitam de uma tipolagem
adequada ao tamanho dos valores por elas representado.Por isso, aqui
fez-se necessário o uso de "unsigned int" e "unsigned long long".
Prof. Jonatha Costa
*/
#include <stdio.h>
int main() {
    unsigned int a = 1664525, c = 1013904223, x = 1;
    unsigned long long m = 4294967296ULL;  // 2^32, 64 bits
    int num_rand[10];
    for (int n = 1; n <= 10; n++) {
        // Para evitar overflow no cálculo antes do módulo,
        // fazemos cast para unsigned long long:
        unsigned long long val = (unsigned long long)a * x + c;
        x = val % m;  // módulo 2^32
        printf("Iteracao %d: %u\n", n, x);
        // Restringindo os valores ao intervalo 0-5.
        printf("Numero aleatorio gerado entre 0 e 5: %d\n",x%6);
  }

}

/*
Note que, mesmo com um módulo muito grande, o operador % 6 em programação restrige o valor
ao intervalo [0,5] ao calcular o resto da divisão inteira de Xn​ por 6.

Ou seja, ao dividir Xn por 6, o valor resultante é reduzido para o que sobra após essa divisão,
garantindo que o número final esteja sempre entre 0 e 5.

Dessa forma, embora a sequência original Xn tenha números grandes, aplicar % 6 mantém a
aleatoriedade dentro de um intervalo menor e controlado, útil para casos nos quais só queremos
valores dentro desse conjunto restrito.

*/

