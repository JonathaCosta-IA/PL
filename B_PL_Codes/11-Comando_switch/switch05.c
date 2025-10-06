/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa em C que receba o preço de um produto e o tipo de pagamento. Apresente o preço líquido com desconto de 10% para pagamento à vista, 5% para pagamento no cartão em 1 vez, e acréscimo de 10% se parcelado.
*/
#include <stdio.h>

int main() {
    float preco, preco_final;
    int tipo_pagamento;

    // Solicitar ao usuário que insira o preço do produto
    printf("Digite o preço do produto: "); scanf("%f", &preco);
    // Exibir as opções de pagamento
    printf("Escolha o tipo de pagamento:\n");
    printf("1 - À vista (10%% de desconto)\n");
    printf("2 - Cartão em 1 vez (5%% de desconto)\n");
    printf("3 - Parcelado (10%% de acréscimo)\n");
      // Receber a opção de pagamento escolhida
    printf("Digite o número da opção de pagamento: ");  scanf("%d", &tipo_pagamento);  
    // Calcular o preço final com base na escolha do tipo de pagamento
    switch (tipo_pagamento) {
        case 1: // 10% de desconto
            preco_final = preco * 0.90; 
            printf("Pagamento à vista. Preço final: R$ %.2f\n", preco_final); break;
        case 2: // 5% de desconto
            preco_final = preco * 0.95; 
            printf("Pagamento no cartão em 1 vez. Preço final: R$ %.2f\n", preco_final); break;
        case 3: // 10% de acréscimo
            preco_final = preco * 1.10; 
            printf("Pagamento parcelado. Preço final: R$ %.2f\n", preco_final); break;
        default:  printf("Opção de pagamento inválida.\n");
    }
    return 0;
}

