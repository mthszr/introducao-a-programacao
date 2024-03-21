// https://www.thehuxley.com/problem/4424

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int r1, r2, r3, d1, d2, d3;

    scanf("%d %d %d %d %d %d", &r1, &d1, &r2, &d2, &r3, &d3);

    int N = d1 * d2 * d3;

    int N1 = N / d1;
    int N2 = N / d2;
    int N3 = N / d3;

    int y1 = 1;
    while ((N1 * y1) % d1 != 1) {
        y1++;
    }

    int y2 = 1;
    while ((N2 * y2) % d2 != 1) {
        y2++;
    }

    int y3 = 1;
    while ((N3 * y3) % d3 != 1) {
        y3++;
    }

    int resultado = (r1 * N1 * y1) + (r2 * N2 * y2) + (r3 * N3 * y3);
    resultado = resultado % N;

    printf("%d\n", resultado);

    return 0;
}
