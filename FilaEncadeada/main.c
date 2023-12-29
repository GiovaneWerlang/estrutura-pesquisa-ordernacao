#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){
    Fila *f = cria_fila_vazia();

    printf("Adicionando items %d.\n", verifica_fila_vazia(f));
    enfileira(f, 10);
    enfileira(f, 20);
    enfileira(f, 30);
    enfileira(f, 40);
    imprime(f);

    printf("Desenfileirado %d\n", desenfileira(f));
    printf("Desenfileirado %d\n", desenfileira(f));
    imprime(f);
    libera_fila(f);
    return 0;
}
