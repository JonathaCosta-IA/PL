/******************************************************************************
Escreva um código (script) em C que leia a idade e o peso de 8 pessoas.
Calcule e imprima as médias de peso das pessoas de cada faixa etária e quantas
são de cada faixa.
As faixas são: 1 a 10 anos; 11 a 20 anos; 21 a 30 anos; e maiores de 30 anos

*******************************************************************************/
#include <stdio.h>

void CarregarDados(int idades_pessoas[], float pesos_pessoas[])
{
    // Ler a idade  de 8 pessoas
    for (int i = 0; i < 8; i++)
    {
        printf("Informe a idade da pessoa (%d/8): ", i + 1);
        scanf("%d", &idades_pessoas[i]);
    }

    // Ler o peso de 8 pessoas
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        printf("Informe o peso da pessoa (%d/8): ", i + 1);
        scanf("%f", &pesos_pessoas[i]);
    }
}

void CalcularEstatisticas(int idades_pessoas[],
                          float pesos_pessoas[],
                          int cont_pessoa_faixa[],
                          float pesos_faixas[])
{

    for (int i = 0; i < 8; i++)
    {

        if (idades_pessoas[i] >= 1 & idades_pessoas[i] <= 10)
        {
            cont_pessoa_faixa[0]++;              // Contagem
            pesos_faixas[0] += pesos_pessoas[i]; // Soma dos pesos desta faixa
        }
        if (idades_pessoas[i] >= 11 & idades_pessoas[i] <= 20)
        {
            cont_pessoa_faixa[1]++;
            pesos_faixas[1] += pesos_pessoas[i];
        }

        if (idades_pessoas[i] >= 21 & idades_pessoas[i] <= 30)
        {
            cont_pessoa_faixa[2]++;
            pesos_faixas[2] += pesos_pessoas[i];
        }
        if (idades_pessoas[i] > 30)
        {
            cont_pessoa_faixa[3]++;
            pesos_faixas[3] += pesos_pessoas[i];
        }
    }
}

int main()
{
    int idades_pessoas[8];  //= {8,15,25,35,10,15,50,36};
    float pesos_pessoas[8]; //  = {20,30,40,25,42.5,20,60,78};
    int cont_pessoa_faixa[4] = {0, 0, 0, 0};
    float pesos_faixas[4] = {0, 0, 0, 0};

    CarregarDados(idades_pessoas, pesos_pessoas);
    CalcularEstatisticas(idades_pessoas, pesos_pessoas, cont_pessoa_faixa, pesos_faixas);

    // Calcular a médias de peso por faixa etária
    for (int i = 0; i < 4; i++)
    {
        printf("\nA média de peso de faixa %d é %.2f com %d pessoas.", i + 1,
               pesos_faixas[i] / cont_pessoa_faixa[i],
               cont_pessoa_faixa[i]);
    }

    return 0;
}
