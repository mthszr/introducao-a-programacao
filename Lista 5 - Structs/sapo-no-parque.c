// https://www.thehuxley.com/problem/4435

#include <stdio.h>

typedef struct {
    char nome[30];
    int valoresDiversao[3];  // Valores de divers�o separados para t = 0, 1, 2
    int irritacao;
} Brinquedo;

int main() {
    Brinquedo brinquedos[3];
    int valoresDiversao[9];  // Array �nico para armazenar todos os valores de divers�o
    char simbolos[9] = {'a', 'a', 'a', 'b', 'b', 'b', 'c', 'c', 'c'};

    for (int i = 0; i < 3; ++i) {
        scanf(" %[^\n]s", brinquedos[i].nome);
        scanf("%d %d", &brinquedos[i].valoresDiversao[0], &brinquedos[i].irritacao);

        // Calcular e armazenar valores de divers�o para t = 1 e t = 2
        for (int t = 1; t <= 2; ++t) {
            brinquedos[i].valoresDiversao[t] = brinquedos[i].valoresDiversao[0] - (t * t) * brinquedos[i].irritacao;
        }

        // Copiar valores de divers�o para o array global
        for (int t = 0; t <= 2; ++t) {
            valoresDiversao[i * 3 + t] = brinquedos[i].valoresDiversao[t];
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 8; j++) {
            if (valoresDiversao[j] < valoresDiversao[j + 1]) {
                // Trocar os valores de divers�o
                int tempFun = valoresDiversao[j];
                valoresDiversao[j] = valoresDiversao[j + 1];
                valoresDiversao[j + 1] = tempFun;

                char tempLetra = simbolos[j];
                simbolos[j] = simbolos[j + 1];
                simbolos[j + 1] = tempLetra;
            }
        }
    }

    int contA = 0, contB = 0, contC = 0;

    for (int i = 0; i < 3; i++) {
        if (simbolos[i] == 'a') {
            contA++;
        } else if (simbolos[i] == 'b') {
            contB++;
        } else if (simbolos[i] == 'c') {
            contC++;
        }
    }

    printf("a maior diversao foi: %d\n", valoresDiversao[0] + valoresDiversao[1] + valoresDiversao[2]);
    printf("indo nos brinquedos: ");

    if (contA == 3 || contB == 3 || contC == 3) {
        if (contA == 3) {
            printf("%s 3 vezes", brinquedos[0].nome);
        } else if (contB == 3) {
            printf("%s 3 vezes", brinquedos[1].nome);
        } else if (contC == 3) {
            printf("%s 3 vezes", brinquedos[2].nome);
        }
    } else if (contA == 1 && contB == 1 && contC == 1) {
        printf("%s 1 vez, %s 1 vez, %s 1 vez", brinquedos[0].nome, brinquedos[1].nome, brinquedos[2].nome);
    } else if (contA == 2 && contB == 1) {
        printf("%s 2 vezes, %s 1 vez", brinquedos[0].nome, brinquedos[1].nome);
    } else if (contA == 2 && contC == 1) {
        printf("%s 2 vezes, %s 1 vez", brinquedos[0].nome, brinquedos[2].nome);
    } else if (contB == 2 && contA == 1) {
        printf("%s 2 vezes, %s 1 vez", brinquedos[1].nome, brinquedos[0].nome);
    } else if (contC == 2 && contA == 1) {
        printf("%s 2 vezes, %s 1 vez", brinquedos[2].nome, brinquedos[0].nome);
    } else if (contB == 2 && contC == 1) {
        printf("%s 2 vezes, %s 1 vez", brinquedos[1].nome, brinquedos[2].nome);
    } else if (contC == 2 && contB == 1) {
        printf("%s 2 vezes, %s 1 vez", brinquedos[2].nome, brinquedos[1].nome);
    }

    printf(".\n");

    return 0;
}
