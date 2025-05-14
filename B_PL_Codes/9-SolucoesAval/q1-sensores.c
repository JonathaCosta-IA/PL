/******************************************************************************

A matriz abaixo representa uma linha de produção industrial que possui 4
sensores de pressão. Cada sensor realiza 5 medições ao longo do dia.
a) Calcule a média de cada sensor (média de cada linha).
b) Encontre o maior valor de leitura de toda a matriz.
c) Verifique se algum sensor apresentou leituras acima de 100.
d) Restruture a solução dos itens acima utilizando um bloco único bloco de
"for duplo" : for(... ){ for(... ){  ...  } ...}

*******************************************************************************/
#include <stdio.h>

int main()
{
   int dados[4][5]=
   {
       {70, 60, 65, 70, 55}, // Sensor 01
       {90, 100, 110,115, 100}, // Sensor 02
       {80, 85, 90, 100, 100}, // Sensor 03
       {80, 90, 100, 115, 110}, // Sensor 04
   };

    // Variáveis gerais
    int maior=dados[0][0];
    int i,j,s=0;
    int ch;
    printf("Qual modelo de solução deseja exibir(1 ou 2)? ");scanf("%d",&ch);
    switch(ch)
        {
        case 1:{
                    // Item A
                     for(i=0;i<4;i++)
                     {  for(j=0;j<5;j++)
                         { s+=dados[i][j];}
                         printf("\nA média do sensor %d é %.2f",i+1,s/5.0);
                         s=0;
                     }
                    // Item B
                     for(i=0;i<4;i++)
                     {  for(j=0;j<5;j++)
                         { if(maior<dados[i][j]) maior=dados[i][j];}
                     }
                     printf("\nO maior valor de pressão de toda a matriz é %d.",maior);
                     // Item C
                     for(i=0;i<4;i++)
                     {  for(j=0;j<5;j++)
                         { if(dados[i][j]>100)
                            {printf("\nO sensor %d apresentou leituras acima de 100.",i+1);
                             break;}
                         }
                     }
                break;
                }
        case 2:{
             // Item D
                int temp_over=0;
                for(i=0;i<4;i++)
                 {  for(j=0;j<5;j++)
                     {s+=dados[i][j];
                      if(maior<dados[i][j]) maior=dados[i][j];
                      if(dados[i][j]>100){temp_over=1;}
                     }
                     if (temp_over==0) printf("\nA média do sensor %d é %.2f. Leituras normais.",i+1,s/5.0);
                     else printf("\nA média do sensor %d é %.2f. Leituras acima de 100.",i+1,s/5.0);
                     temp_over=0;
                     s=0;
                 }
                 printf("\nO maior valor de pressão de toda a matriz é %d.",maior);
            break;

            }
        default: printf("Escolha inválida!");
        }
}


