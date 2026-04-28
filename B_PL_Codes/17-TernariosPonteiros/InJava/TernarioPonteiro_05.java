/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java:

Utilizando #define, crie uma macro chamada SQUARE(x) que calcula o quadrado de um número x. 
Use essa macro para calcular o quadrado de um número inserido pelo usuário e imprima o resultado.
*/

import java.util.Scanner;

public class TernarioPonteiro_05 {

    static int SQUARE(int x) {
        return x * x;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num;
        System.out.print("Digite um número: ");
        num = sc.nextInt();

        System.out.printf("O quadrado de %d é: %d%n", num, SQUARE(num));

        sc.close();
    }
}
// Em C, #define SQUARE(x) é uma macro do pré-processador (substituição
// textual).
// Em Java, o equivalente correto é um método estático tipado.
// Java evita efeitos colaterais comuns de macros e garante verificação de
// tipos.