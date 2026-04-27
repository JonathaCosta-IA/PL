
import java.util.Scanner;

public class OrdenarMain {

    public static void main(String[] args) {

        int[] v = { 10, 8, 12, 3, 5 }; //
        int metodo;

        Scanner dados = new Scanner(System.in);

        do {

            RotinasOrdenar.cls(); // Método criado - equivalente ao system("clear") do <stdlib.h> no C;
            System.out.println(
                    "\nEscolha um método de ordenação do vetor:" +
                            "\n(1) - Método de permuta direta" +
                            "\n(2) - Método do bolha" +
                            "\nSua escolha: ");
            metodo = dados.nextInt();
            switch (metodo) {
                case 1:
                    System.out.printf("Vetor original:");
                    // Imprimir vetor original
                    RotinasOrdenar.ImprimirVetor(v);
                    // Organizar vetor
                    RotinasOrdenar.OrdenarVetorMet01(v);
                    // Imprimir vetor
                    System.out.printf("Vetor ordenado utilizando o método de permuta:");
                    RotinasOrdenar.ImprimirVetor(v);
                    break;

                case 2:
                    System.out.printf("Vetor original:");
                    RotinasOrdenar.ImprimirVetor(v);
                    RotinasOrdenar.OrdenarVetorMet02(v);
                    System.out.printf("Vetor ordenado utilizando o método do bolha:");
                    RotinasOrdenar.ImprimirVetor(v);
                    break;

                default:
                    System.out.printf("Método fora da lista de opções!");
                    break;
            }

            System.out.printf("\nDigite (0) para encerrar ou qualquer tecla para reiniciar.");
            metodo = dados.nextInt();
        } while (metodo != 0);

        System.out.printf("Código encerrado!");
        dados.close();
    }
}

// Determinar o tamanho do vetor
/*
 * Em Java, a convenção é colocar os colchetes junto ao tipo (int[])
 * em vez de junto ao nome da variável, como é comum em C.
 * Por isso:
 * int[] v= {1,2,3};
 * 
 * 
 */