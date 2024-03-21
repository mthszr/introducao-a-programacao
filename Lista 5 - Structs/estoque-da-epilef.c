// https://www.thehuxley.com/problem/4434

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ESTOQUE 100

typedef struct {
    char nome[50];
    int quantidade;
    float preco;
    int linha;  // Adicionando a posi??o no estoque
    int coluna;
} Produto;

typedef struct {
    int ocupada;
    Produto produto;
} Posicao;

int main() {
    int tamanho;
    scanf("%d", &tamanho);

    Posicao estoque[MAX_ESTOQUE][MAX_ESTOQUE];
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            estoque[i][j].ocupada = 0;
        }
    }

    char operacao[7];
    while (1) {
        scanf("%s", operacao);

        if (strcmp(operacao, "CREATE") == 0) {
            
            int linha, coluna;
            scanf(" %d %d", &linha, &coluna);
            
            if (estoque[linha][coluna].ocupada == 0) {
            
                int quantidade;
                float preco;
                char nome[50];
                scanf("%s %d %f", nome, &quantidade, &preco);

                Produto novoProduto;
                strcpy(novoProduto.nome, nome);
                novoProduto.quantidade = quantidade;
                novoProduto.preco = preco;
                novoProduto.linha = linha;
                novoProduto.coluna = coluna;
                estoque[linha][coluna].produto = novoProduto;
                estoque[linha][coluna].ocupada = 1;
                printf("Produto adicionado no estoque!\n");
            } else {
                printf("ERRO: espaco ja ocupado\n");
            }
        } else if (strcmp(operacao, "READ") == 0) {
            char nome[50];
            scanf("%s", nome);

            int produtoEncontrado = 0;
            for (int i = 0; i < tamanho; ++i) {
                for (int j = 0; j < tamanho; ++j) {
                    if (estoque[i][j].ocupada == 1 && strcmp(estoque[i][j].produto.nome, nome) == 0) {
                        printf("LINHA: %d COLUNA: %d QTD: %d PRECO: %.2f\n",
                               estoque[i][j].produto.linha, estoque[i][j].produto.coluna,
                               estoque[i][j].produto.quantidade, estoque[i][j].produto.preco);
                        produtoEncontrado = 1;
                        break;
                    }
                }
                if (produtoEncontrado) {
                    break;
                }
            }
        } else if (strcmp(operacao, "UPDATE") == 0) {
            char nome[50];
            int quantidade;
            float preco;
            scanf("%s %d %f", nome, &quantidade, &preco);

            int produtoAtualizado = 0;
            for (int i = 0; i < tamanho; ++i) {
                for (int j = 0; j < tamanho; ++j) {
                    if (estoque[i][j].ocupada == 1 && strcmp(estoque[i][j].produto.nome, nome) == 0) {
                        estoque[i][j].produto.quantidade = quantidade;
                        estoque[i][j].produto.preco = preco;
                        printf("Produto atualizado!\n");
                        produtoAtualizado = 1;
                        break;
                    }
                }
                if (produtoAtualizado) {
                    break;
                }
            }

            if (!produtoAtualizado) {
                printf("Produto nao encontrado!\n");
            }
        } else if (strcmp(operacao, "DELETE") == 0) {
            char nome[50];
            scanf("%s", nome);

            int produtoRemovido = 0;
            for (int i = 0; i < tamanho; ++i) {
                for (int j = 0; j < tamanho; ++j) {
                    if (estoque[i][j].ocupada == 1 && strcmp(estoque[i][j].produto.nome, nome) == 0) {
                        estoque[i][j].ocupada = 0;
                        printf("Produto removido!\n");
                        produtoRemovido = 1;
                        break;
                    }
                }
                if (produtoRemovido) {
                    break;
                }
            }

            if (!produtoRemovido) {
                printf("Produto nao encontrado!\n");
            }
        } else if (strcmp(operacao, "PRINT") == 0) {
            for (int i = 0; i < tamanho; ++i) {
                for (int j = 0; j < tamanho; ++j) {
                    if (estoque[i][j].ocupada == 1) {
                        printf("LINHA: %d COLUNA: %d NOME: %s QTD: %d PRECO: %.2f\n",
                               estoque[i][j].produto.linha, estoque[i][j].produto.coluna,
                               estoque[i][j].produto.nome, estoque[i][j].produto.quantidade,
                               estoque[i][j].produto.preco);
                    }
                }
            }
        } else if (strcmp(operacao, "EXIT") == 0) {
            printf("Saindo...");
            return 0;
        }
    }

    return 0;
}