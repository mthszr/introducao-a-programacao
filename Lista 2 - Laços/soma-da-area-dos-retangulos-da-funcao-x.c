// https://www.thehuxley.com/problem/4161

#include <stdio.h>

int main() {
    float A, B, C;
    int N;

    scanf("%f %f %d", &A, &B, &N);

    scanf("%f", &C);

    float base = (B - A) / N;
    float area = 0.0;

    for (int i = 0; i < N; i++) {
        float x = A + (i + 1) * base;
        area += base * (x * x);
    }

    if (area > C) {
        printf("Maior\n");
    } else if (area < C) {
        printf("Menor\n");
    } else {
        printf("Igual\n");
    }

    return 0;
}
