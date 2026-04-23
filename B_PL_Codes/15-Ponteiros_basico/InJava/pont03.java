/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java.
Escreva um código em C que preencha um vetor com 10 números e retorne quais são os números ímpares deste vetor.
*/

import java.util.Scanner;

public class pont03 {

    public static void main(String[] args) {
        Scanner dados = new Scanner(System.in);

        int[] v = new int[10];
        int i;
        System.out.printf("Digite 10 números:\n");
        for (i = 0; i < 10; i++) {
            v[i] = dados.nextInt();
        }

        System.out.printf("Números ímpares:\n");
        for (i = 0; i < 10; i++) {
            if (v[i] % 2 != 0)
                System.out.printf("%d ", v[i]);
        }

        System.out.printf("\n");
        dados.close();
    }
}
