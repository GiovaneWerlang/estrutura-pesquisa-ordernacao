#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(void)
{
    Lista *l = cria_lista_vazia();
    printf("A lista está vazia? %d\n",verifica_lista_vazia(l));
    adiciona_fim(l, 10);
    adiciona_fim(l, 20);
    adiciona_fim(l, 30);
    imprime_lista(l);

    printf("\nInserir o item 50 apos o 20.\n");
    adiciona_por_pos(l, 50, 20);
    imprime_lista(l);

    printf("\nRemovendo o 10.\n");
    remove_item_por_codigo(l, 50);
    imprime_lista(l);

    libera_lista(l);
    return 0;
}
