// https://www.thehuxley.com/problem/4146

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, A, B;
    scanf("%d", &N);
    scanf("%d %d", &A, &B);
    
    long long soma = ((long long)N * (N + 1)) / 2;
    long long somaMultiplosA= (A * ((long long)(N / A) * (N / A + 1))) / 2;
    long long somaMultiplosB = (B * ((long long)(N / B) * (N / B + 1))) / 2;
    long long somaMultiplosAB = (A * B * ((long long)(N / (A * B)) * (N / (A * B) + 1))) / 2;

    soma = soma - somaMultiplosA - somaMultiplosB + somaMultiplosAB;

    printf("%lld\n", soma);

    if (soma % 2 == 0) {
        printf("La ele!!!\n");
    } else {
        printf("Opa xupenio AULAS...\n");
    }

    return 0;
}