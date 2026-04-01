void EscolhePalavra(char palavra[]);
char RecebeLetra();
void AtualizaPalavra(char p0[], char p[], char letra);

// Definindo um estrutura de conjunto para usar um pacote de dados
struct GameInfo {
    char p0[20];
    char p1[20];
    int cont;
};
// Utilizando a estrutura na função nova 'PrepararGame';
struct GameInfo PrepararGame();
