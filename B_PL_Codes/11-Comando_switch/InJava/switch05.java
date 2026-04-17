
/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em Java
Escreva um programa em C que receba o preço de um produto e o tipo de pagamento. Apresente o preço líquido com desconto de 10% para pagamento à vista, 5% para pagamento no cartão em 1 vez, e acréscimo de 10% se parcelado.
*/
import java.util.Scanner;

public class switch05 {

    public static void main(String[] args) {
        float preco, preco_final;
        int tipo_pagamento;

        // Solicitar ao usuário que insira o preço do produto
        System.out.println("Digite o preço do produto: ");
        Scanner dado = new Scanner(System.in);
        preco = dado.nextFloat();

        // Exibir as opções de pagamento
        System.out.println("Escolha o tipo de pagamento:\n" +
                "1 - À vista (10%% de desconto)\n" +
                "2 - Cartão em 1 vez (5%% de desconto)\n" +
                "3 - Parcelado (10%% de acréscimo)\n");
        // Receber a opção de pagamento escolhida
        System.out.println("Digite o número da opção de pagamento: ");
        tipo_pagamento = dado.nextInt();

        // Calcular o preço final com base na escolha do tipo de pagamento
        switch (tipo_pagamento) {
            case 1: // 10% de desconto
            {
                preco_final = preco * 0.90f;
                System.out.printf("\nPagamento à vista. Preço final: %.3f", preco_final);
                break;
            }
            case 2: // 5% de desconto
                preco_final = preco * 0.95f;
                System.out.printf("\nPagamento no cartão em 1 vez. Preço final: %.3f\n", preco_final);
                break;
            case 3: // 10% de acréscimo
                preco_final = preco * 1.10f;
                System.out.printf("\nPagamento parcelado. Preço final: %.3f\n", preco_final);
                break;
            default:
                System.out.printf("Opção de pagamento inválida.\n");
        }
        dado.close();
    }
}

/*
 * 
 * Nota1:
 * 
 * Em Java todo número decimal literal é double por padrão.
 * Por isso na expressão preco = preco * 0,9, tem-se:
 * float = float * double, resultando em erro.
 * 
 * Assim, faz-se necessária a conversão para todos de um mesmo tipo, como em:
 * preco = preco * 0,9f
 *
 * Nota2:
 * Em Java, pode-se utilizar
 * 
 * "System.out.printf("\nPagamento à vista. Preço final: %.2f", preco_final);"
 * ou
 * "System.out.printlm("\nPagamento à vista. Preço final: " + preco_final);"
 * 
 * A regra é:
 * se usar printf, não concatene. Use placeholders (%f, %d, %s).
 * se usar printlm, concatene as saídas com '+'.
 * 
 * Utilize System.out.println quando quiser apenas imprimir valores simples.
 * Utilize System.out.printf quando precisa formatar a saída.
 * 
 */