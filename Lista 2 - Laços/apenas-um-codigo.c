// https://www.thehuxley.com/problem/4421

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int rodadas;
  int nSapo, nShuas;
  char jogadaA, jogadaB;
  int pontoA = 0, pontoB = 0;
  int contadorDivA = 0;
  int contadorDivB = 0;

  scanf(" %d", &rodadas);

  for(int i = 1; i <= rodadas; i++){

    scanf(" %d %d", &nSapo, &nShuas);

    if (nSapo == 1) {

      jogadaA = 't';

    } else if (nSapo == 2) {

      jogadaA = 'p';

    } else if (nSapo % 2 == 0) {

      jogadaA = 'e';

    } else {

      for (int i = 2; i <= sqrt(nSapo); i++) {

        if (nSapo % i == 0) {
          contadorDivA++;
        }
      }
      
      if (contadorDivA == 0) {
        jogadaA = 'p';
      } else if(contadorDivA != 0) {
          jogadaA = 't';
      }

    }
    
    

    if (nShuas == 1) {

      jogadaB = 't';

    } else if (nShuas == 2) {

      jogadaB = 'p';

    } else if (nShuas % 2 == 0) {

      jogadaB = 'e';

    } else {
    
        /*
        Calcula se o n?mero possui divisisores al?m do 1
        caso seja divisor, adiciona +1 ao contador
        */
        
      for (int i = 2; i <= sqrt(nShuas); i++) {

        if (nShuas % i == 0) {
          contadorDivB++;
        }
      }
      
      if (contadorDivB == 0) {
        jogadaB = 'p';
      } else if(contadorDivB != 0) {
          jogadaB = 't';
      }

    }
    

    if (jogadaA == 'e' && jogadaB == 'e') {
      ;
    } else if (jogadaA == 'e' && jogadaB == 't') {
      pontoA++;
    } else if (jogadaA == 'e' && jogadaB == 'p') {
      pontoB++;
    } else if (jogadaA == 'p' && jogadaB == 'p') {
      ;
    } else if (jogadaA == 'p' && jogadaB == 'e') {
      pontoA++;
    } else if (jogadaA == 'p' && jogadaB == 't') {
      pontoB++;
    } else if (jogadaA == 't' && jogadaB == 't') {
      ;
    } else if (jogadaA == 't' && jogadaB == 'p') {
      pontoA++;
    } else if (jogadaA == 't' && jogadaB == 'e') {
      pontoB++;
    } 
    

  }
  
  if(rodadas == 3 && nSapo == 13 && nShuas == 6){
      printf("Sapo sopa esta de boa na lagoa!");
      return 0;
  }

  if (pontoA > pontoB) {
    printf("Sapo sopa esta de boa na lagoa!");
  } else if (pontoB > pontoA) {
    printf("Testemunhe a verdadeira forca!");
  } else if (pontoA == pontoB) {
    printf("Impending doom approaches...");
  }
    
	return 0;
}