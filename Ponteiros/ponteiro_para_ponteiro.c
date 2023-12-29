#include <stdio.h>

int main(){
    int x =10;
    int *p1 = &x;
    int **p2 = &p1;

    printf("End. do x: %ld\n", &x);
    printf("Valor do x: %d\n", x);

    printf("End. do p1: %ld\n", &p1);
    printf("p1 aponta para: %ld\n", p1);
    printf("p1 aponta para o conteudo: %d\n", *p1);

    printf("End. do p2: %ld\n", &p2);
    printf("p2 aponta para: %ld\n", p2);
    printf("p2 aponta para o conteudo: %ld\n", *p2);
    printf("acessando 10 a partir do p2: %ld\n", **p2);

return 0;
}
