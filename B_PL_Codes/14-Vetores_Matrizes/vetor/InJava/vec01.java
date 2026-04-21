/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java
Escreva um código em C que preencha um vetor com 10 números e indique o maior
número ao varrer o vetor preenchido.
*/

import java.util.Scanner;

public class vec01 {

    public static void main(String[] args) {

        Scanner dados = new Scanner(System.in);
        int[] vetor = new int[10]; //
        int i, maior;
        // Preenchendo o vetor com números
        System.out.printf("Digite 10 números:\n");
        for (i = 0; i < 10; i++) {
            System.out.printf("Número %d: ", i + 1);
            vetor[i] = dados.nextInt();
        }
        // Inicializando o maior número como o primeiro elemento do vetor
        maior = vetor[0];
        // Encontrando o maior número no vetor
        for (i = 1; i < 10; i++) {
            if (vetor[i] > maior) {
                maior = vetor[i];
            }
        }
        // Exibindo o maior número
        System.out.printf("O maior número é: %d\n", maior);
        dados.close();
        System.exit(0);
    }
}

/*
 * Um vetor em C é declarado como:
 * int vec[10];
 * Um vetor em Java é declara como:
 * int[] vec = new int[10];
 */