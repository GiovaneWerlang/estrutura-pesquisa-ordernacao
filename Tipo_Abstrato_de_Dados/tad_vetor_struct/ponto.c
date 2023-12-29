#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

struct ponto{
    float x;
    float y;
};

Ponto ** aloca_vetor_pontos(int t){
    Ponto **p = (Ponto**)malloc(t * sizeof(Ponto*));
    int i;
    for(i=0; i<t; i++){
        p[i] = (Ponto*)malloc(sizeof(Ponto));
    }
    return p;
}

float calcula_distancia(Ponto **p, int a, int b){
    float dx, dy, d;
    dx = p[a]->x - p[b]->x;
    dy = p[a]->y - p[b]->y;
    d = sqrt((dx * dx) + (dy * dy));
    return d;
}

void imprime_vetor_pontos(Ponto **p, int t){
    int i;
    for(i=0;i<t;i++){
        printf("%.2f\t%.2f\n", p[i]->x, p[i]->y);
    }
}

Ponto ** cadastra_vetor_pontos(Ponto *p, float x, float y){
    p->x = x;
    p->y = y;
}

void libera_ponto(Ponto **p, int t){
    int i;
    for(i=0;i<t;i++){
        free(p[i]);
    }
    free(p);
}
