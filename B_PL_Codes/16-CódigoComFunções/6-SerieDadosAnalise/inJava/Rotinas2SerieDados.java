
public class Rotinas2SerieDados {

    // Função para encontrar o maior númerocom operador ternário
    static int EncontrarMaior(int[] numeros) {
        int maior = numeros[0];
        for (int i = 1; i < numeros.length; i++) {
            if (numeros[i] > maior)
                maior = numeros[i];
        }
        return maior;
    }

    static int EncontrarMenor(int[] numeros) {
        int menor = numeros[0];
        for (int i = 1; i < numeros.length; i++) {
            menor = (numeros[i] < menor) ? numeros[i] : menor;
        }
        return menor;
    }

    static float CalcularMedia(int[] numeros) {
        int soma = 0;
        for (int i = 0; i < numeros.length; i++) {
            soma += numeros[i];
        }
        return (float) soma / numeros.length;
    }

}