#include <stdio.h>
void RecebeNumTestaNum()
{
int num;
printf("Informe um número:\n ");scanf("%d",&num);
if (num%2==0) printf("O número informado é par!\n");
else printf("O número informado é impar!\n");
}


int RecebeNum()
{
int num;
printf("Informe um número:\n ");scanf("%d",&num);
return num;
}

void TestaNum(int num)
{
if (num%2==0) printf("O número informado é par!\n");
else printf("O número informado é impar!\n");
}

const char* TestaNumV1(int num)
{
if (num%2==0) return "O número informado é par!\n";
else return "O número informado é impar!\n";
}

