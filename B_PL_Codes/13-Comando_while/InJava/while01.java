/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java
Escreva um programa que mostre todos os números ímpares de 1 até 100 utilizando o comando while.
*/

public class while01 {

    public static void main(String[] args) {
        int numero = 1;
        // Enquanto o número for menor ou igual a 100, o laço continua
        while (numero <= 100) {
            // Verifica se o número é ímpar
            if (numero % 2 != 0) {
                System.out.printf("%d\n", numero);
            }
            numero++; // Incrementa o número
        }
    }
}
