#include <stdio.h>
#include <string.h>

void RecebeNumV2()
{   int num;
    printf("Informe um número:\n ");scanf(" %d",&num);
    (num<7)?printf("O número informado é menor que sete!\n"):
    (num==7)?printf("O número informado é igual a sete!\n"):
    printf("O número informado é maior que sete!\n");
}


void RecebeNumV3(char s[]) {
    int num;
    printf("Informe um número:\n ");scanf(" %d", &num);
    (num < 7) ? strcpy(s, "O número informado é menor que sete!\n"):
    (num == 7) ? strcpy(s, "O número informado é igual a sete!\n"):
    strcpy(s, "O número informado é maior que sete!\n");
}


const char* RecebeNumV4() {
    /*
    A função abaixo retorna um ponteiro para uma string constante.
    Isso significa que ela devolve o endereço de uma sequência de caracteres
    que não deve ser modificada pelo código que a recebe.
    */
    int num;
    printf("Informe um número:\n ");scanf(" %d", &num);
    if (num < 7)  return "O número informado é menor que sete!\n";
    if (num == 7) return "O número informado é igual a sete!\n";
    if (num > 7)  return "O número informado é maior que sete!\n";
}


int RecebeNumGeral(){
    int num;
    printf("Informe um número:\n ");scanf(" %d", &num);
    return num;
}

#define MENOR 0
#define IGUAL 1
#define MAIOR 2

void ProcessaNum(int n){
 n=(n < 7 )? MENOR:(n == 7 )? IGUAL:MAIOR;
    switch (n) {
        case MENOR:
            printf("O número informado é menor que sete!\n");
            break;
        case IGUAL:
            printf("O número informado é igual a sete!\n");
            break;
        case MAIOR:
            printf("O número informado é maior que sete!\n");
            break;
             }
}
