/*Exerc�cio extra�do do material do prof. Paulo Feofiloff - https://www.ime.usp.br/~pf/algoritmos/).
O que est� acontecendo no c�digo abaixo?*/

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
