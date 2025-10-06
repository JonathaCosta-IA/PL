/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa que leia duas notas, calcule a média e verifique se o aluno está aprovado ou não,
considerando como critério de aprovação média 7,0;
*/

#include <stdio.h>
int main(){
float nota1,nota2,media;
// Ler dados
printf("Informe uma nota 1:\n"); scanf("%f",&nota1);
printf("Informe uma nota 2:\n"); scanf("%f",&nota2);
// Calcular
media=(nota1+nota2)/2;
// Testar
if (media>=7.0)
// Exibir resultados
{printf("Candidato aprovado!\n");}
else {printf("Candidado não aprovado!\n");}
return 0;
}
