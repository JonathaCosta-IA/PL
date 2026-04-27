
public class RotinasOrdenar {

    static void cls() {
        System.out.print("\033[H\033[2J"); //
        System.out.flush();

    }

    static void ImprimirVetor(int[] v) {
        System.out.printf("{");
        for (int i = 0; i < v.length; i++) {
            System.out.printf(" %d", v[i]);
        }
        System.out.printf(" }\n");
    }

    static void OrdenarVetorMet01(int[] v) {
        int i, j;
        int n = v.length;
        for (i = 0; i < n - 1; i++) // Itera até n-1 vezes
            for (j = 0; j < n - i - 1; j++) // Compara elementos adjacentes
            {
                if (v[j + 1] < v[j]) {
                    int aux = v[j]; // Permuta
                    v[j] = v[j + 1];
                    v[j + 1] = aux;
                }
            }
    }

    static void OrdenarVetorMet02(int[] v) {
        int i, j;
        int n = v.length;
        for (i = 0; i < n - 1; i++) // Itera até n-1 vezes
            for (j = 0; j < n - i - 1; j++) // Compara elementos adjacentes
            {
                // XOR em Java
                if (v[j] > v[j + 1]) {
                    v[j] ^= v[j + 1];
                    v[j + 1] ^= v[j];
                    v[j] ^= v[j + 1];
                }

            }
    }
}

/*
 * PERMUTA UTILIZANDO O TERNÁRIO COM XOR em C
 * 
 * (v[j] ^= v[j + 1], v[j + 1] ^= v[j], v[j] ^= v[j + 1])
 * O Operador XOR (^=) realizar a troca sem usar uma variável auxiliar.
 * A lógica da troca com XOR é:
 * v[j] ^= v[j + 1]; // Sentença 01
 * v[j + 1] ^= v[j]; // Sentença 02
 * v[j] ^= v[j + 1]; // Igual a sentença 01
 * 
 * Esses passos garantem a troca dos valores entre v[j] e v[j+1]
 */