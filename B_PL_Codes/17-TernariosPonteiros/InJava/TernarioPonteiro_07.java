/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java
Dado um array de inteiros, escreva um programa que utilize o operador ternário para verificar se o 
primeiro elemento é maior que 10. Se for, imprima "Maior que 10", caso contrário, imprima "Menor ou igual a 10".
*/

public class TernarioPonteiro_07 {

    public static void main(String[] args) {
        int[] arr = { 5, 12, 8 };

        // Usando o operador ternário para verificar o primeiro elemento
        System.out.println(
                (arr[0] > 10) ? "Maior que 10" : "Menor ou igual a 10");
    }
}

// Em Java, arrays usam a sintaxe int[] e o operador ternário deve retornar um
// valor.
// Por isso, a expressão é colocada dentro do System.out.println().