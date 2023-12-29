#include <stdio.h>
#include "ponto.h"

int main(void){
    Ponto *p1, *p2;
    float distancia_p1_p2;
    p1 = cadastra_ponto(10, 20);
    p2 = cadastra_ponto(20,30);
    imprime_ponto(p1);
    imprime_ponto(p2);
    distancia_p1_p2 = calcula_distancia(p1,p2);
    printf("%.2f\n", distancia_p1_p2);

    return (0);
}
