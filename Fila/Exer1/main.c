#include <stdio.h>
#include "fila.h"

int main(void) {
    Fila *f = cria_fila_vazia();
    printf("Enfileirando 5 itens:\n");
    enfileira(f, 'a');
    enfileira(f ,'a');
    enfileira(f ,'b');
    enfileira(f ,'c');
    enfileira(f , espia(f));
    enfileira(f , desenfileira(f) );
    desenfileira(f);
    enfileira(f, 'e');
    desenfileira(f);
    enfileira (f, espia(f));
    enfileira(f , enfileira(f ,'g') + 'a');
    imprime(f);
    libera(f);
    return 0;
}


