/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em Java
Escreva um programa em C que imprima todos os divisores de um número, utilizando o laço for
*/

import java.util.Scanner;

public class for05 {

    public static void main(String[] args) {
        Scanner dados = new Scanner(System.in);
        int numero;
        // Solicitar ao usuário para digitar um número
        System.out.printf("Digite um número inteiro positivo: ");
        numero = dados.nextInt();
        // Verificar se o número é positivo
        if (numero <= 0) {
            System.out.printf("Por favor, insira um número positivo.\n");
        } else {
            // Imprimir todos os divisores do número
            System.out.printf("Os divisores de %d são: { ", numero);
            for (int i = 1; i <= numero; i++) {
                if (i != numero) {
                    if (numero % i == 0)
                        System.out.printf("%d, ", i);
                } else {
                    if (numero % i == 0) {
                        System.out.printf("%d }", i);
                    }
                }
            }

        }
    }
}
