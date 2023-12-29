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


    printf("A lista está ordenada? %d\n", verifica_lista_ordenada(l));

    libera_lista(l);
    return 0;
}
