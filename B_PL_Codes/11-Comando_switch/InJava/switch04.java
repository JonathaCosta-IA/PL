/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em Java
Escreva um programa em C que receba um dígito e informe se é uma pontução identificando-o (. : ;  ! ? ).
*/

import java.util.Scanner;

public class switch04 {

    public static void main(String[] args) {

        char digito;
        Scanner dado = new Scanner(System.in);
        System.out.println("Digite um caractere para identificação entre os caracteres de pontuação: ");
        digito = dado.next().charAt(0);
        // Verificar se o caractere é um sinal de pontuação
        switch (digito) {
            case '.':
                System.out.println("Você digitou um ponto final.\n");
                break;
            case ':':
                System.out.println("Você digitou dois pontos.\n");
                break;
            case ';':
                System.out.println("Você digitou um ponto e vírgula.\n");
                break;
            case '!':
                System.out.println("Você digitou um ponto de exclamação.\n");
                break;
            case '?':
                System.out.println("Você digitou um ponto de interrogação.\n");
                break;
            default:
                System.out.println("O caractere digitado não é um sinal de pontuação reconhecido.\n");
        }

    }
}