/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em Java.
Escreva um programa que imprima um mês de acordo com o número digitado pelo usuário e informe se o número não tem mês correspondente ou não (Utilize o calendário gregoriano).
*/

import java.util.Scanner;

public class switch02 {

    public static void main(String[] argas) {
        int mes;
        // Ler dados

        Scanner entrada_dados = new Scanner(System.in);
        System.out.println("\n\nInforme um mes no intervalo entre [1 e 12]:\n");
        mes = entrada_dados.nextInt();

        switch (mes) {
            case 1:
                System.out.println("\nMês de Janeiro.\n");
                break;
            case 2:
                System.out.println("\nMês de Fevereiro.\n");
                break;
            case 3:
                System.out.println("\nMês de Março.\n");
                break;
            case 4:
                System.out.println("\nMês de Abril.\n");
                break;
            case 5:
                System.out.println("\nMês de Maio.\n");
                break;
            case 6:
                System.out.println("\nMês de Junho.\n");
                break;
            case 7:
                System.out.println("\nMês de Julho.\n");
                break;
            case 8:
                System.out.println("\nMês de Agosto.\n");
                break;
            case 9:
                System.out.println("\nMês de Setembro.\n");
                break;
            case 10:
                System.out.println("\nMês de Outubro.\n");
                break;
            case 11:
                System.out.println("\nMês de Novembro.\n");
                break;
            case 12:
                System.out.println("\nMês de Dezembro.\n");
                break;
            default:
                System.out.println("\nA algorismo informado não tem mês correspondente no calendário gregoriano.\n\n");
        }
    }

}