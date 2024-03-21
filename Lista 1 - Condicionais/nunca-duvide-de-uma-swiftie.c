// https://www.thehuxley.com/problem/4413

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char fioA, fioB, fioC, fioD, fioE, fioF;
    int fioVermelho = 0, fioVerde = 0, fioAmarelo = 0;
    int fioDesconectado = 0;

    scanf(" %c %c %c %c %c %c", &fioA, &fioB, &fioC, &fioD, &fioE, &fioF);
    
    if(fioA == 'x'){
        fioDesconectado++;
    }
    
    if(fioB == 'x'){
        fioDesconectado++;
    }
    
    if(fioC == 'x'){
        fioDesconectado++;
    }
        
    if(fioD == 'x'){
        fioDesconectado++;
    }
        
    if(fioE == 'x'){
        fioDesconectado++;
    }
    
    if(fioF == 'x'){
        fioDesconectado++;
    }
    
    
    
    if(fioA == 'r'){
        fioVermelho++;
    }
    
    if(fioB == 'r'){
        fioVermelho++;
    }
    
    if(fioC == 'r'){
        fioVermelho++;
    }
    
    if(fioD == 'r'){
        fioVermelho++;
    }
    
    if(fioE == 'r'){
        fioVermelho++;
    }
    
    if(fioF == 'r'){
        fioVermelho++;
    }
    
    
    if(fioA == 'y'){
        fioAmarelo++;
    }
    
    if(fioB == 'y'){
        fioAmarelo++;
    }
    
    if(fioC == 'y'){
        fioAmarelo++;
    }
    
    if(fioD == 'y'){
        fioAmarelo++;
    }
    
    if(fioE == 'y'){
        fioAmarelo++;
    }
    
    if(fioF == 'y'){
        fioAmarelo++;
    }
    
    
    
    if(fioA == 'g'){
        fioVerde++;
    }
    
    if(fioB == 'g'){
        fioVerde++;
    }
    
    if(fioC == 'g'){
        fioVerde++;
    }
    
    if(fioD == 'g'){
        fioVerde++;
    }
    
    if(fioE == 'g'){
        fioVerde++;
    }
    
    if(fioF == 'g'){
        fioVerde++;
    }
    
    
    
    if(fioDesconectado == 2){
        if(fioVermelho == 0){
            if(fioA == 'x' && fioB == 'x'){
                printf("corta d");
            } else if(fioA == 'x' && fioC == 'x'){
                printf("corta d");
            } else if(fioA == 'x' && fioD == 'x'){
                printf("corta c");
            } else if(fioA == 'x' && fioE == 'x'){
                printf("corta c");
            } else if(fioA == 'x' && fioF == 'x'){
                printf("corta c");
            }  else if(fioB == 'x' && fioC == 'x'){
                printf("corta d");
            }  else if(fioB == 'x' && fioD == 'x'){
                printf("corta c");
            }  else if(fioB == 'x' && fioE == 'x'){
                printf("corta c");
            }  else if(fioB == 'x' && fioF == 'x'){
                printf("corta c");
            }   else if(fioC == 'x' && fioD == 'x'){
                printf("corta b");
            }    else if(fioC == 'x' && fioE == 'x'){
                printf("corta b");
            }    else if(fioC == 'x' && fioF == 'x'){
                printf("corta b");
            }    else if(fioD == 'x' && fioE == 'x'){
                printf("corta b");
            }    else if(fioD == 'x' && fioF == 'x'){
                printf("corta b");
            }  else if(fioE == 'x' && fioF == 'x'){
                printf("corta b");
            }    
        } else if(fioVermelho > 0){
            if(fioA == 'x' && fioB == 'x' && fioF == 'b'){
                printf("corta f");
            } else if(fioA == 'x' && fioC == 'x' && fioF == 'b'){
                printf("corta f");
            } else if(fioA == 'x' && fioD == 'x' && fioF == 'b'){
                printf("corta f");
            } else if(fioA == 'x' && fioE == 'x' && fioF == 'b'){
                printf("corta f");
            } else if(fioA == 'x' && fioF == 'x' && fioE == 'b'){
                printf("corta e");
            } else if(fioB == 'x' && fioC == 'x' && fioF == 'b'){
                printf("corta f");
            } else if(fioB == 'x' && fioD == 'x' && fioF == 'b'){
                printf("corta f");
            } else if(fioB == 'x' && fioE == 'x' && fioF == 'b'){
                printf("corta f");
            } else if(fioB == 'x' && fioF== 'x' && fioE == 'b'){
                printf("corta e");
            } else if(fioC == 'x' && fioD == 'x' && fioF == 'b'){
                printf("corta f");
            } else if(fioC == 'x' && fioE == 'x' && fioF == 'b'){
                printf("corta f");
            } else if(fioC == 'x' && fioF == 'x' && fioE == 'b'){
                printf("corta e");
            } else if(fioD == 'x' && fioE == 'x' && fioF == 'b'){
                printf("corta f");
            } else if(fioD == 'x' && fioF == 'x' && fioE == 'b'){
                printf("corta e");
            } else if(fioE == 'x' && fioF == 'x' && fioD == 'b'){
                printf("corta d");
            } else {
                if(fioA == 'x' && fioB == 'x'){
                    printf("corta c");
                } else if(fioA == 'x' && fioC == 'x'){
                printf("corta b");
                } else if(fioA == 'x' && fioD == 'x'){
                printf("corta b");
                } else if(fioA == 'x' && fioE == 'x'){
                printf("corta b");
                } else if(fioA == 'x' && fioF == 'x'){
                printf("corta b");
                }  else if(fioB == 'x' && fioC == 'x'){
                printf("corta a");
                }  else if(fioB == 'x' && fioD == 'x'){
                printf("corta a");
                }  else if(fioB == 'x' && fioE == 'x'){
                printf("corta a");
                }  else if(fioB == 'x' && fioF == 'x'){
                printf("corta a");
                }   else if(fioC == 'x' && fioD == 'x'){
                printf("corta a");
                }    else if(fioC == 'x' && fioE == 'x'){
                printf("corta a");
                }    else if(fioC == 'x' && fioF == 'x'){
                printf("corta a");
                }    else if(fioD == 'x' && fioE == 'x'){
                printf("corta a");    
                }    else if(fioD == 'x' && fioF == 'x'){
                printf("corta a");
                }  else if(fioE == 'x' && fioF == 'x'){
                printf("corta a");
                }    
            }
        }
    }
   
    if(fioDesconectado == 1){
        if(fioAmarelo >= 2){
            if(fioA == 'x' && fioB == 'y' && fioC == 'y'){
                printf("corta b");
            } else if(fioB == 'x' && fioA == 'y' && fioC == 'y'){
                printf("corta a");
            } else if(fioC == 'x' && fioA == 'y' && fioB == 'y'){
                printf("corta a");
            } else if(fioD == 'x' && fioA == 'y' && fioB == 'y'){
                printf("corta a");
            } else if(fioE == 'x' && fioA == 'y' && fioB == 'y'){
                printf("corta a");
            } else if(fioF == 'x' && fioA == 'y' && fioB == 'y'){
                printf("corta a");
            }
        }    
    }
    
    if(fioDesconectado == 1 && fioAmarelo != 2){
        if(fioA == 'x'){
            printf("corta c");
        } else if(fioB == 'x'){
            printf("corta c");
        } else if(fioC == 'x'){
            printf("corta b");
        } else if(fioD == 'x'){
            printf("corta b");
        } else if(fioE == 'x'){
            printf("corta b");
        } else if(fioF == 'x'){
            printf("corta b");
        }
    }
    
    if(fioDesconectado == 0){
        if(fioVerde == 1){
            if(fioA == 'g'){
                printf("corta a");
            } else if(fioB == 'g'){
                printf("corta b");
            } else if(fioC == 'g'){
                printf("corta c");
            } else if(fioD == 'g'){
                printf("corta d");
            } else if(fioE == 'g'){
                printf("corta e");
            } else if(fioF == 'g'){
                printf("corta f");
            }
        } else if(fioDesconectado == 0 && fioVerde !=1){
            printf("corta e");
        }
    }
    
	return 0;
}