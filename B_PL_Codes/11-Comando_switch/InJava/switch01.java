/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em Java
Escreva um programa para ler uma letra e verificar se é uma vogal ou não.
*/

import java.util.Scanner;

public class switch01 {

    public static void main(String[] args) {
        char letra;
        // Ler dados

        Scanner entrada_dados = new Scanner(System.in);
        System.out.println("Informe uma letra:\n");
        letra = entrada_dados.next().charAt(0);

        switch (letra) {
            case 'a':
                System.out.println("\nA letra é uma vogal.\n");
                break;
            case 'e':
                System.out.println("\nA letra é uma vogal.\n");
                break;
            case 'i':
                System.out.println("\nA letra é uma vogal.\n");
                break;
            case 'o':
                System.out.println("\nA letra é uma vogal.\n");
                break;
            case 'u':
                System.out.println("\nA letra é uma vogal.\n");
                break;
            case 'A':
                System.out.println("\nA letra é uma vogal.\n");
                break;
            case 'E':
                System.out.println("\nA letra é uma vogal.\n");
                break;
            case 'I':
                System.out.println("\nA letra é uma vogal.\n");
                break;
            case 'O':
                System.out.println("\nA letra é uma vogal.\n");
                break;
            case 'U':
                System.out.println("\nA letra é uma vogal.\n");
                break;
            default:
                System.out.println("\nA letra informada não é uma vogal!\n");
        }

    }

}