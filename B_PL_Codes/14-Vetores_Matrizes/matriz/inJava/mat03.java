/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java
Escreva um código em C que receba 6 valores numéricos inteiros numa matriz 2 x 3 e
mostre a soma destes 6 números.
*/

import java.util.Scanner;

public class mat03 {
    public static void main(String[] args) {
        Scanner dados = new Scanner(System.in);
        int[][] matriz = new int[2][3]; // Declaração da matriz 4x4
        int i, j;
        int soma = 0; // Variável para armazenar a soma dos elementos
        // Preenchendo a matriz com valores fornecidos pelo usuário
        System.out.printf("Digite 6 valores inteiros para preencher a matriz 2x3:\n");
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 3; j++) {
                System.out.printf("Elemento [%d][%d]: ", i, j);

                matriz[i][j] = dados.nextInt();
                soma += matriz[i][j]; // Acumulando o valor na variável soma
            }
        }
        // Exibindo a soma dos elementos da matriz
        System.out.printf("\nA soma dos elementos da matriz é: %d\n", soma);
        dados.close();
    }
}
