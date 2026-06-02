#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PESSOAS 15

void gerarDados(float dados[PESSOAS][4]);
int faixaEtaria(int idade);
void calcularEstatisticas(float dados[PESSOAS][4]);
void mostrarDados(float dados[PESSOAS][4]);

int main()
{
    float dados[PESSOAS][4]; // idade, peso, altura, imc

    srand(time(NULL));
    gerarDados(dados);
    calcularEstatisticas(dados);
    mostrarDados(dados);

    return 0;
}

void gerarDados(float dados[PESSOAS][4])
{
    int i;

    for (i = 0; i < PESSOAS; i++)
    {
        dados[i][0] = 18 + rand() % 43;             // 18 a 60 anos
        dados[i][1] = 30 + rand() % 121;            // 30 a 150 kg
        dados[i][2] = 1.0 + (rand() % 151) / 100.0; // 1.0 a 2.5 m
        dados[i][3] = 0;
    }
}

int faixaEtaria(int idade)
{
    if (idade <= 29)
        return 0;
    else if (idade <= 39)
        return 1;
    else if (idade <= 49)
        return 2;
    else
        return 3;
}

void calcularEstatisticas(float dados[PESSOAS][4])
{
    int i, f;
    int qtd[4] = {0};
    float somaIdade[4] = {0};
    float somaPeso[4] = {0};
    float somaAltura[4] = {0};

    for (i = 0; i < PESSOAS; i++)
    {
        dados[i][3] = dados[i][1] / (dados[i][2] * dados[i][2]);

        f = faixaEtaria((int)dados[i][0]);

        qtd[f]++;
        somaIdade[f] += dados[i][0];
        somaPeso[f] += dados[i][1];
        somaAltura[f] += dados[i][2];
    }

    printf("\nESTATISTICAS POR FAIXA\n");

    for (i = 0; i < 4; i++)
    {
        printf("\nFaixa %d\n", i + 1);
        printf("Quantidade : %d\n", qtd[i]);

        if (qtd[i] > 0)
        {
            printf("Media idade  : %.2f\n", somaIdade[i] / qtd[i]);
            printf("Media peso   : %.2f\n", somaPeso[i] / qtd[i]);
            printf("Media altura : %.2f\n", somaAltura[i] / qtd[i]);
        }
    }
}

void mostrarDados(float dados[PESSOAS][4])
{
    int i;

    printf("\nDADOS GERADOS\n");
    printf("--------------------------------------------------------\n");
    printf("N  IDADE   PESO   ALTURA   IMC      CLASSIFICACAO\n");
    printf("--------------------------------------------------------\n");

    for (i = 0; i < PESSOAS; i++)
    {
        printf("%2d %5.0f %7.1f %7.2f %7.2f  ",
               i + 1,
               dados[i][0],
               dados[i][1],
               dados[i][2],
               dados[i][3]);

        if (dados[i][3] < 18.5)
            printf("Abaixo \n");
        else if (dados[i][3] < 25.0)
            printf("Normal\n");
        else if (dados[i][3] < 30.0)
            printf("Sobrepeso\n");
        else
            printf("Obesidade\n");
    }
}
