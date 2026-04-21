
/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Escreva um código em C que receba os elementos de uma matriz inteira de 4 x 4 e
imprima os elementos da diagonal principal.
*/
import java.util.Scanner;

public class mat04 {
    public static void main(String[] args) {
        Scanner dados = new Scanner(System.in);
        int[][] matriz = new int[4][4]; // Declaração da matriz 4x4
        int i, j;
        // Preenchendo a matriz com valores fornecidos pelo usuário
        System.out.printf("Digite os valores para preencher a matriz 4x4:\n");
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                System.out.printf("Elemento [%d][%d]: ", i, j);
                matriz[i][j] = dados.nextInt();
            }
        }
        // Imprimindo os elementos da diagonal principal
        System.out.printf("\nElementos da diagonal principal:\n");
        for (i = 0; i < 4; i++) {
            System.out.printf("%d\t", matriz[i][i]);
        }
        System.out.printf("\n");
        dados.close();
    }
}
