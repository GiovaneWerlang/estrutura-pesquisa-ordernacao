#include <stdio.h>
#include <stdlib.h>
#include "r3.h"

int main(void){
    R3 ** espaco = cria_r3(2);
    int i;
    int x , y , z;
    for(i=0;i<2;i++){
        printf("Informe as coordenadass x/y/z neste formato: ");
        scanf("%d/%d/%d", &x, &y, &z);
        popula_r3(espaco[i], x, y, z);
    }
    imprime_r3(espaco, 2);
    soma_r3(espaco, 0, 1);
    escalar_r3(espaco,0,1);
    vetorial_r3(espaco, 0 ,1);
    libera_r3(espaco, 2);



    return 0;
}
