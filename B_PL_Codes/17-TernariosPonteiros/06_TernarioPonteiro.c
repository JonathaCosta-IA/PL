/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva uma função que receba um ponteiro para um número inteiro e altere seu valor para 100. No programa principal, crie uma variável inteira, passe seu ponteiro para a função e imprima o valor alterado.
*/

#include <stdio.h>
void alterarValor(int *p) {*p = 100;}
int main() {
    int num = 10;
    printf("Antes: %d\n", num); 
    alterarValor(&num); // Passando o ponteiro
    printf("Depois: %d\n", num);
}

