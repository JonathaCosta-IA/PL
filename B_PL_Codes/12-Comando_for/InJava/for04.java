/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em Java
Escreva um programa em C que calcule o fatorial de um número, utilizando o for.
*/

import java.util.Scanner;

public class for04 {

    public static void main(String[] args) {

        Scanner dados = new Scanner(System.in);
        int numero, fatorial = 1;
        // Solicitar ao usuário para digitar um número
        System.out.printf("Digite um número inteiro positivo: ");
        numero = dados.nextInt();
        // Verificar se o número é válido (não-negativo)
        if (numero < 0) {
            System.out.printf("Fatorial não está definido para números negativos.\n");
        } else {
            // Calcular o fatorial usando um loop for
            for (int i = 1; i <= numero; i++) {
                fatorial *= i; // Multiplica o valor atual do fatorial pelo contador i
            }
            // Exibir o resultado
            System.out.printf("O fatorial de %d é: %d\n", numero, fatorial);
        }
        dados.close();
    }

}
