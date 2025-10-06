/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa que utilize o operador ternário para verificar se um número é positivo, negativo ou zero. O programa deve imprimir a mensagem correspondente:
a) Se o número for positivo, deve imprimir ``Número positivo''.
b) Se o número for negativo, deve imprimir ``Número negativo''.
c) Se o número for zero, deve imprimir ``Número zero''
*/

#include <stdio.h>
int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    (num > 0) ? printf("Número positivo\n") :
    (num < 0) ? printf("Número negativo\n") : 
    printf("Número zero\n");
}

