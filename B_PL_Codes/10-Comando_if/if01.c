/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva uma programa que leia uma nota e verifique se aprovado ou não,
considerando 7,0 como critério.
*/

#include <stdio.h>
int main(){
float nota;
// Ler dados
printf("Informe uma nota:\n");
scanf("%f",&nota);
// Testar
if (nota>=7.0)
// Exibir resultados
{printf("Candidato aprovado!\n");}
else {printf("Candidado não aprovado!\n");}
return 0;
}
