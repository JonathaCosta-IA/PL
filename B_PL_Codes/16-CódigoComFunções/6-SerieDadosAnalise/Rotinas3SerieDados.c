

int CarregarPares(int numeros[], int pares[], int tamanho)
{
    // Rotina usada para preencher um vetor pre-definido no programa principal
    int cont = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            pares[cont] = numeros[i];
            cont++;
        }
    }
    return cont;
}

int CarregarPrimos(int numeros[], int primos[], int tamanho)
{
    // Rotina usada para preencher um vetor pre-definido no programa principal
    int cont = 0;
    for (int i = 0; i < tamanho; i++)
    {
        int primo = 1;
        if (numeros[i] <= 2)
        {
            primo = 0;
        }
        for (int j = 2; j <= numeros[i] / 2; j++)
        {
            if (numeros[i] % j == 0)
            {
                primo = 0;
                break;
            }
        }
        if (primo)
        {
            primos[cont] = numeros[i];
            cont++;
        }
    }
    return cont;
}
