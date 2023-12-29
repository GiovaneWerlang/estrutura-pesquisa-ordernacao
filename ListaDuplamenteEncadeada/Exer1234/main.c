#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(void){
    Lista *l = cria_lista_vazia();
    printf("Vazia? %d\n", verifica_lista_vazia(l));

    insere_items_ordenados(l,3);
    insere_items_ordenados(l,1);
    //insere_items_ordenados(l,3);
    insere_items_ordenados(l, 5);
    insere_items_ordenados(l,2);
    imprime_esq_dir(l);
    //insere_meio(l, 7, 2);
    //imprime_dir_esq(l);
    //remove_item(l, 3);
    //imprime_dir_esq(l);
    //troca_celula(l, 1,5);
    inverte_items_lista(l);
    imprime_esq_dir(l);

    libera_lista(l);
    return 0;
}
