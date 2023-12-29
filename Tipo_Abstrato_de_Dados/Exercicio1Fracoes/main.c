#include <stdio.h>
#include <stdlib.h>
#include "fracoes.h"

int main(void){
    Fracao **f = cria_fracao(2);

    int i, x , y;
    for(i=0;i<2;i++){
        printf("Informe a fracao (x/y): ");
        scanf("%d / %d", &x, &y);
        cadastra_fracao(f[i], x , y);
    }
    imprime_fracao(f[0]);
    imprime_fracao(f[1]);
    soma_fracao(f, 0, 1);
    subtracao_fracao(f, 0 ,1);
    multiplica_fracao(f, 0 ,1);
    divide_fracao(f, 0 ,1);
    libera_fracao(f);



    libera_fracao(f);
    return 0;
}
