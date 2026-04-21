
/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java
Escreva um código em C que preencha uma matriz 3 x 3 e imprima-a.
*/
import java.util.Scanner;

public class mat01 {

    public static void main(String[] args) {

        {
            int i, j;
            int[][] matriz = new int[3][3]; // Declaração da matriz 3x3
            Scanner dados = new Scanner(System.in);
            // Preenchendo a matriz com valores fornecidos pelo usuário
            System.out.printf("Digite os valores para preencher a matriz 3x3:\n");
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    System.out.printf("Elemento [%d][%d]: ", i, j);
                    matriz[i][j] = dados.nextInt();
                }
            }
            // Imprimindo a matriz
            System.out.printf("\nMatriz 3x3:\n\n");
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    System.out.printf("%d\t", matriz[i][j]);
                }
                System.out.printf("\n");
            }
            dados.close();
        }

    }
}

/*
 * ======================
 * CONSIDERAÇÕES FINAIS
 * ======================
 * Uma matriz 3x3 pode ser declarada como:
 * int A[3][3];
 * 
 * Também é possível omitir o número de linhas em certos contextos (como
 * inicialização):
 * int A[][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
 * 
 * Convenção de indexação:
 * A[i][j], onde:
 * - i representa o índice da linha
 * - j representa o índice da coluna
 * 
 * Regra fundamental:
 * 
 * O número de colunas deve ser informado porque o compilador precisa saber
 * quantos elementos existem em cada linha. Isso é necessário para calcular
 * a posição correta de A[i][j] na memória, já que as matrizes são armazenadas
 * de forma linear (linha por linha).
 * 
 * A lógica para A[i][j] é:
 * 
 * posição = i x (número de colunas) + j
 * 
 * Observação:
 * Em C, matrizes são armazenadas em memória no formato "row-major order",
 * ou seja, os elementos de uma mesma linha são contíguos.
 */
