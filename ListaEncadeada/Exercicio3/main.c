/*Escreva uma fun��o que recebe 3 listas, sendo que a primeira guarda n n�meros inteiros e
a segunda e a terceira est�o vazias. A fun��o deve preencher a segunda lista com todos os n�meros
pares encontrados na primeira lista, e deve preencher a terceira lista com todos os n�meros �mpares
encontrados na primeira lista.*/
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(void)
{
    Lista *l = cria_lista_vazia();
    Lista *m = cria_lista_vazia();
    Lista *k = cria_lista_vazia();
    printf("A lista est� vazia? %d\n",verifica_lista_vazia(l));
    adiciona_fim(l, 10);
    adiciona_fim(l, 21);
    adiciona_fim(l, 30);
    imprime_lista(l);

    distribui_pares_impares(l, m, k);
    imprime_lista(m);
    imprime_lista(k);


    libera_lista(l);
    libera_lista(m);
    libera_lista(k);
    return 0;
}
