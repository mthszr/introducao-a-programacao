// https://www.thehuxley.com/problem/4423

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
  int provas = 0;
  int nota, somaNota, contadorNotas = 0, mediaNotas;
  int qtdVinhos = 0;
  
  scanf(" %d", &provas);
  
  for(int i = 1; i <= provas; i++){
      do{
          scanf("%d", &nota);
          somaNota += nota;
          if(nota != 0){
              contadorNotas++;
          }
      }while(nota != 0);
      
      mediaNotas = somaNota / contadorNotas;
      qtdVinhos += mediaNotas;
      
      if(nota == 0){
          contadorNotas = 0;
          somaNota = 0;
          mediaNotas = 0;
      }
      
  }
  
  printf("Elas beberam %d ta�as!", qtdVinhos);
    
	return 0;
}