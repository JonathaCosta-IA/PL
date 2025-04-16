/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um programa para ler uma letra e verificar se é uma vogal ou não.
*/

#include <stdio.h>
int main(){
char letra;
// Ler dados
printf("Informe uma letra:\n"); scanf("%c",&letra);
// Testar
switch(letra)
{
    case 'a': printf("A letra é uma vogal.\n"); break;
    case 'e': printf("A letra é uma vogal.\n"); break;
    case 'i': printf("A letra é uma vogal.\n"); break;
    case 'o': printf("A letra é uma vogal.\n"); break;
    case 'u': printf("A letra é uma vogal.\n"); break;
    case 'A': printf("A letra é uma vogal.\n"); break;
    case 'E': printf("A letra é uma vogal.\n"); break;
    case 'I': printf("A letra é uma vogal.\n"); break;
    case 'O': printf("A letra é uma vogal.\n"); break;
    case 'U': printf("A letra é uma vogal.\n"); break;
    default: printf("A letra informada não é uma vogal!\n");
}
return 0;
}
