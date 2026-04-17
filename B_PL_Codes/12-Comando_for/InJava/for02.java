/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em Java
Escreva um programa em C que leia a idade de 10 pessoas e imprima quantas são maiores de idade, utilizando o for.
*/

import java.util.Scanner;

public class for02 {
    public static void main(String[] args) {

        Scanner dados = new Scanner(System.in);
        int idade, contador_maior = 0;
        // Ler a idade de 10 pessoas
        for (int i = 1; i <= 10; i++) {
            System.out.printf("Digite a idade da pessoa %d: ", i);
            idade = dados.nextInt();
            // Verificar se a pessoa é maior de idade (18 anos ou mais)
            if (idade >= 18) {
                contador_maior++;
            }
        }
        // Exibir a quantidade de pessoas maiores de idade
        System.out.printf("Quantidade de pessoas maiores de idade: %d\n", contador_maior);
    }
}