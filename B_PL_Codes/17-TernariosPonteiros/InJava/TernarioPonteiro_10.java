/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java:
Utilize a diretiva #define para criar um tipo de dado float32, que seja equivalente a float. Em seguida, crie uma variável desse tipo e imprima seu valor.
*/

public class TernarioPonteiro_10 {
    public static void main(String[] args) {
        float num = 10.5f;
        System.out.printf("O valor de num é: %.2f%n", num);
    }
}
// Em C, #define FLOAT32 float cria um apelido textual pelo pré-processador.
// Em Java não existe #define; usa-se diretamente o tipo primitivo float.
// O sufixo 'f' é necessário para indicar literal float (senão é double).