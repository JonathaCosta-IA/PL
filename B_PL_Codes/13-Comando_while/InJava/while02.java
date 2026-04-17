/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java
Escreva um programa que leia um número e verifica se é um número primo, utilize o while.
*/

import java.util.Scanner;

public class while02 {

    public static void main(String[] args) {
        Scanner dados = new Scanner(System.in);

        // Inicializar i com 2, já que 1 não é divisor relevante
        int numero, i = 2;
        boolean eh_primo = true;
        // Solicitar ao usuário que insira um número
        System.out.printf("Digite um número: ");
        numero = dados.nextInt();

        // Números menores que 2 não são primos
        if (numero < 2) {
            eh_primo = false;
        }
        // Laço para verificar divisibilidade até a raiz quadrada do número
        while ((i * i <= numero) && (eh_primo)) {
            if (numero % i == 0) { // Se o número for divisível por i, não é primo
                eh_primo = false;
            }
            i++;
        }
        // Exibir o resultado
        if (eh_primo) {
            System.out.printf("%d é um número primo.\n", numero);
        } else {
            System.out.printf("%d não é um número primo.\n", numero);
        }
    dados.close();

    }
}
