/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:8
Escreva uma programa que leia uma nota e verifique se aprovado ou não,
considerando 7,0 como critério.
Versão 1: Código básico para passo-a-passo, sem blocos de código.

*****************************************************
Exercício : Reescreva o código utilizando outra lógica, estratégia ou comandos.
*****************************************************
*/

#include <stdio.h>
int main()
{
    float nota;
    // Ler dados
    printf("Informe uma nota:\n");
    scanf("%f", &nota);
    // Testar
    if (nota >= 7.0)
    // Exibir resultados
    {
        printf("Candidato aprovado!\n");
    }
    else
    {
        printf("Candidado não aprovado!\n");
    }
    return 0;
}
