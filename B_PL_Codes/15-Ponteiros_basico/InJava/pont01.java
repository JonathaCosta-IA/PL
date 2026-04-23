/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido com ponteiros em Java
Escreva um código em C que preencha um vetor com 10 números e indique o maior número ao varrer o vetor preenchido.
*/

import java.util.Scanner;

public class pont01 {

    public static void main(String[] args) {
        Scanner dados = new Scanner(System.in);

        int[] v = new int[10];
        int maior;

        System.out.printf("Digite 10 números:\n");
        for (int i = 0; i < 10; i++) {
            v[i] = dados.nextInt();
        }

        maior = v[0];
        for (int i = 1; i < 10; i++) {
            if (v[i] > maior)
                maior = v[i];
        }

        System.out.printf("Maior número: %d\n", maior);
        dados.close();
    }

}

/*
 * NOTA:
 * Em java não há ponteiros explícitos como C.
 * Em C, um *p significa "p é um endereço de memória que aponta para um int".
 * Em Java, esse conceito não existe diretamente. Toda referência a objeto já
 * é implicitamente um ponteiro gerenciado pela Java Virtual Machine(JVM)(Máquina Virtual Java).
 * 
 * Perceba que:
 * (1)
 * Em C, p era um ponteiro que "caminhava" pelo array.
 * Em Java, arrays já sabem seu próprio tamanho e você acessa os elementos por
 * índice. Ponteiro navegável simplesmente não existe, então p não tem utilidade alguma.
 * 
 *  *
 * 
 */
