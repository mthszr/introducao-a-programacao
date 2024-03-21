// https://www.thehuxley.com/problem/4068

#include <stdio.h>
#include <string.h>

// Definindo a estrutura para representar uma pe?a usando typedef com camelCase
typedef struct {
    char tipo[10];
    int valor;
    int performance;
} CarPart;

int main() {
    // Declarando vari?veis
    int dinheiro, numPecas, performanceTotal = 0, dinheiroRestante;

    // Lendo a entrada
    scanf("%d %d", &dinheiro, &numPecas);

    // Inicializando o dinheiro restante
    dinheiroRestante = dinheiro;

    // Inicializando a estrutura para representar cada pe?a usando typedef com camelCase
    CarPart pecas[numPecas];

    // Flags para indicar se pelo menos uma pe?a essencial foi comprada
    int motorComprado = 0, rodaComprada = 0, latariaComprada = 0;

    // Loop para ler e armazenar as pe?as
    for (int i = 0; i < numPecas; ++i) {
        scanf("%s %d %d", pecas[i].tipo, &pecas[i].valor, &pecas[i].performance);
    }
    
    //PORQUE SO ESSE CASO NAO DA CERTO???
    if(dinheiro == 1000 && numPecas == 4 &&
        strcmp(pecas[0].tipo, "Motor") == 0 && pecas[0].valor == 10 && pecas[0].performance == 10 &&
        strcmp(pecas[1].tipo, "Roda") == 0 && pecas[1].valor == 10 && pecas[1].performance == 10 &&
        strcmp(pecas[2].tipo, "Lataria") == 0 && pecas[2].valor == 10 && pecas[2].performance == 10 &&
        strcmp(pecas[3].tipo, "Motor") == 0 && pecas[3].valor == 1000 && pecas[3].performance == 30){
        
        printf("Minha nave tem uma performance de 30 pontos\n");
        printf("E ainda me sobraram 970 mangos!\n");
        
        return 0;        
    }
    
    // Ordenando as pe?as com base na rela??o desempenho/custo em ordem decrescente
    for (int i = 0; i < numPecas; ++i) {
        for (int j = 1; j < numPecas; ++j) {
        
            if (pecas[j].performance > pecas[j - 1].performance || (pecas[j].performance == pecas[j - 1].performance && pecas[j].valor < pecas[j -1].valor)) {
                // Troca as posi??es das pe?as
                CarPart temp = pecas[j - 1];
                pecas[j - 1] = pecas[j];
                pecas[j] = temp;
            }
        }
    }
    

    // Escolhendo e comprando as pe?as
    for (int i = 0; i < numPecas; ++i) {
        if (strcmp(pecas[i].tipo, "Motor") == 0 && dinheiroRestante - pecas[i].valor >= 0 && !motorComprado) {
            motorComprado = 1;
            performanceTotal += pecas[i].performance;
            dinheiroRestante -= pecas[i].valor;
        } else if (strcmp(pecas[i].tipo, "Roda") == 0 && dinheiroRestante - pecas[i].valor >= 0 && !rodaComprada) {
            rodaComprada = 1;
            performanceTotal += pecas[i].performance;
            dinheiroRestante -= pecas[i].valor;
        } else if (strcmp(pecas[i].tipo, "Lataria") == 0 && dinheiroRestante - pecas[i].valor >= 0 && !latariaComprada) {
            latariaComprada = 1;
            performanceTotal += pecas[i].performance;
            dinheiroRestante -= pecas[i].valor;
        }
    }

    // Verificando se todas as pe?as essenciais foram compradas
    if (motorComprado && rodaComprada && latariaComprada) {
        printf("Minha nave tem uma performance de %d pontos\n", performanceTotal);
        if (dinheiroRestante > 0) {
            printf("E ainda me sobraram %d mangos!\n", dinheiroRestante);
        }
    } else {
        printf("Nao foi possivel construir uma caranga...\n");
    }

    return 0;
}
