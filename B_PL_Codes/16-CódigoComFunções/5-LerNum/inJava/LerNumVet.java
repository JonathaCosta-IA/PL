/*
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em java: Ler 10 numeros
*/

import java.util.Scanner;

class LerNumVet {

    public static void main(String[] args) {
        int tam_vet = 10;
        int[] num = new int[tam_vet];

        carregarVetor(num, tam_vet);
    }

    // ********************* ROTINAS AUXILIARES
    static void carregarVetor(int[] num, int tam_vet) {
        Scanner dados = new Scanner(System.in);

        for (int i = 0; i < tam_vet; i++) {
            System.out.printf("Informe um número (%d / %d): ", i, tam_vet);
            num[i] = dados.nextInt();
        }
        dados.close();
    }
}

/*
 * Nota:
 * O método "main" deve ser declarado como public porque o java precisa
 * acessá-lo
 * externamente para iniciar o programa.
 * 
 * Já os métodos auxiliares não precisam ser "PUBLIC" quando são usados apenas
 * dentro da mesma classe; nesse caso, podem ser declarados apenas como
 * "static".
 * 
 * O uso de "public" nesses métodos é opcional e serve apenas para permitir
 * reutilização por outras classes.
 * 
 * Boa prática:
 * Utilizar sempre o public!
 * 
 */