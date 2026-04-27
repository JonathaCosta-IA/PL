
public class Rotinas3SerieDados {

    static int[] CarregarPares(int numeros[]) {
        // 1. contar pares
        int cont = 0;
        for (int i = 0; i < numeros.length; i++) {
            if (numeros[i] % 2 == 0) {
                cont++;
            }
        }
        // 2. criar vetor com tamanho exato
        int[] pares = new int[cont];

        // 3. preencher vetor
        cont = 0;
        for (int i = 0; i < numeros.length; i++) {
            if (numeros[i] % 2 == 0) {
                pares[cont] = numeros[i];
                cont++;
            }
        }
        return pares;

    }

    static int[] CarregarPrimos(int[] numeros) {
        // Estratégia:
        // 1) contar os primos; 2) Criar um vetor de primos; 3) Carregar o vetor;

        // 1ª etapa — contar primos
        int cont = 0;
        for (int i = 0; i < numeros.length; i++) {
            boolean primo = true;
            if (numeros[i] < 2) {
                primo = false;
            }
            for (int j = 2; j <= numeros[i] / 2 && primo; j++) {
                if (numeros[i] % j == 0) {
                    primo = false;
                }
            }
            if (primo) {
                cont++;
            }
        }
        // 2ª etapa — alocar vetor com tamanho exato
        int[] primos = new int[cont];

        // 3ª etapa — preencher vetor
        cont = 0;
        for (int i = 0; i < numeros.length; i++) {
            boolean primo = true;
            if (numeros[i] < 2) {
                primo = false;
            }
            for (int j = 2; j <= numeros[i] / 2 && primo; j++) {
                if (numeros[i] % j == 0) {
                    primo = false;
                }
            }
            if (primo) {
                primos[cont] = numeros[i];
                cont++;
            }
        }
        return primos;
    }

}