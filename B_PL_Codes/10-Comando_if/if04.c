/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa que leia 5 valores, encontre o maior,  o menor e a média utilizando números inteiros.
*/

#include <stdio.h>
int main(){
int a,b,c,d,e;
int maior,menor,media;
// Ler dados
printf("Informe um valor:\n"); scanf("%d",&a);
printf("Informe um novo valor:\n"); scanf("%d",&b);
printf("Informe um novo valor:\n"); scanf("%d",&c);
printf("Informe um novo valor:\n"); scanf("%d",&d);
printf("Informe um novo valor:\n"); scanf("%d",&e);
// Calcular
media=(a+b+c+d+e)/5;
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
printf("O maior valor fornecido é %d.\n",maior);
printf("O menor valor fornecido é %d.\n",menor);
printf("A media entre os valores fornecidos é %d.\n\n",media);

return 0;
}
