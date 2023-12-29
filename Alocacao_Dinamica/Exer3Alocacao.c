//Crie um vetor do tipo inteiro com 50 itens usando a função malloc. Percorra o vetor imprimindo endereço e valor de cada item.

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int *v;

    v = malloc(50 * sizeof(int));
    int i;
    for(i=0;i<50;i++){
        printf("%ld\t%d\n", (v+i), *(v+i) );
    }




    return 0;
}
