#include <stdio.h>
#include <stdlib.h>

int conta_digitos(int num, int x){
    if(num<=0){
        return x;
    }
    conta_digitos(num/10, x+1);
}

int main(void){
    int n = 95230;

    int d = conta_digitos(n,0);
    printf("%d", d);

    return 0;
}

