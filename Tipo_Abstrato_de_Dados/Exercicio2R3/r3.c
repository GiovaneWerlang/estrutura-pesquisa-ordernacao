#include <stdio.h>
#include <stdlib.h>
#include "r3.h"

struct r3{
    int x;
    int y;
    int z;
};

R3 ** cria_r3(int t){
    R3 **ponto;
    ponto = (R3**)malloc(t * sizeof(R3*));
    int i;
    for(i=0;i<t;i++){
        ponto[i] = (R3*)malloc(sizeof(R3));
    }
    return ponto;
}

void libera_r3(R3 **ponto, int t){
    int i;
    for(i=0;i<t;i++){
        free(ponto[i]);
    }
    free(ponto);
}

void popula_r3(R3 *ponto, int a, int b, int c){
    ponto->x = a;
    ponto->y = b;
    ponto->z = c;
}
void soma_r3(R3 **ponto, int a, int b){
    printf("Soma: %d, %d, %d\n", ponto[a]->x + ponto[b]->x, ponto[a]->y+ ponto[b]->y, ponto[a]->z+ ponto[b]->z );
}

void escalar_r3(R3 **ponto, int a, int b){
    printf("Produto escalar: %d\n", (ponto[a]->x * ponto[b]->x) + (ponto[a]->x * ponto[b]->x) + (ponto[a]->x * ponto[b]->x));
}

void vetorial_r3(R3 **ponto, int a , int b){
    int x, y, z;
    x = (ponto[a]->y * ponto[b]->z) - ( ponto[a]->z * ponto[b]->y );
    y = (ponto[a]->z * ponto[b]->x) - ( ponto[a]->x * ponto[b]->z );
    z = (ponto[a]->x * ponto[b]->y) - ( ponto[a]->y * ponto[b]->x );
    printf("Produto vetorial: %d, %d, %d\n", x, y ,z  );
}

void imprime_r3(R3 **ponto, int t){
    int i;
    for(i=0;i<t;i++){
        printf("%d, %d, %d\n", ponto[i]->x, ponto[i]->y, ponto[i]->z);
    }
}
