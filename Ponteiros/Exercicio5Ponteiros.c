//Qual ser� a sa�da do programa?

#include <stdio.h>

int main(void){
   int v[] = {10, 20, 30};
   int *p;
   p = v;
   p++;
   printf("%d\n", *p);
   return 0;
}

//Se em vez de:

//p++;
//fosse:

//(*p)++;
//Qual seria a sa�da? a mesma, pois o *p entre parenteses n�o esta em opera��o
