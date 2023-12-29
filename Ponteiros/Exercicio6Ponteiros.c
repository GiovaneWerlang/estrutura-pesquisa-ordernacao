/*Exercício extraído do material do prof. Paulo Feofiloff - https://www.ime.usp.br/~pf/algoritmos/).
O que está acontecendo no código abaixo?*/

#include <stdio.h>
#include <string.h>

void imprime(char *s, int n) {
   char *c;
   for (c = s; c < s + n; c++)
      printf ("%c", *c);
}

void main(void){
    char s[] = "bom dia";
    imprime(s, strlen(s));
}
