#include <stdio.h>

int main(void){
    int n = 10;
    int *pn = &n;

    int c = 'a';
    char *pc;
    pc = &c;

    printf("O valor de n e: %d\n", n);  //%ld mostra long int
    printf("O endere�o de n e: %ld\n", &n); //mostra endere�o da variavel
    printf("O valor de pn e: %ld\n", pn);
    printf("O conteudo apontado por pn e: %d\n",*pn); //se acicionar o * vai mostar o conteudo no lugar do endere�o

    printf("O valor de n e: %c\n", c);
    printf("O endere�o de n e: %ld\n", &c);
    printf("O valor de pn e: %ld\n", pc);
    printf("O conteudo apontado por pn e: %c\n",*pc); //ao printar o valor � necessario lembrar o tipo de valor a ser mostrado
    //ao alterar o valor no ponteiro, se altera o valor na variavel

    return 0;
}
