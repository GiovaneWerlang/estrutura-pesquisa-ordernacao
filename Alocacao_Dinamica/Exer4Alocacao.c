//Crie um vetor do tipo inteiro com 50 itens usando a função malloc. Percorra o vetor imprimindo endereço e valor de cada item.
//Repetir o exercício anterior usando a função calloc em vez de malloc.

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
