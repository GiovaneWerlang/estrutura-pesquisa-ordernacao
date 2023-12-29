#include <stdio.h>

void atualiza_nota(float *nota, float sub);// pode se usar sub sendo ponteiro ou n

int main(void)
{
    float nota=7.5;
    float sub=8.2;

    atualiza_nota(&nota, sub);

    printf("%f\n", nota);


    return 0;
}

void atualiza_nota(float *nota, float sub){
    if(sub>*nota){
        *nota = sub;
    }

}
