#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char nome[20];
    }Dados;

Dados CarregarNovoUsuario(Dados j)
{
    j.id = 10;                 // altera a cópia
    strcpy(j.nome, "Costa");   // ajusta o nome na cópia
    return j;                  // devolve a cópia alterada
}

int main()
{
    Dados D = {1, "Jonatha"};

    printf("\nAntes:");
    printf("\n%d", D.id);
    printf("\n%s", D.nome);

    D = CarregarNovoUsuario(D);   // recebe o struct modificado

    printf("\n\nDepois (agora muda):");
    printf("\n%d", D.id);
    printf("\n%s", D.nome);

    return 0;
}
