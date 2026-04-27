/*
Lógica de programação
Prof. Jonatha Costa
Utilizando blocos e funções em arquivos distintos, faça um código, em java, que leia 10 numeros e informe:
o maior número, o menor número, os números pares, os números primos,
a média aritmética entre os 10 números, a variância e o desvio padrão.
*/

public class MainSerieDados {

    public static void main(String[] args) {

        // Definindo variáveis
        int tam_vet = 10; // Tamanho do vetor de numeros
        int[] numeros = new int[tam_vet];
        int max, min;
        float media, variancia, desvio_padrao;

        // Preencher os números no vetor

        Rotinas1SerieDados.CarregarVetor(numeros);
        // ExibirVetor(numeros, tam_vet);
        // Calculando o maior, o menor e a média
        max = Rotinas2SerieDados.EncontrarMaior(numeros);
        min = Rotinas2SerieDados.EncontrarMenor(numeros);
        media = Rotinas2SerieDados.CalcularMedia(numeros);

        // Carregar os pares no vetor e os primos
        int[] pares = Rotinas3SerieDados.CarregarPares(numeros);
        int[] primos = Rotinas3SerieDados.CarregarPrimos(numeros);

        // // Calculando a covariância e o desvio padrão
        variancia = Rotinas4SerieDados.CalcularVariancia(numeros);
        desvio_padrao = Rotinas4SerieDados.CalcularDesvioPadrao(numeros);

        // // Exibindo resultados
        System.out.printf("\nVetor de dados em análise:");
        Rotinas1SerieDados.ExibirVetor(numeros);
        Rotinas1SerieDados.OrdenarVetorMet01(numeros);
        System.out.printf("\nVetor reordenado:");
        Rotinas1SerieDados.ExibirVetor(numeros);
        System.out.printf("\nOs números pares são:");
        Rotinas1SerieDados.ExibirVetor(pares);
        System.out.printf("\nOs números primos são:");
        Rotinas1SerieDados.ExibirVetor(primos);
        System.out.printf("\nMaior número: %2d", max);
        System.out.printf("\nMenor número: %2d", min);
        System.out.printf("\nMédia aritmética: %.2f", media);
        System.out.printf("\nVariância: %.2f", variancia);
        System.out.printf("\nO desvio padrão: %.2f", desvio_padrao);
    }

}
/*
 * Note algumas mudanças de estratégia.
 * 
 * int[] pares = Rotinas3SerieDados.CarregarPares(numeros);
 * Vetor gerado apenas após a contagem do tamanho exato de elementos!
 */
