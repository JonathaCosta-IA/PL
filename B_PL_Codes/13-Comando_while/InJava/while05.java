/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java
 Escreva um programa que leia 10 números e escreva a diferença entre o maior e o menor valor lido.
*/

import java.util.Scanner;

public class while05 {

    public static void main(String[] args) {

        int numero, i = 1, maior, menor;
        Scanner dados = new Scanner(System.in);
        // Solicita o primeiro número e o define como maior e menor
        System.out.printf("Digite o número 1: ");
        numero = dados.nextInt();
        maior = numero;
        menor = numero;
        // Laço while para solicitar os outros 9 números
        while (i < 10) {
            System.out.printf("Digite o número %d: ", i + 1);
            numero = dados.nextInt();
            // Atualizar o maior e menor número conforme necessário
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
            i++;
        }
        // Calcular e exibir a diferença entre o maior e o menor número
        System.out.printf("A diferença entre o maior e o menor valor lido é: %d\n", maior - menor);
        dados.close();
    }
}
