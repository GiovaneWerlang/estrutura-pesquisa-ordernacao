#include <stdio.h>
#include <stdlib.h>

float retornabe(int base, int expoente){
    float elevado;
    if(expoente == 0){
        return 1;
    }else{
    elevado = base * retornabe(base,expoente -1);
    }
    return elevado;
}

int main(void){
    printf("%.2f",retornabe(2,2));

    return 0;
}
