// https://www.thehuxley.3com/problem/4426

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int K;
    scanf("%d", &K);

    for (int k = 0; k < K; k++) {
        int N;
        scanf("%d", &N);

        int matriz[N][N];

        // Leitura da matriz
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }

        int soma = 0;

        // Calcula a soma da primeira linha
        for (int i = 0; i < N; i++)
            soma = soma + matriz[0][i];

        int ehQuadradoMagico = 1; // Assume que � um quadrado m�gico

        // Verifica a soma de cada linha
        for (int i = 1; i < N; i++) {
            int somaTemp = 0;
            for (int j = 0; j < N; j++)
                somaTemp = somaTemp + matriz[i][j];
            if (somaTemp != soma) {
                ehQuadradoMagico = 0; // N�o � um quadrado m�gico
                break;
            }
        }

        // Verifica a soma de cada coluna
        for (int i = 0; i < N; i++) {
            int somaTemp = 0;
            for (int j = 0; j < N; j++)
                somaTemp = somaTemp + matriz[j][i];
            if (somaTemp != soma) {
                ehQuadradoMagico = 0; // N�o � um quadrado m�gico
                break;
            }
        }

        // Verifica a soma da diagonal principal
        int somaTemp = 0;
        for (int i = 0; i < N; i++)
            somaTemp = somaTemp + matriz[i][i];
        if (somaTemp != soma)
            ehQuadradoMagico = 0; // N�o � um quadrado m�gico

        // Verifica a soma da outra diagonal
        somaTemp = 0;
        for (int i = 0; i < N; i++)
            somaTemp = somaTemp + matriz[i][N - i - 1];
        if (somaTemp != soma)
            ehQuadradoMagico = 0; // N�o � um quadrado m�gico

        // Imprime o resultado para a matriz atual
        if (ehQuadradoMagico)
            printf("Eh quadrado magico!!!\n");
        else
            printf("Nao eh!!!\n");
    }

    return 0;
}
