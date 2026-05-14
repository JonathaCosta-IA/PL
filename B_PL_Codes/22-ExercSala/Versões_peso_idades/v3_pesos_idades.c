/******************************************************************************
Escreva um código (script) em C que leia a idade e o peso de 8 pessoas.
Calcule e imprima as médias de peso das pessoas de cada faixa etária e quantas
são de cada faixa.
As faixas são: 1 a 10 anos; 11 a 20 anos; 21 a 30 anos; e maiores de 30 anos

*******************************************************************************/
#include <stdio.h>

void CarregarDados(float Dados_pessoas[][8])
{

    // Ler a idade  de 8 pessoas
    // Armazenado na linhas 1, índice 0.
    for (int i = 0; i < 8; i++)
    {
        printf("Informe a idade da pessoa (%d/8): ", i + 1);
        scanf("%f", &Dados_pessoas[0][i]);
    }

    // Ler o peso de 8 pessoas
    // Armazenado na linhas 2, índice 1.
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        printf("Informe o peso da pessoa (%d/8): ", i + 1);
        scanf("%f", &Dados_pessoas[1][i]);
    }
}

void CalcularEstatisticas(float Dados_pessoas[][8])
{

    for (int i = 0; i < 8; i++)
    {

        // Idade linha 0
        // Peso linha 1
        // Contagem de faixa linha 2, colunas 0 à 3
        // Soma dos pesos linha 2, colunas 4 à 7.

        if (Dados_pessoas[0][i] >= 1 & Dados_pessoas[0][i] <= 10)
        {
            Dados_pessoas[2][0]++;                      // Contagem
            Dados_pessoas[2][4] += Dados_pessoas[1][i]; // Soma dos pesos desta faixa
        }
        if (Dados_pessoas[0][i] >= 11 & Dados_pessoas[0][i] <= 20)
        {
            Dados_pessoas[2][1]++;
            Dados_pessoas[2][5] += Dados_pessoas[1][i];
        }

        if (Dados_pessoas[0][i] >= 21 & Dados_pessoas[0][i] <= 30)
        {
            Dados_pessoas[2][2]++;
            Dados_pessoas[2][6] += Dados_pessoas[1][i];
        }
        if (Dados_pessoas[0][i] > 30)
        {
            Dados_pessoas[2][3]++;
            Dados_pessoas[2][7] += Dados_pessoas[1][i];
        }
    }
}

void CalcularMedias(float Dados_pessoas[][8])
{
    for (int i = 0; i < 4; i++)
    {
        printf("\nA média de peso de faixa %d é %.2f com %d pessoas.", i + 1,
               Dados_pessoas[2][i + 4] / Dados_pessoas[2][i],
               (int)Dados_pessoas[2][i]);
    }
}

int main()
{
    /*
    Reordenação matricial:
        Dados[3][8] = [ Dados[0][0:8]  // Idade
                        Dados[1][0:8]  // Pesos
                        Dados[2][0:4] //  contagem por faixa e
                        Dados[2][5:8] //  Pesos por faixa
                        ]
    */

    float Dados_Pessoas[3][8];

    CarregarDados(Dados_Pessoas);
    CalcularEstatisticas(Dados_Pessoas);
    CalcularMedias(Dados_Pessoas);
    // Calcular a médias de peso por faixa etária

    return 0;
}
