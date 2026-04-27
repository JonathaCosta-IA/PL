
/* Código de Rotinas Auxiliares
Note que,em C, não é possível retornar diretamente um array (ou vetor) de uma função, pois arrays locais são alocados na
stack e são descartados quando a função termina.
Contudo, é possível:
 - Passar um ponteiro para o vetor como argumento para a função.
 - Alocar o vetor dinamicamente na heap usando malloc.
 - Ou apenas pre-definir o vetor no código main e atualizar(carregar) o vetor conforme solução abaixo:
*/

import java.util.Random;

public class Rotinas1SerieDados {

    static void CarregarVetor(int[] numeros) {
        Random rand = new Random();
        for (int i = 0; i < numeros.length; i++) {
            int k = rand.nextInt(100);
            // Alternativa mais próxima do int k = rand() % 99, em C:
            // int k = (int) (Math.random() * 99);
            numeros[i] = k;
        }
    }

    static void ExibirVetor(int[] numeros) {
        // Rotina utilizada para exibir um vetor
        System.out.printf(" {");
        for (int i = 0; i < numeros.length; i++) {

            if (i != numeros.length - 1)
                System.out.printf("%d,", numeros[i]);
            else
                System.out.printf("%d}", numeros[i]);
        }
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
}

/*
 * NOTA:
 * srand(time(NULL)) → não precisa em Java
 * new Random() já faz isso automaticamente
 */