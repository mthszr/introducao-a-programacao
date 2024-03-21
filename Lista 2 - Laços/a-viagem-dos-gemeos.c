// https://www.thehuxley.3com/problem/4422

#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int tamanho;
    scanf("%d", &tamanho);

    int precoTotal = 0;

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            printf(".");
        }
        for (int k = 0; k < i + 1; k++) {
            printf("&");
            precoTotal += 200;  // Cada "&" contribui com 200 para o pre�o total
            if (k < i) {
                printf("-");
                precoTotal += 50;  // Cada "-" contribui com 50 para o pre�o total
            }
        }
        for (int l = 0; l < tamanho - i - 1; l++) {
            printf(".");
        }
        printf("\n");
    }

    int tamanhoLinhaInferior = tamanho * 2 - 1;
    for (int i = 0; i < tamanhoLinhaInferior; i++) {
        printf("#");
        precoTotal += 100;  // Cada "#" contribui com 100 para o pre�o total
    }
    printf("\n");

    printf("O valor total foi: %d\n", precoTotal);

    return 0;
}
