#include<stdio.h>
void CarregarVetor(int num[],int tam_vet)
{
for (int i=0;i<tam_vet;i++)
   {printf("Informe um número (%d / %d): ",i,tam_vet);
    scanf("%d",&num[i]);
   }
}
