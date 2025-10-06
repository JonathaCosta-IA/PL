
// Função para encontrar o maior númerocom operador ternário
int EncontrarMaior( int numeros[], int tamanho) {
    int maior = numeros[0];
    for (int i = 1; i < tamanho; i++)
        {maior = (numeros[i] > maior) ? numeros[i]:maior;}
    return maior;
}

int EncontrarMenor( int numeros[], int tamanho) {
    int menor = numeros[0];
    for (int i = 1; i < tamanho; i++)
        {menor = (numeros[i] < menor) ? numeros[i]:menor;}
    return menor;
}
