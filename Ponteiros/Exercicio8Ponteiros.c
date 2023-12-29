//Corrija o problema do código abaixo:

#include <stdio.h>

void troca(int *a, int *b,int c, int d) {
    int t;
    t = c;
    *a = d;
    *b = t;
}

void main(void){
   int a = 10;
   int b = 20;
   printf("a: %d, b: %d\n", a, b);
   troca(&a, &b, a, b);
   printf("a: %d, b: %d\n", a, b);
}
