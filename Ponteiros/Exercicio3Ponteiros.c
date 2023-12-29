/*Exercício extraído do livro SCHILDT, Herbert, C Completo e Total, 3ª edição).
Identifique qual é o problema do código:*/

#include <stdio.h>

int main(void) {
    int x, *p;
    x = 10;
    *p = x; //para atribuir valor para o ponteiro se usa apenas p
    //E o ponteiro esta apontando para o valor de x, não para seu endereço

    printf("%d\n%ld", x, p);

    return 0;
}
