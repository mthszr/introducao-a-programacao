// https://www.thehuxley.com/problem/4154

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int adultos, criancas, pessoasMesa;
    scanf("%d %d %d", &adultos, &criancas, &pessoasMesa);

    int mesaAdulto = adultos / pessoasMesa;
    int mesaCrianca = criancas / pessoasMesa;
    int restoAdulto = adultos % pessoasMesa;
    int restoCrianca = criancas % pessoasMesa;
    int mesaMista = 0, mesaAdultoUm = 0, mesaCriancaUm = 0;
    
    if(restoAdulto != 0 || restoCrianca != 0){
        if (restoAdulto + restoCrianca == pessoasMesa) {
            mesaMista++;
        } else if (restoAdulto % 2 == 0 && restoCrianca % 2 == 0 && restoAdulto !=0 && restoCrianca != 0) {
            if(restoAdulto + restoCrianca > pessoasMesa){
                mesaMista = mesaMista + 2;
            } else {
                mesaMista++;
            }
        
        } else {
    
            if(restoAdulto < 4 && restoAdulto != 0){
                mesaAdultoUm = restoAdulto;
                mesaAdulto = mesaAdulto - restoAdulto;
            } else if(restoAdulto >= 4){
                mesaAdulto++;
            } if(restoCrianca < 4 && restoCrianca != 0){
                mesaCriancaUm = restoCrianca;
                mesaCrianca = mesaCrianca - restoCrianca;
            } else if(restoCrianca >= 4){
                mesaCrianca++;
            }
        }
    }
    
    int precoAdulto = mesaAdulto * 3 * pessoasMesa;
    int precoAdultoUm = mesaAdultoUm * 4 * (pessoasMesa + 1);
    int precoCrianca = mesaCrianca * 2 * pessoasMesa;
    int precoCriancaUm = mesaCriancaUm * 3 * (pessoasMesa + 1);
    int precoMista = mesaMista * 2 * pessoasMesa;

    if(mesaAdulto > 0){
        printf("%d mesas com adultos: R$%d\n", mesaAdulto, precoAdulto);
    }
    
    if(mesaAdultoUm > 0){
        printf("%d mesas com adultos+1: R$%d\n", mesaAdultoUm, precoAdultoUm);
    }
        
    if(mesaCrianca > 0){
        printf("%d mesas com criancas: R$%d\n", mesaCrianca, precoCrianca);
    }
    
    if(mesaCriancaUm > 0){
        printf("%d mesas com criancas+1: R$%d\n", mesaCriancaUm, precoCriancaUm);
    }

    if(mesaMista > 0) {
        printf("%d mesas mistas: R$%d\n", mesaMista, precoMista);
    }
    
	return 0;
}