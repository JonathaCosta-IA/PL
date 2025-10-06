/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa que leia 5 valores, encontre o maior,  o menor e a média utilizando números inteiros.
*/

#include <stdio.h>
int main(){
float a,b,c,d,e;
float maior,menor,media;
// Ler dados
printf("Informe um valor:\n"); scanf("%f",&a);
printf("Informe um novo valor:\n"); scanf("%f",&b);
printf("Informe um novo valor:\n"); scanf("%f",&c);
printf("Informe um novo valor:\n"); scanf("%f",&d);
printf("Informe um novo valor:\n"); scanf("%f",&e);
// Calcular
media=(a+b+c+d+e)/5.0;
maior=a; menor=a;
// Testar do maior
if (a>maior) {maior=a;};
if (b>maior) {maior=b;};
if (c>maior) {maior=c;};
if (d>maior) {maior=d;};
if (e>maior) {maior=e;};
// Testar do menor
if (a<menor) {menor=a;};
if (b<menor) {menor=b;};
if (c<menor) {menor=c;};
if (d<menor) {menor=d;};
if (e<menor) {menor=e;};
// Exibir resultados
printf("\n");
printf("O maior valor fornecido é %f.\n",maior);
printf("O menor valor fornecido é %f.\n",menor);
printf("A media entre os valores fornecidos é %f.\n\n",media);

return 0;
}
