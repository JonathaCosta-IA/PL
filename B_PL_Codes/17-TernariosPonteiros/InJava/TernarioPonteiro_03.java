/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java
Implemente um programa que utilize um ponteiro para armazenar e imprimir uma string. 
O programa deve armazenar a string ``Bem-vindo ao mundo java!'' 
em string e imprimi-la utilizando printf.
*/

public class TernarioPonteiro_03 {
    public static void main(String[] args) {
        String str = "Bem-vindo ao mundo Java!";
        System.out.println(str);
    }
}
// Note que:
// Em C: char *str é ponteiro para char
// Em Java: String é objeto imutável (sem ponteiros explícitos)
// Equivalência:
// char* => String | printf("%s\n", str)
// => System.out.println(str)