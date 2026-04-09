
/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido utilizando Java
Escreva uma programa que leia uma nota e verifique se aprovado ou não,
considerando 7,0 como critério.
Versão 1: Código básico para passo-a-passo, sem blocos de código.
*/
import java.util.Scanner;

public class if01 {
    public static void main(String[] args) {
        float nota;
        // Leitura de daos
        Scanner entrada_dado = new Scanner(System.in);
        System.out.println("Informe uma nota:");
        nota = entrada_dado.nextFloat();

        // Teste e resultados
        if (nota >= 7.0) {
            System.out.println("Candidato aprovado!");
        } else {
            System.out.println("Candidato não aprovado!");
        }

        entrada_dado.close();
    }
}
