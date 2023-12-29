#include <stdio.h>


void troca(int *a, int *b);

int main() {
    int a, b, t;
    a = 10;
    b = 20;
    troca(&a,&b);

    printf("a: %d\nb:%d\n", a,b);


    return 0;
}

void troca(int *a, int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
