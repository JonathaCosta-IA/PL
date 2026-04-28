
/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java
Escreva um programa que utilize o operador ternário para verificar se um número é positivo, negativo ou zero. O programa deve imprimir a mensagem correspondente:
a) Se o número for positivo, deve imprimir ``Número positivo''.
b) Se o número for negativo, deve imprimir ``Número negativo''.
c) Se o número for zero, deve imprimir ``Número zero''
*/
import java.util.Scanner;

public class TernarioPonteiro_01 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num;
        System.out.print("Digite um número: ");
        num = sc.nextInt();

        System.out.println(
                (num > 0) ? "Número positivo" : (num < 0) ? "Número negativo" : "Número zero");

        sc.close();
    }
}