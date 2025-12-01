/*
Produza um código em C para executar o jogo da forca.
Versão 00, comentada.
*/
#include <stdio.h>   // Biblioteca padrão
#include <stdlib.h>  // Uso do system()
#include <time.h>    // Uso do time()
#include "rotinas.h"

int main()
{
    char p0[10] = "casa";         // Definindo um vetor para a palavra-alvo
    char p1[10] = "****";         // Definindo um vetor para a palavra-exibida
    int cont = 4 + 3;             // Carregando um contador de erros

    while(true)
        {
            printf("\nVocê tem %d tentativas!\n",cont);
            printf("\nA palavra é:  ");
            printf("%s",p1);                // Exibindo o valor atual de palavra-exibida
            char l = RecebeLetra();         // Chamando a rotina de recebimento de letra
            AtualizaPalavra(p0,p1,l);       // Atualizando a palavra-exibida
            printf("%s",p1);                // Exibindo o valor atual de palavra-exibida
            system("clear");                // Limpando a tela
            cont--;                         // Decrementando as tentativas de erro
            bool res = compare(p0,p1);      // Comparando se as strings são iguais.'
            if (res==true)                  // Ou if (res==1)
                {printf("\n\nParabéns! Você acertou a palavra!\n\n");
                break; // Saindo do while
                }
            if (cont==0)
                {printf("\nTentativas esgotadas!\n\n");
                break; // Saindo do while
                }
        }
    return 0;
}
