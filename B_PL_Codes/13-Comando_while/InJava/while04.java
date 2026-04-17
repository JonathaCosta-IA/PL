/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java
Escreva um programa que solicite 10 números ao usuário, através de um laço while, e ao final mostre qual destes números é o maior.
*/

import java.util.Scanner;

public class while04 {

    public static void main(String[] args) {
        int numero, i = 1, maior;
        // Solicitar o primeiro número e o assume como o maior inicialmente
        System.out.printf("Digite o número 1: ");
        Scanner dados = new Scanner(System.in);
        numero = dados.nextInt();
        maior = numero;
        // Laço while para solicitar os outros 9 números
        while (i < 10) {
            System.out.printf("Digite o número %d: ", i + 1);
            numero = dados.nextInt();
            // Verificar se o número atual é maior que o maior registrado
            if (numero > maior) {
                maior = numero;
            }
            i++;
        }
        // Exibir o maior número digitado
        System.out.printf("O maior número digitado foi: %d\n", maior);
    }
}