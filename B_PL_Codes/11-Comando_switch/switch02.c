/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa que imprima um mês de acordo com o número digitado pelo usuário e informe se o número não tem mês correspondente ou não (Utilize o calendário gregoriano).
*/

#include <stdio.h>
int main(){
int mes;
// Ler dados
printf("Informe um mes no intervalo entre [1 e 12]:\n"); scanf("%d",&mes);
// Testar
switch(mes)
{
    case 1: printf("Mês de Janeiro.\n"); break;
    case 2: printf("Mês de Fevereiro.\n"); break;
    case 3: printf("Mês de Março.\n"); break;
    case 4: printf("Mês de Abril.\n"); break;
    case 5: printf("Mês de Maio.\n"); break;
    case 6: printf("Mês de Junho.\n"); break;
    case 7: printf("Mês de Julho.\n"); break;
    case 8: printf("Mês de Agosto.\n"); break;
    case 9: printf("Mês de Setembro.\n"); break;
    case 10: printf("Mês de Outubro.\n"); break;
    case 11: printf("Mês de Novembro.\n"); break;
    case 12: printf("Mês de Dezembro.\n"); break;
    default: printf("A algorismo informado não tem mês correspondente no calendário gregoriano.\n\n");
}
return 0;
}
