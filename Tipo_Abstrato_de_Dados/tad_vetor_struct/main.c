#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main(void){
    Ponto **p = aloca_vetor_pontos(5);

    int i;
    float x , y;

    for(i=0;i<5;i++){
        printf("Informe os pontos x e y: (formato x/y)");
        scanf("%f/%f",&x,&y);
        cadastra_vetor_pontos(p[i],x,y);
    }

    int a, b;

    printf("Informe quais elementos da struct deseja calcular de 0 a 4: (formato x/y)");
    scanf("%d/%d",&a, &b);
    float d;
    d = calcula_distancia(p, a, b);

    printf("%.2f\n", d);

    imprime_vetor_pontos(p,5);

    libera_ponto(p,5);



    return 0;
}
