/*Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java: sobre blocos de programação em arquivos diferentes.
*/

public class soma {

    public static void main(String[] args) {
        int res, v1 = 2, v2 = 3;
        res = calc.CalcSoma(v1, v2); // A chamada em Java é "nome do arquivo" + '.' + "método(função)"
        System.out.printf("A soma (%d + %d) vale %d.", v1, v2, res);
    }
}

// Não precisa # include "lib.h" (cabeçalho) — Java encontra a classe pelo nome