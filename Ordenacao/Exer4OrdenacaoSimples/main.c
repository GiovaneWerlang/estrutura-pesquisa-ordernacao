#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(void)
{
    Lista *l = cria_lista_vazia();
    printf("A lista está vazia? %d\n",verifica_lista_vazia(l));
    adiciona_fim(l, 10);
    adiciona_fim(l, 40);
    adiciona_fim(l, 30);
    imprime_lista(l);




    ordena_selecao(l);
    imprime_lista(l);

    libera_lista(l);
    return 0;
}
