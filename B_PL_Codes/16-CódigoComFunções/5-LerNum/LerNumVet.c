/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido: Ler 10 numeros
*/
#include <stdio.h>
void CarregarVetor(int num[], int tam_vet);

int main()
{
   int tam_vet = 10;
   int num[tam_vet];
   CarregarVetor(num, tam_vet);
}

//*********************ROTINAS AUXILIARES */
void CarregarVetor(int num[], int tam_vet)
{
   for (int i = 0; i < tam_vet; i++)
   {
      printf("Informe um número (%d / %d): ", i, tam_vet);
      scanf("%d", &num[i]);
   }
}
