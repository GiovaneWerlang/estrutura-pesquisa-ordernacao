/*
    Elabore uma função que recebe como parâmetro um número n e imprime um asterisco n vezes.
    Essa função deve ser recursiva. Exemplo:

Entrada:
5
Saída:
******/

#include <stdio.h>
#include <stdlib.h>

void imprimeN(int n){
    if(n==0){
        return;
    }else{
        imprimeN(n -1);
        printf("*");
    }
}

int main(void){
    imprimeN(5);

    return 0;
}
