/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java
Escreva um código em C que preencha um vetor com 10 números e retorne quais são
os números ímpares deste vetor.
*/

import java.util.Scanner;

public class vec03 {

    public static void main(String[] args) {
        Scanner dados = new Scanner(System.in);
        int[] vetor = new int[10];
        // Preenchendo o vetor com números
        System.out.printf("Digite 10 números:\n");
        for (int i = 0; i < 10; i++) {
            System.out.printf("Número %d: ", i + 1);
            vetor[i] = dados.nextInt();
        }
        // Exibindo os números ímpares do vetor
        System.out.printf("Números ímpares no vetor:\n");
        for (int i = 0; i < 10; i++) {
            if (vetor[i] % 2 != 0) {
                System.out.printf("%d ", vetor[i]);
            }
        }
        System.out.printf("\n");
        dados.close();
    }
}
