/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido: Ler um número e informar se o número é maior, menor ou igual a 7,0.

Fluxo:
- Declaraçao da função::
      Em linguagens como C, o compilador lê o código de cima para baixo. Se você tentar usar uma função antes de definir como ela funciona, o compilador pode não saber o que fazer com essa função, resultando em um erro de compilação. O protótipo da função diz ao compilador o que ele precisa saber sobre a função, para que ela possa ser usada antes da definição completa.
- Código mais organizado:
      Colocar o protótipo da função no início permite que você mantenha a função main na parte superior do código, tornando-a mais fácil de encontrar e ler. O protótipo também torna o código mais modular, já que você pode definir funções em qualquer lugar, desde que o compilador saiba de sua existência.

*/
#include <stdio.h>
void verificarNumero(float numero);  // Função pré-definida  (Protótipo da função)
int main()
{   float numero;
    printf("Digite um número: "); scanf("%f", &numero);
    verificarNumero(numero); // Chama a função para verificar o número
    return 0;
}
void verificarNumero(float numero)  // Função
{  // Função que verifica se o número é maior, menor ou igual a 7,0
    if (numero > 7.0) {printf("O número é maior que 7,0.\n");}
    else if (numero < 7.0) {printf("O número é menor que 7,0.\n");}
    else {printf("O número é igual a 7,0.\n");}
}

