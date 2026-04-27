
public class Rotinas4SerieDados {

    // Função para calcular a variancia
    static float CalcularVariancia(int[] numeros) {
        float soma_var = 0;
        float media = Rotinas2SerieDados.CalcularMedia(numeros);
        for (int i = 0; i < numeros.length; i++) {
            soma_var = soma_var + (numeros[i] - media) * (numeros[i] - media);
        }
        return (float) (soma_var / numeros.length);
    }

    // Função para calcular o desvio padrao
    static float CalcularDesvioPadrao(int[] numeros) {
        float variancia = CalcularVariancia(numeros);
        float res = (float) Math.sqrt(variancia);
        return res;
    }

}