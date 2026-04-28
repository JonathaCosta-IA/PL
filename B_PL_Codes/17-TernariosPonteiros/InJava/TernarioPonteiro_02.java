/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java:
Utilize a diretiva \texttt{\#define} para definir uma constante para o valor de PI e calcule a área de um círculo de raio 5. A fórmula para calcular a área de um círculo é:
  A = \pi \times r^2
Onde \texttt{r} é o raio do círculo.*/

public class TernarioPonteiro_02 {
    public static void main(String[] args) {

        final int RAIO = 5;
        final double PI = 3.14159;   // Equivalente ao #define do C
        double area = PI * RAIO * RAIO;
        System.out.printf("A área do círculo é: %.2f%n", area);
    }
}