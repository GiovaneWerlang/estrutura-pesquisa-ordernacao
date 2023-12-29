#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    typedef struct ponto Ponto;

struct ponto{
    float x;
    float y;
};

Ponto cadastra_ponto(float x, float y);
float calcula_distancia(Ponto p1, Ponto p2);
void imprime_ponto(Ponto p);

int main(void){
    Ponto p1, p2;
    float distancia_p1_p2;
    p1 = cadastra_ponto(10, 20);
    p2 = cadastra_ponto(20,30);
    imprime_ponto(p1);
    imprime_ponto(p2);
    distancia_p1_p2 = calcula_distancia(p1,p2);
    printf("%.2f", distancia_p1_p2);

}

Ponto cadastra_ponto(float x, float y){
    Ponto p;
    p.x = x;
    p.y = y;
    return p;
}

float calcula_distancia(Ponto p1, Ponto p2){
    float dx;
    float dy;
    float d;
    dx = p1.x - p2.x;
    dy = p1.y - p2. y;
    d = sqrt(pow(dx,2) + pow(dy,2));
    return d;
}

void imprime_ponto(Ponto p){
    printf("%.2f\t%.2f\n", p.x, p.y);
}
