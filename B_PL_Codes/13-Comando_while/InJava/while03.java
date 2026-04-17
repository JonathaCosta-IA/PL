/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java
Escreva um programa que solicite um número ao usuário, e mostre sua tabuada de multiplicação completa (de 1 até 10).
*/

import java.util.Scanner;

public class while03 {
    public static void main(String[] args) {

        Scanner dados = new Scanner(System.in);

        int numero, i = 1;
        // Solicitar ao usuário que insira um número
        System.out.printf("Digite um número para ver a sua tabuada de multiplicação: ");
        numero = dados.nextInt();
        // Laço while para gerar a tabuada de 1 a 10
        while (i <= 10) {
            System.out.printf("%d x %d = %d\n", numero, i, numero * i);
            i++; // Incrementar o contador}
        }
        dados.close();
    }
}
