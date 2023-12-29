#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(void){
    Lista *l = cria_lista_vazia();

    printf("Lista cheia? %d\n", verifica_lista_cheia(l));

    insere_item_lista(l, 1);
    insere_item_lista(l, 2);
    insere_item_lista(l, 8);
    insere_item_lista(l, 16);
    insere_item_lista(l, 36);
    imprime_lista(l);

    int pos = busca_binaria(l, 16);
    printf("Posicao %d\n", pos);

    libera_lista(l);
    return 0;
}
