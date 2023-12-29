//estrutura
//funcoes
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

struct ponto{
    float x;
    float y;
};

Ponto * cadastra_ponto(float x, float y){
    Ponto *p = (Ponto*)malloc(sizeof(Ponto));
    p->x = x;
    p->y = y;
    return p;
}

float calcula_distancia(Ponto *p1, Ponto *p2){
    float dx;
    float dy;
    float d;
    dx = p1->x - p2->x;
    dy = p1->y - p2-> y;
    d = sqrt(pow(dx,2) + pow(dy,2));
    return d;
}

void imprime_ponto(Ponto *p){
    printf("%.2f\t%.2f\n", p->x, p->y);
}
