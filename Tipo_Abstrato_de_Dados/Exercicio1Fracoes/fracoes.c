#include <stdio.h>
#include <stdlib.h>
#include "fracoes.h"

struct fracao{
    int numerador;
    int denominador;
};

Fracao ** cria_fracao(int t){
    Fracao **p = (int*)malloc(t * sizeof(Fracao*));
    int i;
    for(i=0;i<t;i++){
        p[i] = (Fracao*)malloc(sizeof(Fracao));
    }
    return p;
}

void cadastra_fracao(Fracao *f, int x, int y){
    f->numerador = x;
    f->denominador = y;
}

void libera_fracao(Fracao **f){
    int i;
    for(i=0;i<2;i++){
        free(f[i]);
    }
    free(f);
}

void soma_fracao(Fracao **f, int a, int b){
    int aux;
    if(f[a]->denominador == f[b]->denominador){
        printf("%d/%d\n", f[a]->numerador+f[b]->numerador, f[a]->denominador);
    }
    else{
        aux = f[a]->denominador * f[b]->denominador;
        printf("%d/%d\n", (aux / (f[a]->numerador * f[a]->denominador) + (f[b]->numerador * f[b]->denominador))/aux);
    }
}

void subtracao_fracao(Fracao **f, int a, int b){
    int aux;
    if(f[a]->denominador == f[b]->denominador){
        printf("%d/%d\n", f[a]->numerador - f[b]->numerador, f[a]->denominador);
    }
    else{
        aux = f[a]->denominador * f[b]->denominador;
        printf("%d/%d\n", (aux / (f[a]->numerador * f[a]->denominador) - (f[b]->numerador * f[b]->denominador))/aux);
    }
}

void multiplica_fracao(Fracao **f, int a, int b){
    printf("%d/%d\n", f[a]->numerador*f[b]->numerador, f[a]->denominador * f[b]->denominador);
}

void divide_fracao(Fracao **f, int a, int b){
    printf("%d/%d\n", f[a]->numerador * f[b]->denominador, f[a]->denominador * f[b]->numerador);
}

void imprime_fracao(Fracao *f){
    printf("%d/%d\n", f->numerador,f->denominador);
}
