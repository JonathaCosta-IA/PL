/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa que leia duas notas, calcule a média ponderada e verifique se o aluno está aprovado ou não,
considerando como critério de aprovação média 7,0 e utilize peso 2 para nota1 e peso 3 para nota 2.
*/

#include <stdio.h>
int main(){
float nota1,nota2,media_pond;
// Ler dados
printf("Informe uma nota 1:\n"); scanf("%f",&nota1);
printf("Informe uma nota 2:\n"); scanf("%f",&nota2);

int peso_nota1=2,peso_nota2=3;
// Calcular
media_pond=(peso_nota1*nota1 + peso_nota2*nota2)/2.0;
// Testar
if (media_pond>=7.0)
// Exibir resultados
{printf("Candidato aprovado!\n");}
else {printf("Candidado não aprovado!\n");}
return 0;
}
