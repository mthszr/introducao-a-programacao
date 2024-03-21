// https://www.thehuxley.com/problem/4436

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 100

struct Produto {
    char nome[50];
    float valor_unitario;
    int quantidade;
};

// Function to compare two products for sorting
int compareProdutos(const void *a, const void *b) {
    return strcmp(((struct Produto *)a)->nome, ((struct Produto *)b)->nome);
}

int main() {
    struct Produto produtos[MAX_PRODUTOS];
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%s", produtos[i].nome);
        scanf("%f", &produtos[i].valor_unitario);
        scanf("%d", &produtos[i].quantidade);
    }

    // Sort the products alphabetically
    qsort(produtos, n, sizeof(struct Produto), compareProdutos);

    char texto1[100];
    char texto2[100];
    char data[50];
    char dinheiro[50];

    scanf(" %99[^\n]", texto1);
    scanf(" %99[^\n]", texto2);

    int dataIndex = 0;
    int dinheiroIndex = 0;

    for (int i = 28; i < strlen(texto1); i++) {
        data[dataIndex] = texto1[i];
        dataIndex++;
    }

    data[dataIndex] = '\0';

    for (int i = 6; i < strlen(texto2); i++) {
        dinheiro[dinheiroIndex] = texto2[i];
        dinheiroIndex++;
    }

    dinheiro[dinheiroIndex] = '\0';

    float dinheiroComoFloat = atof(dinheiro);

    printf("=============\n");
    printf("NF - 0123\n");
    printf("Data - %s\n", data);

    printf("=============\n");

    float total = 0;
    for (int i = 0; i< n; ++i) {
        struct Produto produto = produtos[i];
        float subtotal = produto.valor_unitario * produto.quantidade;
        total += subtotal;
        printf("%dx %s - R$%.2f\n", produto.quantidade, produto.nome, subtotal);
    }

    float troco = dinheiroComoFloat - total > 0 ? dinheiroComoFloat - total : 0;

    printf("\nValor Total - R$%.2f\n", total);
    printf("Pago - R$%s\n", dinheiro);
    printf("Troco - R$%.2f\n", troco);
    printf("=============");

    return 0;
}
