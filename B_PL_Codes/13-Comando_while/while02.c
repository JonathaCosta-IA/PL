/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa que leia um número e verifica se é um número primo, utilize o while.
*/
#include <stdio.h>
int main() {
// Inicializar i com 2, já que 1 não é divisor relevante
    int numero, i = 2, eh_primo = 1; 
    // Solicitar ao usuário que insira um número
    printf("Digite um número: "); scanf("%d", &numero);
    // Números menores que 2 não são primos
    if (numero < 2) {eh_primo = 0; }
    // Laço para verificar divisibilidade até a raiz quadrada do número
    while (i * i <= numero && eh_primo)
    {  if (numero % i == 0) {  // Se o número for divisível por i, não é primo
             eh_primo = 0;}
             i++; }
    // Exibir o resultado
    if (eh_primo) {printf("%d é um número primo.\n", numero); }
    else { printf("%d não é um número primo.\n", numero); }
    return 0;
}

