// https://www.thehuxley.com/problem/3913

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int soldadoA, tanqueA, aviaoA, lmA;
    int soldadoI, tanqueI, aviaoI, lmI;
    int soldadoR, tanqueR, aviaoR, lmR;
    int contadorA = 0, contadorI = 0, contadorIG = 0;

    scanf(" %d %d %d %d", &soldadoA, &tanqueA, &aviaoA, &lmA);
    scanf(" %d %d %d %d", &soldadoI, &tanqueI, &aviaoI, &lmI);
    scanf(" %d %d %d %d", &soldadoR, &tanqueR, &aviaoR, &lmR);

    soldadoI += soldadoR;
    tanqueI += tanqueR;
    aviaoI += aviaoR;
    lmI += lmR;

    if (soldadoA > soldadoI) {
        contadorA++;
    } else if(soldadoA < soldadoI){
        contadorI++;
    }else if(soldadoA == soldadoI){
        contadorIG++;
    } else if(tanqueA > tanqueI){
        contadorA++;
    }  else if(tanqueA < tanqueI){
        contadorI++;
    }else if(tanqueA == tanqueI){
        contadorIG++;    
    }  else if(aviaoA > aviaoI){
        contadorA++;
    }  else if(aviaoA < aviaoI){
        contadorI++;
    }else if(aviaoA == aviaoI){
        contadorIG++;
    } else if(lmA > lmI){
        contadorA++;
    }  else if(lmA < lmI){
        contadorI++;
    }else if(lmA == lmI){
        contadorIG++;
    }
    
    if(contadorIG >= 2){
        printf("Permanecer");
    } else if(contadorA > contadorI){
        printf("Avancar");
    } else if(contadorA == contadorI){
        printf("Permanecer");
    } else {
        printf("Recuar");
    }
    
	return 0;
}