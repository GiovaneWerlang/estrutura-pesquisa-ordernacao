#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(void){
    Pilha *p = cria_pilha_vazia();


    libera_pilha(p);
    return 0;
}
