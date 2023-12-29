/*
    Elabore uma fun��o que recebe como par�metro um n�mero n e imprime um asterisco n vezes.
    Essa fun��o deve ser recursiva. Exemplo:

Entrada:
5
Sa�da:
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
