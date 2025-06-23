/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:

Utilizando #define, crie uma macro chamada SQUARE(x) que calcula o quadrado de um número x. Use essa macro para calcular o quadrado de um número inserido pelo usuário e imprima o resultado.
*/
#include <stdio.h>
#define SQUARE(x) ((x) * (x))
int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);    
    printf("O quadrado de %d é: %d\n", num, SQUARE(num));
}

