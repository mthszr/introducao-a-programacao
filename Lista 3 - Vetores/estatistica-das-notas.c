// https://www.thehuxley.3com/problem/4427

#include <stdio.h>

int main() {
    // Declara??o de vari?veis
    int N;
    scanf("%d", &N);

    // Inicializa o array que ir? guardar as notas dos alunos
    int notas[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &notas[i]);
    }

    // Calcula a m?dia
    double soma = 0.0;
    for (int i = 0; i < N; i++) {
        soma += notas[i];
    }
    double media = soma / N;

    // Ordena o array para calcular a mediana
    int temp;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (notas[i] > notas[j]) {
                temp = notas[i];
                notas[i] = notas[j];
                notas[j] = temp;
            }
        }
    }

    // Calcula a mediana
    double mediana;
    if (N % 2 == 0) {
        mediana = (notas[N / 2 - 1] + notas[N / 2]) / 2.0;
    } else {
        mediana = notas[N / 2];
    }

    // Calcula a moda
    int frequencias[11] = {0}; // Inicializa o array de frequ?ncias
    int maxFrequencia = 0; // Registra a maior quantidade de vezes que uma nota apareceu

    for (int i = 0; i < N; i++) {
        frequencias[notas[i]]++;
        if (frequencias[notas[i]] > maxFrequencia) {
            maxFrequencia = frequencias[notas[i]];
        }
    }

    // Verifica se h? mais de uma moda
    int contFrequencias = 0;
    for (int i = 0; i <= 10; i++) {
        if (frequencias[i] == maxFrequencia) {
            contFrequencias++;
        }
    }

    // Exibe os resultados
    printf("Media: %.2f\n", media);
    printf("Mediana: %.2f\n", mediana);

    if (contFrequencias > 1) {
        printf("Nao tem moda\n");
    } else {
        for (int i = 0; i <= 10; i++) {
            if (frequencias[i] == maxFrequencia) {
                printf("Moda: %.2f\n", (float)i);
            }
        }
    }

    return 0;
}
