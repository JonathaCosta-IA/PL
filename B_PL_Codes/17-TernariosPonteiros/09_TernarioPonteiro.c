/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Defina uma estrutura chamada Pessoa com os campos nome e idade. 
Crie um ponteiro para uma variável do tipo Pessoa, atribua valores a 
esses campos e imprima as informações.
*/
#include <stdio.h>
struct Pessoa 
{   char nome[50];
    int idade;
};
int main() {
    struct Pessoa p1 = {"Alice", 25};
    struct Pessoa *ptr = &p1;
    printf("Nome: %s\n", (*ptr).nome);  // Equivalente a ptr->nome
    printf("Idade: %d\n", (*ptr).idade);  // Equivalente a ptr->idade
    /*
    Em um ponteiro para uma estrutura, a expressão "ptr->campo" é equivalente a "(*ptr).campo".
    Note que o operador "*" (desreferência) acessa o conteúdo que o ponteiro aponta, enquanto o operador "." (ponto) acessa os membros de uma estrutura.    
    Portanto, no trecho acima pode ser utilizada o seguinte operador
    printf("Nome: %s\n", ptr->nome);
    printf("Idade: %d\n", ptr->idade);
    */
}

