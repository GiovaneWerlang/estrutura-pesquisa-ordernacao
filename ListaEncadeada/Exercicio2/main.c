/*Escreva uma função que recebe duas listas encadeadas e concatena as duas (liga a segunda lista no final da primeira lista).*/
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(void)
{
    Lista *l = cria_lista_vazia();
    Lista *m = cria_lista_vazia();
    //Lista *c = cria_lista_vazia();
    printf("A lista está vazia? %d\n",verifica_lista_vazia(l));
    adiciona_fim(l, 10);
    adiciona_fim(l, 20);
    adiciona_fim(l, 30);
    adiciona_fim(m, 40);
    adiciona_fim(m, 50);
    imprime_lista(l);
    imprime_lista(m);

    concatena_Lista(l,m);
    imprime_lista(l);


    libera_lista(l);
    return 0;
}
