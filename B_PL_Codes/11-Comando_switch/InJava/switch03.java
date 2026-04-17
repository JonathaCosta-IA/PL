/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em Java.
Escreva um programa em C que leia um número entre 0 e 10 e escreva este número por extenso. Utilize o comando switch.
*/

import java.util.Scanner;

public class switch03 {

    public static void main(String[] args) {
        int numero;
        // Ler dados

        Scanner entrada_dados = new Scanner(System.in);
        System.out.println("\n\nInforme um número no intervalo [0 - 10]:\n");
        numero = entrada_dados.nextInt();

        if (numero < 0 || numero > 10)
            System.out.println("Número fora do intervalo permitido\n");
        switch (numero) {
            case 0:
                System.out.println("Zero\n");
                break;
            case 1:
                System.out.println("Um\n");
                break;
            case 2:
                System.out.println("Dois\n");
                break;
            case 3:
                System.out.println("Três\n");
                break;
            case 4:
                System.out.println("Quatro\n");
                break;
            case 5:
                System.out.println("Cinco\n");
                break;
            case 6:
                System.out.println("Seis\n");
                break;
            case 7:
                System.out.println("Sete\n");
                break;
            case 8:
                System.out.println("Oito\n");
                break;
            case 9:
                System.out.println("Nove\n");
                break;
            case 10:
                System.out.println("Dez\n");
                break;
            default:
                System.out.println("Erro inesperado.\n");
                break;
        }
        entrada_dados.close();
    }

}