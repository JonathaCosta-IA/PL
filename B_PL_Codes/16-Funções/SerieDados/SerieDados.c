// Código de Rotinas Auxiliares

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Note que,em C, não é possível retornar diretamente um array (ou vetor) de uma função, pois arrays locais são alocados na
stack e são descartados quando a função termina.
Contudo, é possível:
 - Passar um ponteiro para o vetor como argumento para a função.
 - Alocar o vetor dinamicamente na heap usando malloc.
 - Ou apenas pre-definir o vetor no código main e atualizar(carregar) o vetor conforme solução abaixo:
*/
void CarregarVetor(int numeros[], int tamanho) {

    for (int i = 0; i < tamanho; i++) {
        int k= rand() % 10;
        numeros[i]=(i+1)*k;}
    }

void ExibirVetor(int numeros[],int tamanho) {
// Rotina utilizada para exibir um vetor
    printf(" {");
    for (int i = 0; i < tamanho; i++) {
     (i!=tamanho-1)? printf("%d,", numeros[i]): printf("%d}", numeros[i]);}
}



