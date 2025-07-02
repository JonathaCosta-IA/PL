/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido: Ler 10 numeros

*/
#include<stdio.h>
int main()
{
   int num[10];
   for (int i=0;i<10;i++)
   {
   printf("Informe um número (%d / %d): ",i,10);
   scanf("%d",&num[i]);
   }

}
