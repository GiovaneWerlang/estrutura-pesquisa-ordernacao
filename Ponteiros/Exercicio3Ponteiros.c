/*Exerc�cio extra�do do livro SCHILDT, Herbert, C Completo e Total, 3� edi��o).
Identifique qual � o problema do c�digo:*/

#include <stdio.h>

int main(void) {
    int x, *p;
    x = 10;
    *p = x; //para atribuir valor para o ponteiro se usa apenas p
    //E o ponteiro esta apontando para o valor de x, n�o para seu endere�o

    printf("%d\n%ld", x, p);

    return 0;
}
