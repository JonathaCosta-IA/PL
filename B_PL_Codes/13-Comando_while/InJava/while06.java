/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java
Escreva um programa que imprima todos os divisores de um número inteiro positivo.
*/

import java.util.Scanner;

public class while06 {

    public static void main(String[] args) {

        Scanner dados = new Scanner(System.in);
        int numero, i = 1;
        // Solicita ao usuário que insira um número inteiro positivo
        System.out.printf("Digite um número inteiro positivo: ");
        numero = dados.nextInt();
        // Verifica se o número é positivo
        if (numero <= 0) {
            System.out.printf("Por favor, insira um número positivo.\n");
            System.exit(1); // return 1- Encerra o programa se o número não for positivo
        }
        // Laço para encontrar e imprimir todos os divisores do número
        System.out.printf("Os divisores de %d são:\n", numero);
        while (i <= numero) {
            if (numero % i == 0) {
                System.out.printf("%d\n", i);
            }
            i++;
        }
    }
}