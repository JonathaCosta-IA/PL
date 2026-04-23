/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java
Escreva um código em C que preencha um vetor com 10 números e indique o maior, o menor número e a diferença entre eles.
*/

import java.util.Scanner;

public class pont02 {

    public static void main(String[] args) {
        Scanner dados = new Scanner(System.in);

        int[] v = new int[10];
        int i, maior, menor;

        System.out.printf("Digite 10 números:\n");
        for (i = 0; i < 10; i++) {
            v[i] = dados.nextInt();
        }

        maior = menor = v[0];
        for (i = 1; i < 10; i++) {
            if (v[i] > maior)
                maior = v[i];
            if (v[i] < menor)
                menor = v[i];
        }

        System.out.printf("Maior: %d\n", maior);
        System.out.printf("Menor: %d\n", menor);
        System.out.printf("Diferença: %d\n", maior - menor);
        dados.close();
    }
}
