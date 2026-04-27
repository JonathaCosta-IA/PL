/*
Lógica de programação
Prof. Jonatha Costa
Utilizando blocos e funções em arquivos distintos, faça um código em java que:
Leia 10 numeros e informe o maior e o menor valor dentres os dez, e também a média aritmética.
*/

public class BasicOperMain {

    public static void main(String[] args) {

        int[] numeros = new int[10];
        int max, min;
        float media;
        // Ler os números
        RotinasAuxiliares.LerNumeros(numeros);
        // Calcular maior, menor e média
        max = RotinasAuxiliares.EncontrarMaior(numeros);
        min = RotinasAuxiliares.EncontrarMenor(numeros);
        media = RotinasAuxiliares.CalcularMedia(numeros);

        // Exibir os resultados
        System.out.printf("\n");
        System.out.printf("Maior número: %d\n", max);
        System.out.printf("Menor número: %d\n", min);
        System.out.printf("Média aritmética: %.2f\n", media);

    }
}
