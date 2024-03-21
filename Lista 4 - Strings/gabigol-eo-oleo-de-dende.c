// https://www.thehuxley.3com/problem/4431

#include <stdio.h>
#include <string.h>

#define TAM_MAX 200001

int main() {
    char entradaUsuario[TAM_MAX];

    scanf("%s", entradaUsuario);

    while (strstr(entradaUsuario, "ABC") != NULL) {
        char *ocorrencia = strstr(entradaUsuario, "ABC");
        int indiceInicial = ocorrencia - entradaUsuario;
        int len = strlen(entradaUsuario + indiceInicial + 3) + 1;
        
        for (int i = indiceInicial; i <= indiceInicial + len; i++) {
            entradaUsuario[i] = entradaUsuario[i + 3];
        }
    }

    if (entradaUsuario[0] == '\0') {
        printf("string vazia\n");
    } else {
        printf("%s\n", entradaUsuario);
    }

    return 0;
}
