/*
========================================================================================
IFCE CAMPUS MARACANAÚ
LÓGICA DE PROGRAMAÇÃO
AVALIAÇÃO 02 - 15.04.26
Prof. Jonatha Costa

Aluno:
========================================================================================


Bahia
# Proposição inicial:
========================================================================================
Seja a matriz a seguir:
    {
        {4, 2, 2, 1, 3, 2, 5, 1, 2}, // Bahia:
        {1, 2, 1, 4, 2, 1, 0, 2, 1}, // Ceará:
        {2, 0, 1, 3, 0, 2, 1, 4, 0}, // CRB:
        {3, 1, 4, 2, 2, 3, 1, 2, 0}, // Fortaleza:
        {2, 2, 3, 4, 1, 2, 1, 0, 2}, // Sport:
        {1, 1, 2, 2, 1, 1, 3, 1, 1}, // Nautico:
        {1, 2, 1, 1, 2, 1, 1, 1, 2}, // Sampaio:
        {0, 0, 5, 1, 2, 0, 1, 2, 3}, // Santa Cruz:
        {0, 3, 1, 1, 0, 0, 2, 1, 1}, // Vitória:
        {2, 3, 4, 1, 0, 0, 0, 1, 1}, // Guarani
    }.

Com base na proposição acima faça um código executável em C para:

0) Exibir a matriz
1) Calcular e exibir a média de gols por time;
2) Exibir em ordem decrescente a média de gols por time;
3) Exibir a maior quantidade de gols alcançada por cada time (máximo de gols);
4) Atualizar, via entrada de dados no teclado, os gols de dois times de sua escolha;
5) Reexibir a matriz e a nova média de gols.

Nota:
Somente execução completa é considerada para pontuação.
Cada questão vale 2,0 pontos.
========================================================================================
*/

#include <stdio.h>
#include <stdlib.h>

void CalcularResultados(int gols[], int Resultados[]);
void ProcessarEscolha(int menu, int gols[], char time[], int resultados[]);
void ExibirMenu(char time[]);
void ExibirMenuTimes(char nome_time[], int gols[]);

int main()
{
    int gols[10];
    char time[5];
    int Resultados[4]; // Vetor vazio
    int somatorio;
    int menu = -1;

    while (menu != 100)
    {
        ExibirMenuTimes(time, gols);
        CalcularResultados(gols, Resultados); // Vetor de resultados carregado

        // Alocando resultados em variáveis auxiliares com identificação individual
        // Vetor Resultados[4] = {somatório, cont, rodada, max}

        do
        {
            ExibirMenu(time);
            scanf("%d", &menu);

            // Executando o menu
            // ---------------------------------------

            switch (menu)
            {
            case 1:
                printf("{");
                for (int i = 0; i < 10; i++)
                {
                    if (i < 9)
                    {
                        printf(" %d,", gols[i]);
                    }
                    else
                    {
                        printf(" %d }", gols[i]);
                    }
                }
                break;

            case 2:
                printf("\nO total de gols do %s foi de %d.", time, Resultados[0]); // Poderia utilizar indireto  definido soma = Resultados[0];
                break;

            case 3:
                printf("\nA média de gols do %s foi de %.2f.", time, Resultados[0] / 10.0);
                break;

            case 4:
                printf("\nEm %d das %d rodadas o %s marcou gols acima de sua média (%.2f).", Resultados[2], 10, time, Resultados[0] / 10.0);
                break;

            case 5:
                printf("\nA maior quantidade de gols ocorreu na rodada %d com %d gols.", Resultados[2], Resultados[3]);
                break;

            default:
                printf("A opção informada está fora do menu. Tente novamente!");
                break;
            }
            // ---------------------------------------

            system("clear");
        } while (menu != 0 && menu != 100);
    }
}

//-------------------------------------------------------------
void ExibirMenu(char time[])
{
    system("clear");
    printf("\n\nTime escolhido: %s\n", time);
    printf("\n----------------------------"
           "\nEscolha um opção do menu:"
           "\n(1) Para exibir os gols do time"
           "\n(2) Para exibir o total geral de gols."
           "\n(3) Para exibir a média de gols do time"
           "\n(4) Para exibir o número de partidas (total) em que o time marcou gols acima da média."
           "\n(5) para exibir a maior quantidade de gols marcada em uma partida e a rodada correspondente."
           "\n----------------------------"
           "\n(0) Para retornar ao menu principal."
           "\n(100) Para sair do sistema."
           "\n\n Sua opção escolhida:  ");
}

void CalcularResultados(int gols[], int Resultados[])
{
    int somatorio, cont = 0, rodada, max = gols[0];

    for (int i = 0; i < 10; i++)
    {
        if (gols[i] > (somatorio / 10.0))
        {
            cont++;
        }
        if (gols[i] > max)
        {
            max = gols[i];
            rodada = i;
        }
        somatorio += gols[i];
    }
    // Guardar os resultados no vetor de resultados
    Resultados[0] = somatorio; // Medias
    Resultados[1] = cont;
    Resultados[2] = rodada;
    Resultados[3] = max;
    // Sequência de alocação dos elementos no vetor para evocar depois.
    // Nota: Colocar cont=0 para garantir o início da contagem com cont++;
}

void ExibirMenuTimes(char nome_time[10], int gols[])
{
    int time_escolhido;
    int Mat[10][9] = {
        {4, 2, 2, 1, 3, 2, 5, 1, 2}, // Bahia:
        {1, 2, 1, 4, 2, 1, 0, 2, 1}, // Ceará:
        {2, 0, 1, 3, 0, 2, 1, 4, 0}, // CRB:
        {3, 1, 4, 2, 2, 3, 1, 2, 0}, // Fortaleza:
        {2, 2, 3, 4, 1, 2, 1, 0, 2}, // Sport:
        {1, 1, 2, 2, 1, 1, 3, 1, 1}, // Nautico:
        {1, 2, 1, 1, 2, 1, 1, 1, 2}, // Sampaio:
        {0, 0, 5, 1, 2, 0, 1, 2, 3}, // Santa Cruz:
        {0, 3, 1, 1, 0, 0, 2, 1, 1}, // Vitória:
        {2, 3, 4, 1, 0, 0, 0, 1, 1}, // Guarani
    };
    char times[10][10] = {"Bahia", "Ceará", "CRB", "Fortaleza", "Sport", "Nautico", "Sampaio", "Santa Cruz", "Vitória", "Guarani"};

    printf("Escolha um tipo de menu abaixo para analisar os resultados esportivos.");
    for (int i = 0; i < 10; i++)
    {
        printf("\n(%d)  %s", i + 1, times[i]);
    }
    printf("\n\n Número do time de sua escolha:  ");
    scanf("\n%d", &time_escolhido);

    for (int i = 0; i < 10; i++)
    {
        nome_time[i] = times[time_escolhido - 1][i];
    }
    for (int i = 0; i < 10; i++)
    {
        gols[i] = Mat[time_escolhido - 1][i];
    }
}

/*
NOTA:
1) void ExibirMatriz(int lin, int col, int A[lin][col])
{ // Modelo suportado pelo compilador: Array de tamanho variável (Variable Length Array - VLA)).
  // Vantagem: Ajustável a qualquer tamanho de matriz.

2) Atenção para passagem de parâmetro que necessita ser zerado como em cont++;
  Sempre iniciar com cont=0;

  */