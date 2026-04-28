/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java:
Escreva uma função que receba um ponteiro para um número inteiro e altere seu valor para 100. No programa principal, crie uma variável inteira, passe seu ponteiro para a função e imprima o valor alterado.
*/

public class TernarioPonteiro_06 {

    static int alterarValor(int p) {
        p = 100;
        return p;
    }

    public static void main(String[] args) {
        int num = 10;

        System.out.println("Antes: " + num);
        num = alterarValor(num);
        System.out.println("Depois: " + num);
    }
}

// Em C: o ponteiro (int *p) permite alterar a variável original.
// Em Java: não há ponteiros para tipos primitivos; a passagem é por valor.
// Solução: retornar o novo valor e reatribuir à variável.
