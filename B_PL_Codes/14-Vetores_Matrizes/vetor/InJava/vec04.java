/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java
Escreva um código em C que preencha um vetor com 10 números e retorne quais são
os números primos deste vetor.
*/

import java.util.Scanner;

public class vec04 {

    public static void main(String[] args) {

        int[] num = new int[10];
        int i, j;
        Scanner dados = new Scanner(System.in);
        // Preenchendo o vetor com números
        System.out.printf("Digite 10 números:\n");
        for (i = 0; i < 10; i++) {
            System.out.printf("Número %d: ", i + 1);
            num[i] = dados.nextInt();
        }
        System.out.printf("Números primos no vetor:\n");
        for (i = 0; i < 10; i++) {
            if (num[i] < 2) {
                continue;// Números menores que 2 não são primos
            }

            int cont = 0; // Resetando o contador para cada número
            for (j = 2; j <= num[i] / 2; j++) {
                if (num[i] % j == 0) {
                    cont++; // Encontrou um divisor
                    break; // Não é primo }
                }
            }
            if (cont == 0) {
                System.out.printf("%d ", num[i]); // Se cont ainda for 0, então o número é primo
            }
        }
        System.out.printf("\n");
        dados.close();
    }
}
