// https://www.thehuxley.3com/problem/4430

#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_FRASES 20
#define MAX_TAMANHO 100

int main() {
    int n;
    scanf("%d", &n);

    char frases[MAX_FRASES][MAX_TAMANHO];
    char substrings[MAX_FRASES][MAX_TAMANHO];
    char resultado[MAX_FRASES * MAX_TAMANHO + 1];

    resultado[0] = '\0';

    // Funcao para verificar se um caractere eh uma vogal
    int eh_vogal(char c) {
        c = c & 0xDF;  // Converte para maiuscula sem usar ctype.h
        return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }

    // Leitura das frases
    for (int i = 0; i < n; i++) {
        scanf("%s", frases[i]);

        // Calcula o tamanho da substring
        int tamanho = (int)sqrt(strlen(frases[i]));

        // Encontra a primeira vogal na frase
        int index_vogal = 0;
        for (int j = 0; j < strlen(frases[i]); j++) {
            if (eh_vogal(frases[i][j])) {
                index_vogal = j;
                break;
            }
        }

        // Cria a substring com base na regra especificada
        substrings[i][0] = frases[i][index_vogal];
        for (int j = 1; j < tamanho; j++) {
            substrings[i][j] = frases[i][index_vogal + j];
        }
        substrings[i][tamanho] = '\0';
    }

    // Ordena as substrings lexicograficamente (bubble sort)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(substrings[i], substrings[j]) > 0) {
                char temp[MAX_TAMANHO];
                strcpy(temp, substrings[i]);
                strcpy(substrings[i], substrings[j]);
                strcpy(substrings[j], temp);
            }
        }
    }

    // Concatena as substrings
    for (int i = 0; i < n; i++) {
        strcat(resultado, substrings[i]);
    }

    // Imprime o resultado
    printf("%s\n", resultado);

    return 0;
}
