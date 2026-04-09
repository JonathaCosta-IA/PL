
/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java:
Escreva um programa que leia duas notas, calcule a média e verifique se o aluno está aprovado ou não,
considerando como critério de aprovação média 7,0;
*/
import java.util.Scanner;

public class if02 {
    public static void main(String[] args) {
        float nota1;
        float nota2;
        // Leitura de daos
        Scanner entrada_dado = new Scanner(System.in);
        System.out.println("Informe a primeira nota:");
        nota1 = entrada_dado.nextFloat();
        System.out.println("Informe a segunda nota:");
        nota2 = entrada_dado.nextFloat();

        // Declarando a média
        float media = (nota1 + nota2) / 2;
        // Teste e resultados
        if (media >= 7.0) {
            System.out.println("\nCandidato aprovado!\n Média obtida: " + media);
        } else {
            System.out.println("\nCandidato não aprovado!\n Média obtida: " + media);
        }

        entrada_dado.close();
    }
}
