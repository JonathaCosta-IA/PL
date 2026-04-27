// Código de Rotinas Auxiliares em java

import java.util.Scanner;

public class RotinasAuxiliares {

    // Função para ler os números
    // static void LerNumeros(int[] numeros, int tam) // É desnecessário informar o
    // tamanho do vetor
    // pois a função "nome_do_vetor".lenght fazer isso no código em java.
    
    static void LerNumeros(int[] numeros) {
        Scanner dados = new Scanner(System.in);
        for (int i = 0; i < numeros.length; i++) {
            System.out.printf("Digite o número %d: ", i + 1);
            numeros[i] = dados.nextInt();
        }
        dados.close();
    }

    // Função para encontrar o maior número
    static int EncontrarMaior(int[] numeros) {
        int maior = numeros[0];
        for (int i = 1; i < numeros.length; i++) {
            if (numeros[i] > maior) {
                maior = numeros[i];
            }
        }
        return maior;
    }

    // Função para encontrar o menor número
    static int EncontrarMenor(int[] numeros) {
        int menor = numeros[0];
        for (int i = 1; i < numeros.length; i++) {
            if (numeros[i] < menor) {
                menor = numeros[i];
            }
        }
        return menor;
    }

    // Função para calcular a média
    static float CalcularMedia(int[] numeros) {
        int soma = 0;
        for (int i = 0; i < numeros.length; i++) {
            soma += numeros[i];
        }
        return (float) soma / numeros.length;
    }

}