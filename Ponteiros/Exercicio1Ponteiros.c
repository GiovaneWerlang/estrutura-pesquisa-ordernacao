/*O c�digo abaixo imprime os valores e endere�os de um vetor e de uma string.
Por que os endere�os do vetor v aumentam de 4 em 4 e os endere�os da string c aumentam de 1 em 1?*/

//Porque caractere usa 1 byte de endere�o e inteiro usa 4 bytes(4 endere�os, c�lulas);

#include <stdio.h>
#include <string.h>

void main(void) {
   int v[] = {1, 2, 3, 4, 5};
   char s[] = "ola";
   int i = 0;

   for(i = 0; i < 5; i++) {
       printf("valor: %d, end.: %ld\n", v[i], &v[i]);
   }

   printf("\n");
   for(i = 0; i < strlen(s); i++) {
       printf("valor: %c, end.: %ld\n", s[i], &s[i]);
   }
}
