// https://www.thehuxley.com/problem/4415

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int x, y, z;
    int octante;
    
    scanf(" %d %d %d", &x, &y, &z);
    
    if(x > 0 && y > 0 && z > 0){
        if(x < y && x < z){
            octante = 2;
        } else if(y < x && y < z){
            octante = 4;
        } else if(z < x && z < y){
            octante = 5;
        }
    } else if(x < 0 && y > 0 && z > 0){
        if(-x < y && -x < z){
            octante = 1;
        } else if(y < x && y < z){
            octante = 3;
        } else if(z < x && z < y){
            octante = 6;
        }
    } else if(x < 0 && y < 0 && z > 0){
        if(-x < -y && -x < z){
            octante = 4;
        } else if(-y < -x && -y < z){
            octante = 2;
        } else if(z < -x && z < -y){
            octante = 7;
        }
    } else if(x > 0 && y < 0 && z > 0){
        if(x < -y && x < z){
            octante = 3;
        } else if(-y < x && -y < z){
            octante = 1;
        } else if(z < x && z < -y){
            octante = 8;
        }
    } if(x > 0 && y > 0 && z < 0){
        if(x < y && x < -z){
            octante = 2;
        } else if(y < x && y < -z){
            octante = 4;
        } else if(-z < x && -z < y){
            octante = 5;
        }
    } if(x < 0 && y > 0 && z < 0){
        if(-x < y && -x < -z){
            octante = 5;
        } else if(y < -x && y < -z){
            octante = 7;
        } else if(-z < -x && -z < y){
            octante = 2;
        }
    } if(x < 0 && y < 0 && z < 0){
        if(-x < -y && -x < -z){
            octante = 8;
        } else if(-y < -x && -y < -z){
            octante = 6;
        } else if(-z < -x && -z < -y){
            octante = 3;
        }
    } else if(x > 0 && y < 0 && z < 0) {
        if(x < -y && x < -z){
            octante = 7;
        } else if(-y < x && -y < z){
            octante = 5;
        } else if(-z < x && -z < -y){
            octante = 4;
        }
    } 
    
    printf(" %d", octante);
    
	return 0;
}