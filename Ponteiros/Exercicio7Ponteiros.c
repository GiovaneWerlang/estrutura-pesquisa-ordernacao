//O que o c�digo abaixo vai imprimir? (Tente descobrir manualmente e depois execute o c�digo para conferir).

#include <stdio.h>

void main(void){
    int v[3], *p, *a;

    p = v;
    *p = 10;
    *(p + 1) = 20;
    *(p + 2) = 30;

    a = &v[1];
    *a = 40;
    *(a - 1) = 50;

    printf("%d\n", v[0]);//50
    printf("%d\n", v[1]);//40
    printf("%d\n", v[2]);//30
}
