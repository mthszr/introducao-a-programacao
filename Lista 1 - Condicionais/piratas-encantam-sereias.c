// https://www.thehuxley.com/problem/4028

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int numero;
     int tonica, terca, quinta;
     scanf(" %d", &numero);
     
     tonica = numero / 100;
     
     if(tonica > 6){
         tonica = tonica % 7;
     }
     
     terca = numero / 10;
     
     if(terca > 6){
         terca = terca % 7;
     }
     
     quinta = numero % 7;
     
     if(tonica == 0 && terca == 2 && quinta == 4){
         printf("Acorde do satisfaz.");
     } else if(tonica == 1 && terca == 3 && quinta == 5){
         printf("Acorde re satisfaz.");
     } else if(tonica == 2 && terca == 4 && quinta == 6){
         printf("Acorde mi satisfaz.");
     } else if(tonica == 3 && terca == 5 && quinta == 0){
         printf("Acorde fa satisfaz.");
     } else if(tonica == 4 && terca == 6 && quinta == 1){
         printf("Acorde sol satisfaz.");
     } else if(tonica == 5 && terca == 0 && quinta == 2){
         printf("Acorde la satisfaz.");
     } else if(tonica == 6 && terca == 1 && quinta == 3){
         printf("Acorde si satisfaz.");
     } else {
         printf("Combinacao nao satisfaz.");
     }
     
    
	return 0;
}