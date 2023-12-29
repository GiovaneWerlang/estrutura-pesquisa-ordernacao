/*Implemente uma função de ordenação (seleção, inserção ou bolha) para uma lista implementada usando vetores.*/
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(void){
    Lista *r = cria_lista_vazia();
    printf("Lista cheia? %d\n", verifica_lista_cheia(r));
    printf("Lista vazia? %d\n", verifica_lista_vazia(r));
    insere_item_lista(r, 10);
    insere_item_lista(r, 2);
    insere_item_lista(r, 50);
    insere_item_lista(r, 8);
    insere_item_lista(r, 16);
    insere_item_lista(r, 6);





    imprime_lista(r);
    ordena_selecao_lista(r);
    imprime_lista(r);
    libera_lista(r);
    return 0;
}
