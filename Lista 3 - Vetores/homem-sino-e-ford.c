// https://www.thehuxley.3com/problem/4428

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Declara��o e leitura de vari�veis
    int N, i, j;
    scanf("%d %d %d", &N, &i, &j);

    int matriz[N][N];

    // Leitura da matriz
    for (int a = 0; a < N; a++) {
        for (int b = 0; b < N; b++) {
            scanf("%d", &matriz[a][b]);
        }
    }

    // Fun��o para encontrar o caminho m�ximo a partir de uma posi��o
    int encontraCaminhoMaximo(int i, int j, int passos) {
        int dx[] = {0, 0, 1, -1}; // Deslocamento nas dire��es: cima, baixo, direita, esquerda
        int dy[] = {1, -1, 0, 0};
        int maxPassos = passos;

        for (int k = 0; k < 4; k++) {
            int ni = i + dx[k];
            int nj = j + dy[k];

            // Verifica se a posi��o � v�lida e se o pr�ximo passo � v�lido
            if (ni >= 0 && ni < N && nj >= 0 && nj < N && matriz[ni][nj] == matriz[i][j] + 1) {
                int resultado = encontraCaminhoMaximo(ni, nj, passos + 1);
                if (resultado > maxPassos) {
                    maxPassos = resultado;
                }
            }
        }

        return maxPassos;
    }

    // Encontra o caminho m�ximo a partir de cada posi��o
    int maxPassos = 0;
    for (int a = 0; a < N; a++) {
        for (int b = 0; b < N; b++) {
            int passos = encontraCaminhoMaximo(a, b, 1);
            if (passos > maxPassos) {
                maxPassos = passos;
            }
        }
    }

    // Imprime o resultado
    printf("Numero de passos do maior caminho: %d\n", maxPassos - 1);

    return 0;
}
