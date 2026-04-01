/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Utilize a diretiva #define para criar um tipo de dado float32, que seja equivalente a float. Em seguida, crie uma variável desse tipo e imprima seu valor.
*/
#include <stdio.h>
#define FLOAT32 float
int main() {
    FLOAT32 num = 10.5;
    printf("O valor de num é: %.2f\n", num);
}

