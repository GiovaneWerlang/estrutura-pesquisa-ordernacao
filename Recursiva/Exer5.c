/*
    Neste exercício você deve encontrar o MDC (máximo divisor comum) entre dois números, usando o algoritmo de Euclides. Para calcular o mdc(m, n) para 0 ≤ n < m, o algoritmo de Euclides usa a seguinte recorrência:

    mdc(m, 0) = m;
    mdc(m, n) = mdc(n, m % n), para n > 0

Seguindo esta ideia, elabore uma função recursiva para encontrar o MDC entre dois números. Exemplo:

Entrada:
90 25
Saída:
5
*/

#include <stdio.h>
#include <stdlib.h>

int mdc(int m, int n);

int main(void){
    int n = 90;
    int m = 25;

    int r = mdc(m, n);
    printf("%d", r);

    return 0;
}

int mdc(int m, int n){
    if(n == 0){
        return m;
    }else{
        return mdc(n, m % n);
    }
}
