#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(void){
    Pilha *p = cria_pilha_vazia();
    printf("Pilha vazia? %d\n", verifica_pilha_vazia(p));

    printf("Empilhando itens.\n");
    empilha(p, 1);
    empilha(p, 2);
    empilha(p, 3);
    imprime_pilha(p);

    printf("Desempilhando itens.\n");
    desempilha(p);
    desempilha(p);
    imprime_pilha(p);

    printf("Liberando pilha.\n");
    libera_pilha(p);

    return 0;
}
