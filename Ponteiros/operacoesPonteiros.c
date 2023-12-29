#include <stdio.h>

int main(void){
    int n = 10;
    int *pn = &n;

    printf("pn: %lf\n", pn);
    printf("Conteudo apontado por pn: %d\n", *pn);
    pn = pn + 1; //vai apontar no lugar do conteudo para o endereco
    printf("pn: %lf\n", pn);
    printf("Conteudo apontado por pn: %d\n", *pn);
    pn = pn - 1; //vai apontar conteudo do lixo de memoria pois o endereco voltou 1



    return 0;
}
