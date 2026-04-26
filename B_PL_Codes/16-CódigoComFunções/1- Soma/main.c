/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido: sobre blocos de programação em arquivos diferentes.
*/
#include <stdio.h>
#include "calc.h"

int main()
{
int res, v1 = 2, v2 = 3;
res= soma(v1, v2) ;
printf("A soma (%d + %d) vale %d.",v1,v2,res);
}
