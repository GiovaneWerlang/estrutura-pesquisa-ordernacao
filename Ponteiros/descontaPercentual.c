#include <stdio.h>

void desconta(float *reais, float *desconto);

int main(void){

    float reais = 666.66;
    float desconto = 0.15;

    desconta(&reais, &desconto);
    printf("%.2f\n", reais);

    return 0;
}

void desconta(float *reais, float *desconto){
    if(*reais>50.0){
        *reais = *reais - (*reais * *desconto);
    }
}
