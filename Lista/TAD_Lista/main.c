#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(void){
    Lista *l = cria_lista_vazia();
    Lista *m = cria_lista_vazia();
    Lista *r = cria_lista_vazia();
    printf("Lista cheia? %d\n", verifica_lista_cheia(l));
    printf("Lista vazia? %d\n", verifica_lista_vazia(l));
    insere_item_lista(l, 1);
    insere_item_lista(l, 2);
    insere_item_lista(m, 2);
    insere_item_lista(l, 8);
    insere_item_lista(l, 16);
    insere_item_lista(l, 36);
    imprime_lista(l);

    printf("Encontrou %d? %d\n", 1, busca_item_por_codigo(l, 1));
    printf("Encontrou %d? %d\n", 2, busca_item_por_codigo(l, 2));

    retira_item_por_codigo(l, 2);
    imprime_lista(l);

    insere_item_lista_ordenando(l, 2);
    imprime_lista(l);
    //copia_lista(l, m);
    //printf("\nCopia\n");
    imprime_lista(m);
    r = uniao_entre_listas(l,m);
    imprime_lista(r);
    libera_lista(l);
    return 0;
}
