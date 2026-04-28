/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido:
Defina uma estrutura chamada Pessoa com os campos nome e idade. 
Crie um ponteiro para uma variável do tipo Pessoa, atribua valores a 
esses campos e imprima as informações.
*/

public class TernarioPonteiro_09 {

    static class Pessoa {
        String nome;
        int idade;

        Pessoa(String nome, int idade) {
            this.nome = nome;
            this.idade = idade;
        }
    }

    public static void main(String[] args) {
        Pessoa p1 = new Pessoa("Alice", 25);
        Pessoa ptr = p1; // referência para o mesmo objeto

        System.out.println("Nome: " + ptr.nome);
        System.out.println("Idade: " + ptr.idade);
    }
}

/*
 * Em C:
 * - struct define uma estrutura de dados
 * - ponteiros exigem desreferência: (*ptr).campo ou ptr->campo
 * 
 * Em Java:
 * - this é uma referência para o próprio objeto atual dentro de uma classe.
 * - não há ponteiros explícitos; variáveis de objetos já são referências
 * - portanto, não existe (*ptr).campo nem operador ->
 * - o acesso é direto: ptr.campo
 * 
 * Equivalência conceitual:
 * struct Pessoa *ptr = &p1; → Pessoa ptr = p1;
 * (*ptr).nome ou ptr->nome → ptr.nome
 * 
 * 
 ******************************************************************************
 * De modo enxuto (simplificado) o código ficaria:
 ******************************************************************************
 * public class Main {
 * static class Pessoa {
 * String nome;
 * int idade;
 * 
 * Pessoa(String n, int i) {
 * nome = n;
 * idade = i;
 * }
 * }
 * public static void main(String[] args) {
 * Pessoa p = new Pessoa("Alice", 25);
 * 
 * System.out.println("Nome: " + p.nome);
 * System.out.println("Idade: " + p.idade);
 * }
 * }
 * /*
 * Versão simplificada sem "this".
 * Como os nomes dos parâmetros (n, i) são diferentes dos atributos,
 * não há ambiguidade e o uso de "this" não é necessário.
 */
