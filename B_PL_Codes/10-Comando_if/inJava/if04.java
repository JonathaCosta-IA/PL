
/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java
Escreva um programa que leia 5 valores, encontre o maior,  o menor e a média utilizando números inteiros.

*/
import java.util.Scanner;

public class if04 {
    public static void main(String[] args) {
        // Variáveos locais
        int a, b, c, d, e;
        int maior, menor;
        float media;

        Scanner entrada_dado = new Scanner(System.in);
        // Leitura de dados
        System.out.println("Informe o primeira valor:");
        a = entrada_dado.nextInt();
        System.out.println("Informe o segundo valor:");
        b = entrada_dado.nextInt();
        System.out.println("Informe o terceiro valor:");
        c = entrada_dado.nextInt();
        System.out.println("Informe o quarto valor:");
        d = entrada_dado.nextInt();
        System.out.println("Informe o quinto valor:");
        e = entrada_dado.nextInt();

        // Declarando a média
        media = (a + b + c + d + e) / 5;
        // Teste e resultados
        maior = a;
        menor = a;

        if (b > maior) {
            maior = b;
        }
        if (c > maior) {
            maior = c;
        }
        if (d > maior) {
            maior = d;
        }
        if (e > maior) {
            maior = e;
        }

        if (b < menor) {
            menor = b;
        }
        if (c < menor) {
            menor = c;
        }
        if (d < menor) {
            menor = d;
        }
        if (e < menor) {
            menor = e;
        }
        entrada_dado.close();

        System.out.println("\n\n");
        System.out.println("O maior valor é " + maior + ".");
        System.out.println("O menor valor é " + menor + ".");
        System.out.println("O valor médio é " + media + ".");

    }
}
