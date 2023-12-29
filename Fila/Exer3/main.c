#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(void) {
  Fila *f = cria_fila_vazia();
  Fila *aux = cria_pilha_vazia();
  printf("Enfileirando 9 itens:\n");
  enfileira(f, 1);
  enfileira(f, 10);
  enfileira(f, 3);
  enfileira(f, 24);
  enfileira(f, 4);
  imprime(f);

  aux = inverte_fila_com_pilha(f);
  imprime(aux);

  libera(aux);
  libera(f);
  return 0;
}


