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

int pertence(int numero, int lista[]); // Função auxiliar

int main()
{

   // 01. Mensagem de apresentação
       printf(
                "\n"
                "-------------------------------------------------------\n"
                "\t\tLógica de Programação\n"
                "\t\tProf. Jonatha Costa\n"
                "\t\tVersão 00, 20.02.2026\n"
                "-------------------------------------------------------\n\n\n"
                "   Este código visa apresentar ao usuário 32 perguntas sobre temperamento.\n"
                "   Ao final, será classificado e exibido o temperamento dominante do usuário.\n"
                "   O teste está baseado no livro de Minate, 2019.\n"
                "   Os temperamentos listados no livro são:\n\n"
                "\t-Colérico\t-Sanguineo\t-Fleumático\t-Melancólico."
                "\n\nIdentifique o seu a partir do teste a seguir!"
                "\n\n"
            );

   // 02. Lista de perguntas do livro
       char *perguntas[32] =
       {
        "Gosta da natureza ?",
        "Tende para a melancolia, o sentimentalismo ?",
        "É tímido, suscetível e indeciso, desanima facilmente ?",
        "Possui senso prático desenvolvido ?",
        "Tem pouco interesse pelo mundo inteiro ?",
        "É difícil reconciliar-se ?",
        "Gosta da eloquência, possui boa oratória ?",
        "Gosta de ruminar acontecimentos ?",
        "É violento no agir ou no falar ?",
        "Gosta de novidades ?",
        "É impulsivo — age sem pensar ?",
        "É otimista, geralmente bem-humorado ?",
        "É cordial, exuberante, arrasta os outros com palavras e o exemplo ?",
        "Os outros o consideram autoritário ?",
        "Gosta de um pouco de solidão para organizar os pensamentos ?",
        "Possui grande capacidade de trabalho ?",
        "Sente necessidade intensa de ação em múltiplas direções ?",
        "É uma pessoa de hábitos ?",
        "Gosta de uma vida simples, reduz o máximo possível as necessidades ?",
        "É calmo, objetivo, com humor igual ?",
        "Confia mais na prática do que na teoria ?",
        "É tenaz e perseverante ?",
        "Possui senso teórico ?",
        "Gosta de gozar os prazeres da vida ?",
        "Gosta de zombaria, da ironia e de tirar sarro ?",
        "É 'ciumento' e fechado ?",
        "Tem reputação de pessoa corajosa ?",
        "Gosta das teorias dos sistemas abstratos ?",
        "Possui senso de humor ?",
        "É conhecido como sincero e franco ?",
        "Goza de reputação de pessoa delicada e cortês ?",
        "Respeita os princípios e gosta de relembrá-los ?"
    };

    // 03. Teste do temperamento
    printf("-------------------------------------------------------\n");
    // Variáveis de controle
    int teste,resposta;
    printf("Deseja iniciar o teste de temperamentos agora?\nResponda com 1 (SIM) ou 0 (NAO)."); scanf("%d",&teste);
    if (teste==1) {
        system("clear");

        int colerico_lista[12]   = {4,6,7,8,9,10,11,13,14,16,17,27};
        int sanguineo_lista[12]  = {4,7,9,10,11,12,16,21,24,25,27,29};
        int melancolico_lista[12]= {1,2,3,5,6,8,15,18,19,26,31,32};
        int fleumatico_lista[12] = {5,15,18,19,20,22,23,25,28,29,30,32};

        int pontua_temperamento[4] = {0,0,0,0}; //  respectivamente.
        char *temperamentos[4] = {"colérico", "sanguíneo", "melancólico", "fleumático"};

        printf("        INICIANDO O TESTE DE TEMPERAMENTOS\n");
        printf("Responda com 1 (SIM) ou 0 (NAO)\n\n");
        // Laço das perguntas do teste
         for(int i = 0; i < 32; i++)
         {
          //------------------------------------------
            printf("%02d. %s\n", i+1, perguntas[i]);
            printf("Resposta: ");
            scanf("%d", &resposta);
            printf("\n");
         // Pontuação
            if(resposta == 1) {
                if(pertence(i, colerico_lista)) pontua_temperamento[0]++;
                if(pertence(i, sanguineo_lista)) pontua_temperamento[1]++;
                if(pertence(i, melancolico_lista)) pontua_temperamento[2]++;
                if(pertence(i, fleumatico_lista)) pontua_temperamento[3]++;
                            }
          //------------------------------------------
            }

    printf("=====================================\n");
    printf("              RESULTADO\n");
    printf("=====================================\n");
    int j,maior=0;
    for (j=0;j<4;j++)
    { printf(" %s:   %d\n", temperamentos[j],pontua_temperamento[j]);
      if (pontua_temperamento[j] > maior) maior=j;
    }

    printf("\nTemperamento predominante: %s\n", temperamentos[maior]);
    printf("=====================================\n\n\n\n");

        }
    else
        printf("\n\nBons estudos!");


    return 0;
}

// Função auxiliar

int pertence(int numero, int lista[]) {
    for(int i = 0; i < 12; i++) {  // O limite de 12 é devido à quantidade de perguntas do autor do livro.
        if(lista[i] == numero)
            return 1;
    }
    return 0;
}
