/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Utilize a diretiva \texttt{\#define} para definir uma constante para o valor de PI e calcule a área de um círculo de raio 5. A fórmula para calcular a área de um círculo é:
  A = \pi \times r^2
Onde \texttt{r} é o raio do círculo.*/

#include <stdio.h>
#define PI 3.14159
int main() {
    #define RAIO 5
    double area = PI * RAIO * RAIO;
    printf("A área do círculo é: %.2f\n", area);
    return 0;
}

