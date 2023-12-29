/*Suponha que os elementos do vetor (v) são do tipo int e cada int ocupa 8 bytes no seu computador.
Se o endereço de v[0] é 10000, qual o valor da expressão v + 5?   40*/

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
    printf("\n");
    printf("v[0]+5 = %d", &v[0+5]);
   return 0;
}
