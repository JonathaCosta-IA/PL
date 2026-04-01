/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:

Escreva um programa que, utilizando o operador ternário, decida qual das duas variáveis ponteiro ptr1 ou ptr2 deve ser utilizada com base no valor de um número inteiro a. Se a > 10, o programa deve usar ptr1, caso contrário, ptr2. Ambas as variáveis ponteiro devem apontar para um valor inteiro
*/

#include <stdio.h>
int main() {
    int a = 15;
    int num1 = 100, num2 = 200;
    int *ptr1 = &num1, *ptr2 = &num2;
    int *ptr = (a > 10) ? ptr1 : ptr2;
    printf("O valor escolhido é: %d\n", *ptr);
}

