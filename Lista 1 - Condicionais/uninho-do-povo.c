// https://www.thehuxley.com/problem/4305

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    
       float horaS, horaC;
    char destino;
    int numeroPessoas, capPessoas;
    
    scanf(" %f %f", &horaS, &horaC);
    scanf(" %c", &destino);
    scanf(" %d", &numeroPessoas);
    
    if(horaS < 0 || horaS > 24 || horaC < 0 || horaC > 24 || numeroPessoas < 0 || horaS > horaC || destino != 'A' && destino != 'B'){
        printf("Entrada Invalida\n");
        return 0;
    }
    
    float tempo = horaC - horaS;
    
    if(tempo == 0){
        printf("Entrada Invalida\n");
        return 0;
    }
    
    if(1 * 1.5 <= tempo  && destino == 'A'){
        capPessoas = 9;
    } else if (0.75 * 1.5 <= tempo  && destino == 'B') {
        capPessoas = 9;
    } else {
        capPessoas = 5;
    }
    
    if(capPessoas - numeroPessoas < 0){
        printf("Infelizmente o uninho nao tanka, rodamos!\n");
    } else if(destino == 'A' && tempo < 1){
        printf("Infelizmente o uninho nao tanka, rodamos!\n");
    } else if(destino == 'B' && tempo < 0.75) {
        printf("Infelizmente o uninho nao tanka, rodamos!\n");
    } else if(destino == 'A' && tempo > 1){
            printf("O uninho faz a boa, obrigado querida mae line\n");
    } else if(destino == 'B' && tempo > 0.75){
            printf("O uninho faz a boa, obrigado querida mae line\n");
    } else {
            printf("Infelizmente o uninho nao tanka, rodamos!\n");
    }
    
	return 0;
}