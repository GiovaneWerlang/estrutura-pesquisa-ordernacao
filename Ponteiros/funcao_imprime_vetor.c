#include <stdio.h>

void imprime_vetor(int *v, int t);

int main(void){
    int v[] = {12,90,50,14,66};
    imprime_vetor(v, 5);

    printf("\n");
    int i;
    for(i=0;i<5;i++){
        printf("%d\t", *(v+i)); //na main tem de ser assim
    }

    return 0;
}

void imprime_vetor(int *v, int t){//pode ser passado *v no lugar de v[] pois vetor é ponteiro
    int i;

    for(i=0;i<t;i++){
        printf("%d\t", v[i]); //dentro da função *(v++) funciona pois no funcao temos apenas a copia
    }



}
