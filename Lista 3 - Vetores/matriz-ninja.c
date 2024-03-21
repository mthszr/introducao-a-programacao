// https://www.thehuxley.3com/problem/3763

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char direcao;
    int linhas, colunas;

    // Leitura da dire��o do corte
    scanf(" %c", &direcao);

    // Leitura das dimens�es da matriz
    scanf("%d %d", &linhas, &colunas);

    int matriz[50][50];

    // Leitura da matriz
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Realiza o corte e inverte a ordem dos n�meros na parte correspondente
    if (direcao == 'H') {
        // Inverter horizontalmente
        for (int i = linhas / 2; i < linhas; i++) {
            for (int j = 0; j < colunas / 2; j++) {
                int temp = matriz[i][j];
                matriz[i][j] = matriz[i][colunas - 1 - j];
                matriz[i][colunas - 1 - j] = temp;
            }
        }
    } else if (direcao == 'V') {
        // Inverter verticalmente
        for (int j = colunas / 2; j < colunas; j++) {
            for (int i = 0; i < linhas / 2; i++) {
                int temp = matriz[i][j];
                matriz[i][j] = matriz[linhas - 1 - i][j];
                matriz[linhas - 1 - i][j] = temp;
            }
        }
    }

    // Exibe a matriz originalmente como era antes do corte
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%02d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
