/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java
Escreva um código em C que preencha um vetor com 10 números e indique o maior, o
menor número e a diferença entre eles.
*/

import java.util.Scanner;

public class vec02 {

    public static void main(String[] args) {
        int[] vetor = new int[10];
        int i, maior, menor, diferenca;
        Scanner dados = new Scanner(System.in);
        // Preenchendo o vetor com números
        System.out.printf("Digite 10 números:\n");
        for (i = 0; i < 10; i++) {
            System.out.printf("Número %d: ", i + 1);
            vetor[i] = dados.nextInt();
            // Inicializando maior e menor como o primeiro elemento do vetor
        }
        maior = menor = vetor[0];
        // Encontrando o maior e o menor número no vetor
        for (i = 1; i < 10; i++) {
            if (vetor[i] > maior) {
                maior = vetor[i];
            }
            if (vetor[i] < menor) {
                menor = vetor[i];
            }
        }

        // Calculando a diferença entre o maior e o menor número
        diferenca = maior - menor;
        // Exibindo o maior, o menor número e a diferença
        System.out.printf("O maior número é: %d\n", maior);
        System.out.printf("O menor número é: %d\n", menor);
        System.out.printf("A diferença entre o maior e o menor número é: %d\n", diferenca);
        dados.close();
    }
}
