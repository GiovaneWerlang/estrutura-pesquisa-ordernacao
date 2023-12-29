/*Exerc�cio extra�do do material do prof. Paulo Feofiloff - https://www.ime.usp.br/~pf/algoritmos/).
Execute o programa abaixo e verifique sua sa�da:*/

#include <stdio.h>

void func1(int x) {
   x = 9 * x;
}

void func2(int v[]) {
   v[0] = 9 * v[0];
}

void main(void){
   int x, v[2];

   x = 111;
   v[0] = 111;

   func1(x);
   printf("x: %d\n", x);

   func2(v);
   printf("v[0]: %d\n", v[0]);
}

//x e v[0] possuem valores iguais? Por que isso acontece?
//n�o possuem valores iguais, pois o x manipulado na fun��o n�o � ponteiro, portanto n�o � retornado
