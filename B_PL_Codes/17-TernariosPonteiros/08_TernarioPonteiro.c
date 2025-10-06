/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Crie um programa que utilize ponteiros para manipular um array de inteiros. O programa deve imprimir os elementos do array, acessando-os através de ponteiros.
*/
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;   
    printf("Elementos do array: \n");
    for (int i = 0; i < 5; i++) {printf("%d ", *(ptr + i));}
}

