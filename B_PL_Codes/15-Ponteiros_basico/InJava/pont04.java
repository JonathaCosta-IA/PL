/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java
Escreva um código em C que preencha um vetor com 10 números e retorne quais são os números primos deste veto
*/

import java.util.Scanner;

public class pont04 {

    public static void main(String[] args) {
        Scanner dados = new Scanner(System.in);

        int[] v = new int[10];
        boolean primo;

        System.out.printf("Digite 10 números:\n");
        for (int i = 0; i < 10; i++) {
            v[i] = dados.nextInt();
        }

        System.out.printf("Números primos:\n");
        for (int i = 0; i < 10; i++) {
            if (v[i] < 2)
                continue;
            primo = true;
            for (int j = 2; j <= v[i] / 2; j++) {
                if (v[i] % j == 0) {
                    primo = false;
                    break;
                }
            }
            if (primo)
                System.out.printf("%d ", v[i]);
        }

        System.out.printf("\n");
        dados.close();
    }
}
