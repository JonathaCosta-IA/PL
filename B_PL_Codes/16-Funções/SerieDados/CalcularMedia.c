
// Função para calcular a média
float CalcularMedia( int numeros[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
        {soma += numeros[i];}
    return (float) soma / tamanho;
}
