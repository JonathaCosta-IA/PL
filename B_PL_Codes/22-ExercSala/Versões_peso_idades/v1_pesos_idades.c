/******************************************************************************
Escreva um código (script) em C que leia a idade e o peso de 8 pessoas.
Calcule e imprima as médias de peso das pessoas de cada faixa etária e quantas
são de cada faixa.
As faixas são: 1 a 10 anos; 11 a 20 anos; 21 a 30 anos; e maiores de 30 anos

*******************************************************************************/
#include <stdio.h>

void CarregarDadosIdade(int idades_pessoas[])
{
    for (int i = 0; i < 8; i++)
    {
        printf("Informe a idade da pessoa (%d/8): ", i + 1);
        scanf("%d", &idades_pessoas[i]);
    }
}

void CarregarDadosPesos(float pesos_pessoas[])
{
    for (int i = 0; i < 8; i++)
    {
        printf("Informe o peso da pessoa (%d/8): ", i + 1);
        scanf("%f", &pesos_pessoas[i]);
    }
}

void ClassificarDados(int idades_pessoas[],
                      float pesos_pessoas[],
                      int cont_f1,
                      int cont_f2,
                      int cont_f3,
                      int cont_f4,
                      float peso_f1,
                      float peso_f2,
                      float peso_f3,
                      float peso_f4)
{
    for (int i = 0; i < 8; i++)
    {

        if (idades_pessoas[i] >= 1 & idades_pessoas[i] <= 10)
        {
            cont_f1++;                            // Contagem
            peso_f1 = peso_f1 + pesos_pessoas[i]; // Soma dos pesos desta faixa
        }
        if (idades_pessoas[i] >= 11 & idades_pessoas[i] <= 20)
        {
            cont_f2++;
            peso_f2 = peso_f2 + pesos_pessoas[i];
        }

        if (idades_pessoas[i] >= 21 & idades_pessoas[i] <= 30)
        {
            cont_f3++;
            peso_f3 = peso_f3 + pesos_pessoas[i];
        }
        if (idades_pessoas[i] > 30)
        {
            cont_f4++;
            peso_f4 += pesos_pessoas[i];
        }
    }
}


int main()
{
    int idades_pessoas[8];  //= {8,15,25,35,10,15,50,36};
    float pesos_pessoas[8]; // = {20,30,40,25,42.5,20,60,78};

    int cont_f1 = 0, cont_f2 = 0, cont_f3 = 0, cont_f4 = 0;
    float peso_f1 = 0, peso_f2 = 0, peso_f3 = 0, peso_f4 = 0;

    CarregarDadosIdade(idades_pessoas);
    printf("\n");
    CarregarDadosPesos(pesos_pessoas);
    printf("%d", cont_f1);
    ClassificarDados(idades_pessoas,
                     pesos_pessoas,
                     cont_f1,
                     cont_f2,
                     cont_f3,
                     cont_f4,
                     peso_f1,
                     peso_f2,
                     peso_f3,
                     peso_f4);
    printf("%d", cont_f1);
    // Ler a idade  de 8 pessoas

    // Calcular a médias de peso por faixa etária

    printf("\nA média de peso de faixa 1 é %.2f com %d pessoas.", peso_f1 / cont_f1, cont_f1);
    printf("\nA média de peso de faixa 2 é %.2f com %d pessoas.", peso_f2 / cont_f2, cont_f2);
    printf("\nA média de peso de faixa 3 é %.2f com %d pessoas.", peso_f3 / cont_f3, cont_f3);
    printf("\nA média de peso de faixa 4 é %.2f com %d pessoas.", peso_f4 / cont_f4, cont_f4);

    return 0;
}
