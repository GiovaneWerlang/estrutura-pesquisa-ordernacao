/*
    Crie uma estrutura para armazenar uma coordenada polar, composta por raio (r) e argumento (a).
    Crie também uma estrutura para armazenar uma coordenada do plano cartesiano, composta por x e y, sabendo que:

    x = r * cos(a)
    y = r * sin(a)

No programa principal, leia e salve um ponto em coordenada polar. Faça a conversão de
coordenada polar para coordenada cartesiana e salve o resultado como um ponto do plano cartesiano.
Mostre o ponto resultante.*/

#include <stdio.h>
#include <math.h>
#define PI 3.14

typedef struct polar Polar;
typedef struct cartesiano Cartesiano;

struct polar{
    float raio;
    float argumento;
};

struct cartesiano{
    float x;
    float y;
};

int main(void)
{
    Polar coorde_orig;
    Cartesiano coorde_conv;

    printf("Informe o raio: ");
    scanf("%f",&coorde_orig.raio);
    printf("Informe o argumento: ");
    scanf("%f",&coorde_orig.argumento);

    coorde_conv.x = coorde_orig.raio * cos(coorde_orig.argumento*PI/180);
    coorde_conv.y = coorde_orig.raio * sin(coorde_orig.argumento*PI/180);

    printf("%.2f,%2.f\n",coorde_conv.x, coorde_conv.y);

    return(0);
}
