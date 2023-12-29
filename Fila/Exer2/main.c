#include <stdio.h>
#include "fila.h"

int main(void) {
  Fila *f = cria_fila_vazia();
  Fila *aux = cria_fila_vazia();
  printf("Enfileirando 9 itens:\n");
  enfileira(f, 1);
  enfileira(f, 10);
  enfileira(f, 10);
  enfileira(f, 10);
  enfileira(f, 3);
  enfileira(f, 24);
  enfileira(f, 4);
  enfileira(f, 1);
  enfileira(f, 24);
  imprime(f);

  aux = remove_duplicados(f);

  printf("\n");
  imprime(aux);
  libera(aux);
  libera(f);
  return 0;
}


