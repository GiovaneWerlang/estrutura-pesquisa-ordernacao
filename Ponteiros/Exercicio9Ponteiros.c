/*Escreva um programa para somar dois valores usando ponteiros.*/

#include <stdio.h>

void soma(int a, int b, int *c){
    *c = a+b;
}


int main(void){
    int a;
    int b;
    int c;
    a = 10;
    b = 20;

    soma(a,b,&c);

    printf("Soma de %d e %d = %d", a,b,c);


    return 0;
}
