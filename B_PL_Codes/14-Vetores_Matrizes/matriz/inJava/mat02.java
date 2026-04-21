
/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java
Escreva um código em C que crie um algoritmo que leia os elementos de uma matriz
inteira de 3 x 3 e imprima outra matriz multiplicando cada elemento da primeira matriz
por 2.
*/
import java.util.Scanner;

public class mat02 {

    public static void main(String[] args) {

        {
            int i, j;
            int[][] matriz = new int[3][3]; // Declaração da matriz 3x3
            int[][] matrizMultiplicada = new int[3][3];
            Scanner dados = new Scanner(System.in);
            // Preenchendo a matriz original com valores fornecidos pelo usuário
            System.out.printf("Digite os valores para preencher a matriz 3x3:\n");
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    System.out.printf("Elemento [%d][%d]: ", i, j);
                    matriz[i][j] = dados.nextInt();
                }
            }
            // Criando a nova matriz multiplicada por 2
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    matrizMultiplicada[i][j] = matriz[i][j] * 2;
                }
            }
            // Imprimindo a matriz original
            System.out.printf("\nMatriz Original 3x3:\n");
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    System.out.printf("%d\t", matriz[i][j]);
                }
                System.out.printf("\n");
            }
            // Imprimindo a matriz multiplicada por 2
            System.out.printf("\nMatriz Multiplicada por 2 (3x3):\n");
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    System.out.printf("%d\t", matrizMultiplicada[i][j]);
                }
                System.out.printf("\n");
            }
            dados.close();
        }
    }
}
