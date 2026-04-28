/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java:
Crie um programa que utilize ponteiros para manipular um array de inteiros. O programa deve imprimir os elementos do array, acessando-os através de ponteiros.
*/

public class TernarioPonteiro_08 {
    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 4, 5 };

        System.out.println("Elementos do array:");
        for (int i = 0; i < 5; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
// C usa ponteiros: ptr aponta para o primeiro elemento do array
// *(ptr + i) acessa o elemento por aritmética de ponteiros
// Java não possui ponteiros explícitos; usa indexação direta: arr[i]