// https://www.thehuxley.3com/problem/3870

#include <stdio.h>
#include <string.h>

int main() {
    char conjuntoLetras[30];
    int numPalavras;
    scanf("%s %d", conjuntoLetras, &numPalavras);

    char palavras[numPalavras][30];
    for (int i = 0; i < numPalavras; ++i) {
        scanf("%s", palavras[i]);
    }

    int palavrasFormadas = 0;

    for (int i = 0; i < numPalavras; ++i) {
        char letrasDisponiveis[30];
        strcpy(letrasDisponiveis, conjuntoLetras);

        int palavraFormada = 1;  // Assume inicialmente que a palavra pode ser formada

        for (int j = 0; j < strlen(palavras[i]); ++j) {
            char letra = palavras[i][j];
            int k;

            for (k = 0; k < strlen(letrasDisponiveis); ++k) {
                if (letrasDisponiveis[k] == letra) {
                    letrasDisponiveis[k] = ' ';  // Substituir a letra encontrada por espa�o para indicar uso
                    break;
                }
            }

            if (k == strlen(letrasDisponiveis)) {
                palavraFormada = 0;  // A letra n�o foi encontrada, a palavra n�o pode ser formada
                break;
            }
        }

        palavrasFormadas += palavraFormada;
    }

    printf("E possivel formar %d palavras com esse conjunto\n", palavrasFormadas);

    return 0;
}
