/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java:

Escreva um programa que, utilizando o operador ternário, decida qual das duas variáveis ponteiro ptr1 ou ptr2 deve ser utilizada com base no valor de um número inteiro a. Se a > 10, o programa deve usar ptr1, caso contrário, ptr2. Ambas as variáveis ponteiro devem apontar para um valor inteiro
*/

public class TernarioPonteiro_04 {
    public static void main(String[] args) {
        int a = 15;
        int num1 = 100, num2 = 200;

        int ptr1 = num1;
        int ptr2 = num2;

        int ptr = (a > 10) ? ptr1 : ptr2;

        System.out.println("O valor escolhido é: " + ptr);
    }
}
// Em C, ponteiros (int*) armazenam endereços de memória e *ptr acessa o valor.
// Java não possui ponteiros explícitos para tipos primitivos.
// O operador ternário escolhe diretamente o valor, não o endereço.
// Isto posto, simplifique o código acima!