// https://www.thehuxley.com/problem/3687

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    double soma = 0.0;

    int i = 2; // Come�amos a busca pelos primos g�meos a partir do n�mero 2
    while (count < n) {
        int primo1 = 1;
        int primo2 = 1;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                primo1 = 0;
                break;
            }
        }

        for (int j = 2; j * j <= i + 2; j++) {
            if ((i + 2) % j == 0) {
                primo2 = 0;
                break;
            }
        }

        if (primo1 == 1 && primo2 == 1) {
            soma += 1.0 / i + 1.0 / (i + 2);
            count++;
        }
        i++;
    }

    printf("%.10lf\n", soma);

    return 0;
}