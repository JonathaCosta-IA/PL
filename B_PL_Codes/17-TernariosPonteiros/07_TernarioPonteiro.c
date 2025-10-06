/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Dado um array de inteiros, escreva um programa que utilize o operador ternário para verificar se o primeiro elemento é maior que 10. Se for, imprima "Maior que 10", caso contrário, imprima "Menor ou igual a 10".
*/
#include <stdio.h>
int main() {
    int arr[3] = {5, 12, 8};
    // Usando o operador ternário para verificar o primeiro elemento
    (arr[0] > 10) ? printf("Maior que 10\n") : printf("Menor ou igual a 10\n");
}

