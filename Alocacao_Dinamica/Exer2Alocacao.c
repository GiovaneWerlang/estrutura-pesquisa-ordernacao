//Verifique o que faz o c�digo abaixo. Ele executa corretamente?
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *s, a[] = "Algoritmos";
    int t;
    s = malloc(30 * sizeof(char));
    strcpy(s, a);
    t = strlen(s);
    printf("Tamanho: %d\n", t);
    s = realloc(s, t * sizeof(char));
    printf("%s",s);

    free(s);
}
//E se a seguinte altera��o for feita, o que acontece?

int main(void) {
    char *s, a[] = "Algoritmos";
    int t;
    s = malloc(30 * sizeof(char));
    s = a; // mudan�a aqui      Vai tentar guardar a string a no endere�o em s, *s aponta para o conteudo, e &a aponta para o endere�o
    t = strlen(s);
    printf("Tamanho: %d\n", t);
    s = realloc(s, t * sizeof(char));
    printf("%s",s);
    free(s);
}
