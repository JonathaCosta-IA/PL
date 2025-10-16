#include <stdio.h>

int RecebeNum(int ch)
{   int x;
    printf("\nVersão %d em execução.\n",ch);
    printf("Informe um número:\n ");scanf("%d",&x);
    return x;
}

void TestPrimo(int num)
{
/* COMENTÁRIOS
Números primos são números naturais maiores
que 1 que possuem apenas dois divisores distintos:
1 e o próprio número.*/

/*SOLUÇÃO 01: Mais operacional
Utilizando um contador de divisores carregado com zero.
Caso sejam encontrados novos divisores o contador é incrementado.
Espera-se encontrar 2 divisores para que o número seja primo.
Isso implica que 1 é excluído no teste "cont_div==2", porem,
o teste continua sendo executado até o dividendo seja igual o divisor.
Isso representa custo computacional, especialmente para números maiores.
Desse modo, basta que o contador atinja o valor 3 para que o número não seja
primo.
Veja a solução 02.
*/
  int cont_div = 0;
  for(int i=1;i<=num;i++)
        {if (num%i==0){cont_div++;}
        }
  if (cont_div==2) printf("O número informado é primo!\n");
  else printf("O número informado não é primo!\n");
}

void TestPrimo2(int num)
{
/*SOLUÇÃO 02: Mais eficiente
 Sempre que o contador encontrar um divisor, interrompe-se a laço e salta-se para a conclusão que
 o numero não é primo.

 Por que num/2 ?
 Suponha num = 20.
 Os divisores de 20 (exceto 1 e 20) são: 2, 4, 5, 10.
 Logo, nenhum número maior que (num/2) pode dividir "num" sem que o resultado da divisão
 seja menor que 2.
*/
    if (num == 1) printf("O número informado não é primo!\n");
    else {
        int cont = 2;                           // Contador de divisores do número 1 e o num
        for (int j = 2; j <= num / 2; j++)      // Limite de divisores (num/2) ver o comentário
            { if (num % j == 0)
                    {cont++;                    // Encontrou um divisor; logo o numero não é primo
                    printf("O número informado não é primo!\n");
                    break;}
            }
        if (cont == 2) printf("O número informado é primo!\n"); // Se cont ainda for 0, então o número é primo
        }
}


