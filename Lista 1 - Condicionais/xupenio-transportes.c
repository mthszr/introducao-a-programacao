// https://www.thehuxley.com/problem/4416

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int velMax = 0;
    int velMin = 0;
    float distancia;
    float tempoA, tempoB, tempoC;
    
    scanf("%i", &velMax);
    scanf(" %f", &distancia);
    scanf(" %f %f %f", &tempoA, &tempoB, &tempoC);
    
    velMin = velMax / 2;
    
    float velA = distancia / tempoA;
    float velB = distancia / tempoB;
    float velC = distancia / tempoC;
   
    
    if(velA >= velMin && velA <= velMax && velB >= velMin && velB <= velMax && velC >= velMin && velC <= velMax){
        if(velA > velB && velA > velC){
            if(velB > velC){
                printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", velA);
                printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", velB);
                printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", velC);
            } else if(velC > velB){
                printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", velA);
                printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", velC);
                printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", velB);
            }
        } else if(velB > velA && velB > velC) {
            if(velA > velC){
                printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", velB);
                printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", velA);
                printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", velC);
            } else if(velC > velA){
                printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", velB);
                printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", velC);
                printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", velA);
            }
        } else if(velC > velA && velC > velB){
            if(velA > velB){
                printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", velC);
                printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", velA);
                printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", velB);
            } else if(velB > velA){
                printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", velC);
                printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", velB);
                printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", velA);
            }
        }
    } else if(velA >= velMin && velA <= velMax && velB >= velMin && velB <= velMax){
        if(velA > velB){
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", velA);
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", velB);
        } else if(velB > velA){
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", velB);
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", velA);
        }
    } else if(velA >= velMin && velA <= velMax && velC >= velMin && velC <= velMax){
        if(velA > velC){
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", velA);
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", velC);
        } else if(velC > velA){
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", velC);
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", velA);
        }
    } else if(velB >= velMin && velB <= velMax && velC >= velMin && velC <= velMax){
        if(velB > velC){
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", velB);
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", velC);
        } else if(velC > velB){
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", velC);
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", velB);
        }
    } else if(velA >= velMin && velA <= velMax){
        printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f", velA);
    } else if(velB >= velMin && velB <= velMin){
        printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f", velB);
    } else if(velC >= velMin && velC <= velMax){
        printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f", velC);
    } else if(velA >= velMin && velA <= velMax && velB >= velMin && velB <= velMax && velC >= velMin && velC <= velMax){
        if(velA == velB && velA == velC && velB == velC || velA > velB && velA > velC && velB == velC){
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", velA);
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", velB);
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", velC);
        } else if(velB > velA && velB > velC && velA == velC){
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", velB);
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", velA);
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", velC);
        } else if(velC > velA && velC > velB && velA == velB){
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", velC);
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", velB);
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", velA);
        }
    } else if(velA >= velMin && velA <= velMax && velB >= velMin && velB <= velMax){
        if(velA == velB){
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", velA);
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", velB);
        }
    } else if(velA >= velMin && velA <= velMax && velC >= velMin && velC <= velMax){
        if(velA == velC){
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", velA);
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", velC);
        }
    } else if(velB >= velMin && velB <= velMax && velC >= velMin && velC <= velMax){
        if(velB == velC){
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", velB);
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", velC);
        }
    } else {
        printf("Infelizmente Xupenio nao podera ir ao evento mais importante do ano");
    }
    
	return 0;
}