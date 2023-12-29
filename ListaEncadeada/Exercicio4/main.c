/*Escreva uma função que recebe duas listas. A primeira guarda n números inteiros e a
segunda está vazia. A função deve inserir os elementos da primeira lista na segunda lista,
de maneira ordenada.*/
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(void)
{
    Lista *l = cria_lista_vazia();
    Lista *m = cria_lista_vazia();
    printf("A lista está vazia? %d\n",verifica_lista_vazia(l));
    printf("A lista está vazia? %d\n",verifica_lista_vazia(m));
    adiciona_inicio(l, 10);
    adiciona_inicio(l,30);
    adiciona_inicio(l,50);
    //adiciona_inicio(l, 20);
    adiciona_fim(l,20);
    adiciona_fim(l, 25);
    //imprime_lista(l);
    //imprime_lista(m);
    //insere_ordenado(l, 15);
    //insere_ordenado(l, 20);
    //insere_ordenado(l, 25);

    //imprime_lista(l);
    copia_ordena_lista(l,m);
    imprime_lista(m);

    libera_lista(l);
    libera_lista(m);
    return 0;
}
