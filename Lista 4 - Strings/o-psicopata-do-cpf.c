// https://www.thehuxley.3com/problem/4197

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char nomes[n][11];
    char cpfs[n][12];

    for (int i = 0; i < n; i++) {
        scanf("%s %s", nomes[i], cpfs[i]);
    }

    // Ordena os nomes em ordem alfab�tica juntamente com seus CPFs correspondentes
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(nomes[i], nomes[j]) > 0) {
                char temp[11];
                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);

                strcpy(temp, cpfs[i]);
                strcpy(cpfs[i], cpfs[j]);
                strcpy(cpfs[j], temp);
            }
        }
    }

    // Gera senhas e imprime
    for (int i = 0; i < n; i++) {
        int tamanho = strlen(nomes[i]);
        char senha[15];

        for (int j = 0; j < tamanho; j++) {
            int deslocamento = cpfs[i][j] - '0';
            char caractere = nomes[i][j];

            if ((caractere >= 'a' && caractere <= 'z') || (caractere >= '�' && caractere <= '�')) {
                char novoCaractere = (char)(((caractere - 'a' + deslocamento) % 26 + 26) % 26 + 'a');
                senha[j] = novoCaractere;
            } else if ((caractere >= 'A' && caractere <= 'Z') || (caractere >= '�' && caractere <= '�')) {
                char novoCaractere = (char)(((caractere - 'A' + deslocamento) % 26 + 26) % 26 + 'A');
                senha[j] = novoCaractere;
            } else {
                senha[j] = caractere;
            }
        }

        senha[tamanho] = '\0';

        strcat(senha, &cpfs[i][9]); // Anexa os dois �ltimos d�gitos do CPF

        printf("%s %s\n", nomes[i], senha);
    }

    return 0;
}
