/*
-------------------------------------------------------------------------
Minatel,I. 2019.Temperamentos sem limites.Figurati.São Paulo, 2019
A autora fornece um questionário de 32 questões-base para classificar, a partir disto, o temperamento
dos participantes de uma pesquisa em: colérico, sanguineo, melancólico e fleumático.
-------------------------------------------------------------------------

Este codigo visa automatizar a classificaçao de usuário.
Autor: Prof. Jonatha costa
Versão 01: 20.02.26 - Conceitos basilares
*/

#include <stdio.h>
#include <stdlib.h>
#include "bib.h"


int main()
{

   // 01. Mensagem de apresentação
       MensagemInicial();

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
    int teste;
    printf("Deseja iniciar o teste de temperamentos agora?\nResponda com 1 (SIM) ou 0 (NAO)."); scanf("%d",&teste);

    if (teste==1) {
        system("clear");
        TesteTemperamento();}
    else
        printf("\n\nBons estudos!");

    return 0;
}
