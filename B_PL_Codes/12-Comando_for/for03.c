/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa que em C leia a idade e o peso de 8 pessoas.
Calcule e imprima as médias de peso das pessoas da mesma faixa etária e quantas são de cada faixa etária.
As faixas etárias são de 1 a 10 anos, de 11 a 20 anos, de  21 a 30 anos, e maiores de 30. Utilize o comando for.
*/
#include <stdio.h>
int main() {
    int idade;
    float peso;
    int n=5; // Quantidade de pessoas
    // Variáveis para armazenar as somas dos pesos
    float peso_faixa1 = 0, peso_faixa2 = 0, peso_faixa3 = 0, peso_faixa4 = 0;
    // Variáveis para armazenar a contadagem de pessoas por faixa etária
    int conte_pessoa_faixa1 = 0, conte_pessoa_faixa2 = 0, conte_pessoa_faixa3 = 0, conte_pessoa_faixa4 = 0;
    // Leitura da idade e peso de 'n' pessoas
    for (int i = 1; i <= n; i++) {
        printf("Digite a idade da pessoa %d: ", i); scanf("%d", &idade);
        printf("Digite o peso da pessoa %d: ", i); scanf("%f", &peso);
        // Verificar a faixa etária e acumular os pesos e contadores
        if (idade >= 1 && idade <= 10) {         // Faixa 01
            peso_faixa1 += peso;
            conte_pessoa_faixa1++;
        } else if (idade >= 11 && idade <= 20) { // Faixa 02
            peso_faixa2 += peso;
            conte_pessoa_faixa2++;
        } else if (idade >= 21 && idade <= 30) { // Faixa 03
            peso_faixa3 += peso;
            conte_pessoa_faixa3++;
        } else if (idade > 30) {                 // Faixa 04
            peso_faixa4 += peso;
            conte_pessoa_faixa4++;
        }}
    // Cálculo das médias de peso para cada faixa etária
    float media_peso_faixa_1 = (conte_pessoa_faixa1 > 0) ? (peso_faixa1 / conte_pessoa_faixa1) : 0;
    float media_peso_faixa_2 = (conte_pessoa_faixa2 > 0) ? (peso_faixa2 / conte_pessoa_faixa2) : 0;
    float media_peso_faixa_3 = (conte_pessoa_faixa3 > 0) ? (peso_faixa3 / conte_pessoa_faixa3) : 0;
    float media_peso_faixa_4 = (conte_pessoa_faixa4 > 0) ? (peso_faixa4 / conte_pessoa_faixa4) : 0;
    // Exibição dos resultados
    printf("\nMédia de peso (1 a 10 anos): %.2f (Total: %d pessoas)\n", media_peso_faixa_1, conte_pessoa_faixa1);
    printf("Média de peso (11 a 20 anos): %.2f (Total: %d pessoas)\n", media_peso_faixa_2, conte_pessoa_faixa2);
    printf("Média de peso (21 a 30 anos): %.2f (Total: %d pessoas)\n", media_peso_faixa_3, conte_pessoa_faixa3);
    printf("Média de peso (Maiores de 30 anos): %.2f (Total: %d pessoas)\n", media_peso_faixa_4, conte_pessoa_faixa4);
    return 0;

    /* NOTA:
    A estrutura abaixo :
     if (conte_pessoa_faixa1 > 0) {float media_peso_faixa_1 = peso_faixa1 / conte_pessoa_faixa1;}
    else {float media_peso_faixa_1 = 0;}
    pode ser substituida pelo operador ternário, ficando:
    float media_peso_faixa_1 = (conte_pessoa_faixa1 > 0) ? (peso_faixa1 / conte_pessoa_faixa1) : 0;
   */
}

