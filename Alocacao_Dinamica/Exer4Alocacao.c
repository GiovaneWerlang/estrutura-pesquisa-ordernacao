//Crie um vetor do tipo inteiro com 50 itens usando a fun��o malloc. Percorra o vetor imprimindo endere�o e valor de cada item.
//Repetir o exerc�cio anterior usando a fun��o calloc em vez de malloc.

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *p = calloc(50, sizeof(int));
    int i;

    for(i=0;i<50;i++){
        printf("%ld\t%d\n", (p+i), *(p+i));
    }


    return 0;
}
