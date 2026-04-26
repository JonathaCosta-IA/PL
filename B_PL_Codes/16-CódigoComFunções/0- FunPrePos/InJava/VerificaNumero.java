/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java -  Ler um número e informar se o número é maior, menor ou igual a 7,0.

Fluxo:
Declaração de função:
      Declarado no início para informar o compilador sobre a função antes do uso.
Definição completa:
    O corpo da função que realmente executa a lógica. Pode ser definido após a função main para manter o código mais organiza

Em Java, a ordem das funções não importa, o compilador vê a classe inteira de uma vez.
*/

import java.util.Scanner;

// Função auxiliar
public class VerificaNumero {

    /*********************************** */
    // Método equivalente à função void verificaNumero(float numero) do C.
    static void verificaNumero(float numero) {

        if (numero > 7.0) {
            System.out.println("O número é maior que 7,0.\n");
        } else if (numero < 7.0) {
            System.out.println("O número é menor que 7,0.\n");
        } else {
            System.out.println("O número é igual a 7,0.\n");
        }
    }

    // *******************************************/
    // Função principal
    public static void main(String[] args) {

        Scanner dados = new Scanner(System.in);
        System.out.print("Digite um número: ");
        float numero = dados.nextFloat();
        verificaNumero(numero); // Chama a função para verificar o número
        dados.close();
    }

}
