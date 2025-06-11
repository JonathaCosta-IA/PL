/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido: Ler um número e informar se o número é maior, menor ou igual a 7,0.

Fluxo:
Declaração de função: 
      Declarado no início para informar o compilador sobre a função antes do uso.
Definição completa: 
    O corpo da função que realmente executa a lógica. Pode ser definido após a função main para manter o código mais organiza
*/
#include <stdio.h>
void verificaNumero(float numero)  // Função
{  // Função que verifica se o número é maior, menor ou igual a 7,0
    if (numero > 7.0) {printf("O número é maior que 7,0.\n");} 
    else if (numero < 7.0) {printf("O número é menor que 7,0.\n");}
    else {printf("O número é igual a 7,0.\n");}
}

int main() 
{   float numero;
    printf("Digite um número: "); scanf("%f", &numero);
    verificaNumero(numero); // Chama a função para verificar o número
    return 0;
}

