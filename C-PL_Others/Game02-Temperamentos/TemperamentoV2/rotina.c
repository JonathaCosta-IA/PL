#include<stdio.h>
// Teste de pertinência
int pertence(int numero, int lista[], int tamanho) {
/* Procura o número na lista elemento-a-elemento
*/
    for(int i = 0; i < tamanho; i++)
        {if(lista[i] == numero)
            return 1;
        }
    return 0;

}


// Mensagem inicial

void MensagemInicial(){
    printf(
            "\n"
            "-------------------------------------------------------\n"
            "\t\tLógica de Programação\n"
            "\t\tProf. Jonatha Costa\n"
            "\t\tVersão 01, 24.02.2026\n"
            "-------------------------------------------------------\n\n\n"
            "   Este código visa apresentar ao usuário 32 perguntas sobre temperamento.\n"
            "   Ao final, será classificado e exibido o temperamento dominante do usuário.\n"
            "   O teste está baseado no livro de Minate, 2019.\n"
            "   Os temperamentos listados no livro são:\n\n"
            "\t()Colérico\t()Sanguineo\t()Fleumático\t()Melancólico."
            "\n\nIdentifique o seu a partir do teste a seguir!"
            "\n\n"
            );
}


 char *perguntas[32] =
       {
        "Gosta da natureza?",
        "Tende para a melancolia, o sentimentalismo?",
        "É tímido, suscetível e indeciso, desanima facilmente?",
        "Possui senso prático desenvolvido?",
        "Tem pouco interesse pelo mundo inteiro?",
        "É difícil reconciliar-se?",
        "Gosta da eloquência, possui boa oratória?",
        "Gosta de ruminar acontecimentos?",
        "É violento no agir ou no falar?",
        "Gosta de novidades?",
        "É impulsivo — age sem pensar?",
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


void TesteTemperamento()
{
         // Gabarito das respostas por temperamento conforme autor do livro referenciado
        int colerico_lista[12]   = {4,6,7,8,9,10,11,13,14,16,17,27};
        int sanguineo_lista[12]  = {4,7,9,10,11,12,16,21,24,25,27,29};
        int melancolico_lista[12]= {1,2,3,5,6,8,15,18,19,26,31,32};
        int fleumatico_lista[12] = {5,15,18,19,20,22,23,25,28,29,30,32};

         // Variáveis de controle do teste
        int ponto_colerico = 0, ponto_sanguineo = 0, ponto_melancolico = 0, ponto_fleumatico = 0;

        printf("        INICIANDO O TESTE DE TEMPERAMENTOS\n");
        printf("Responda com 1 (SIM) ou 0 (NAO)\n\n");

        // Laço das perguntas do teste
        int resposta;
         for(int i = 0; i < 32; i++)
         {
            printf("%02d. %s \n", i+1, perguntas[i]);
            printf("Resposta: ");
            scanf("%d", &resposta);
            printf("\n");
         // Pontuação
         if(resposta == 1) {
            if(pertence(i+1, colerico_lista, 12)) ponto_colerico++;
            if(pertence(i+1, sanguineo_lista, 12)) ponto_sanguineo++;
            if(pertence(i+1, melancolico_lista, 12)) ponto_melancolico++;
            if(pertence(i+1, fleumatico_lista, 12)) ponto_fleumatico++;
                            }
            }

     // Imprimir resultados diretos das perguntas
    printf("=====================================\n");
    printf("              RESULTADO\n");
    printf("=====================================\n");
    printf("Colerico:   %d\n", ponto_colerico);
    printf("Sanguineo:  %d\n", ponto_sanguineo);
    printf("Melancolico:%d\n", ponto_melancolico);
    printf("Fleumatico: %d\n", ponto_fleumatico);

    // Determinar predominante
    int maior = ponto_colerico;
    char dominante[20] = "Colerico";

    if(ponto_sanguineo > maior)
        {maior = ponto_sanguineo;
        strcpy(dominante, "Sanguineo");}
    if (ponto_melancolico > maior)
        {maior = ponto_melancolico;
         strcpy(dominante, "Melancolico");}
    if(ponto_fleumatico > maior)
        {maior = ponto_fleumatico;
         strcpy(dominante, "Fleumatico");}

    printf("\nTemperamento predominante: %s\n", dominante);


}

