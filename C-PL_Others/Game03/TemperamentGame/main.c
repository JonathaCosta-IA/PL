/*
-------------------------------------------------------------------------
Minatel,I. 2019.Temperamentos sem limites.Figurati.São Paulo, 2019
A autora fornece um questionário de 32 questões-base para classificar, a partir disto, o temperamento
dos participantes de uma pesquisa em: colérico, sanguineo, melancólico e fleumático.
-------------------------------------------------------------------------

Este codigo visa automatizar a classificaçao de usuário.
Autor: Prof. Jonatha costa
Versão 00: 20.02.26 - Conceitos basilares
*/

#include <stdio.h>
#include <stdlib.h>


int pertence(int numero, int lista[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        if(lista[i] == numero)
            return 1;
    }
    return 0;
}

int main()
{

   // 01. Mensagem de apresentação
       const char *msn =
       {
        "\n"
        "-------------------------------------------------------\n"
        "Lógica de Programação\n"
        "Prof. Jonatha Costa\n"
        "20.02.2026\n"
        "-------------------------------------------------------\n\n\n"
        "   Este código visa apresentar ao usuário 32 perguntas sobre temperamento.\n"
        "   Ao final, será classificado e exibido o temperamento dominante do usuário.\n"
        "   O teste está baseado no livro de Minate, 2019.\n"
        "   Os temperamentos listados no livro são:\n"
        "\t-Colérico\t-Sanguineo\t-Fleumático\t-Melancólico."
        "\n\nIdentifique o seu a partir do teste a seguir!"
        "\n\n"
        };
        printf("%s",msn);

   // 02. Lista de perguntas do livro
       char *perguntas[32] =
       {
        "Gosta da natureza.",
        "Tende para a melancolia, o sentimentalismo.",
        "É tímido, suscetível e indeciso, desanima facilmente.",
        "Possui senso prático desenvolvido.",
        "Tem pouco interesse pelo mundo inteiro.",
        "É difícil reconciliar-se.",
        "Gosta da eloquência, possui boa oratória.",
        "Gosta de ruminar acontecimentos.",
        "É violento no agir ou no falar.",
        "Gosta de novidades.",
        "É impulsivo — age sem pensar.",
        "É otimista, geralmente bem-humorado.",
        "É cordial, exuberante, arrasta os outros com palavras e o exemplo.",
        "Os outros o consideram autoritário.",
        "Gosta de um pouco de solidão para organizar os pensamentos.",
        "Possui grande capacidade de trabalho.",
        "Sente necessidade intensa de ação em múltiplas direções.",
        "É uma pessoa de hábitos.",
        "Gosta de uma vida simples, reduz o máximo possível as necessidades.",
        "É calmo, objetivo, com humor igual.",
        "Confia mais na prática do que na teoria.",
        "É tenaz e perseverante.",
        "Possui senso teórico.",
        "Gosta de gozar os prazeres da vida.",
        "Gosta de zombaria, da ironia e de tirar sarro.",
        "É 'ciumento' e fechado.",
        "Tem reputação de pessoa corajosa.",
        "Gosta das teorias dos sistemas abstratos.",
        "Possui senso de humor.",
        "É conhecido como sincero e franco.",
        "Goza de reputação de pessoa delicada e cortês.",
        "Respeita os princípios e gosta de relembrá-los."
    };

    // 03. Teste do temperamento
    printf("-------------------------------------------------------\n");
    int teste,resposta;
    printf("Deseja iniciar o teste de temperamentos agora?\nResponda com 1 (SIM) ou 0 (NAO)."); scanf("%d",&teste);
    if (teste==1) {
        system("clear");

        int colerico_lista[12]   = {4,6,7,8,9,10,11,13,14,16,17,27};
        int sanguineo_lista[12]  = {4,7,9,10,11,12,16,21,24,25,27,29};
        int melancolico_lista[12]= {1,2,3,5,6,8,15,18,19,26,31,32};
        int fleumatico_lista[12] = {5,15,18,19,20,22,23,25,28,29,30,32};

        int colerico = 0, sanguineo = 0, melancolico = 0, fleumatico = 0;


        printf("        INICIANDO O TESTE DE TEMPERAMENTOS\n");
        printf("Responda com 1 (SIM) ou 0 (NAO)\n\n");
        // Laço das perguntas do teste
         for(int i = 0; i < 32; i++) {
            printf("%02d. %s\n", i+1, perguntas[i]);
            printf("Resposta: ");
            scanf("%d", &resposta);
            printf("\n");
         // Pontuação

         if(resposta == 1) {
            if(pertence(i+1, colerico_lista, 12)) colerico++;
            if(pertence(i+1, sanguineo_lista, 12)) sanguineo++;
            if(pertence(i+1, melancolico_lista, 12)) melancolico++;
            if(pertence(i+1, fleumatico_lista, 12)) fleumatico++;
                            }
            }

    printf("=====================================\n");
    printf("              RESULTADO\n");
    printf("=====================================\n");
    printf("Colerico:   %d\n", colerico);
    printf("Sanguineo:  %d\n", sanguineo);
    printf("Melancolico:%d\n", melancolico);
    printf("Fleumatico: %d\n", fleumatico);


    // Determinar predominante
    int maior = colerico;
    char dominante[20] = "Colerico";

    if(sanguineo > maior) {
        maior = sanguineo;
        strcpy(dominante, "Sanguineo");
    }
    if(melancolico > maior) {
        maior = melancolico;
        strcpy(dominante, "Melancolico");
    }
    if(fleumatico > maior) {
        maior = fleumatico;
        strcpy(dominante, "Fleumatico");
    }

    printf("\nTemperamento predominante: %s\n", dominante);

        }
    else
        printf("\n\nBons estudos!");


    return 0;
}
