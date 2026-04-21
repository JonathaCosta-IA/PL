/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
screva um código em C que receba os elementos de uma matriz inteira de 3 x 3 e
imprima todos os elementos, exceto os elementos da diagonal principal.
*/

import java.util.Scanner;

public class mat05 {

    public static void main(String[] args) {
        Scanner dados = new Scanner(System.in);

        int[][] matriz = new int[3][3]; // Declaração da matriz 3x3
        int i, j;
        // Preenchendo a matriz com valores fornecidos pelo usuário
        System.out.printf("Digite os valores para preencher a matriz 3x3:\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                System.out.printf("Elemento [%d][%d]: ", i, j);
                matriz[i][j] = dados.nextInt();
            }
        }
        // Imprimindo todos os elementos, exceto os da diagonal principal
        System.out.printf("\nElementos da matriz, exceto os da diagonal principal:\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if (i != j) { // Condição para excluir os elementos da diagonal principal
                    System.out.printf("%d\t", matriz[i][j]);
                } else {
                    System.out.printf("\t"); // Espaço em branco para manter o alinhamento
                }
            }
            System.out.printf("\n");
        }
        dados.close();
    }
}
