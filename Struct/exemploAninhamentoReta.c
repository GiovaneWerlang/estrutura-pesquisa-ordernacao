#include <stdio.h>

typedef struct ponto Ponto;
typedef struct reta Reta;

struct ponto{
    int x;
    int y;
};

struct reta{
    Ponto ini;
    Ponto fin;
};

int main(void){
    Reta r1;

    //r1.ini.x = 5;
   // r1.ini.y = 10;
    //r1.fin.x = 5;
    //r1.fin.y = 20;

    printf("Informe o ponto inicial: ");
    scanf("%d,%d",&r1.ini.x,&r1.ini.y);
    printf("Informe o ponto final: ");
    scanf("%d,%d",&r1.fin.x,&r1.fin.y);


    printf("Ponto inicial de r1: %d,%d\n", r1.ini.x,r1.ini.y);
    printf("Ponto final de r1: %d,%d\n",r1.fin.x,r1.fin.y);



return 0;
}
