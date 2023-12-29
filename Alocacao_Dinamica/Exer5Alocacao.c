//A função abaixo recebe o limite inferior e o limite superior de um intervalo e tem como objetivo retornar
//um vetor com todos os inteiros pertencentes ao intervalo. Qual é o problema dessa função?
#include <stdio.h>
#include <stdlib.h>

int * retorna_numeros_intervalo(int inf, int sup);

int main(void){
    int inf =10;
    int sup = 30;
    int *vet;
    vet = malloc(20 * sizeof(int));

    vet = retorna_numeros_intervalo(inf, sup);

    int i;

    for(i=0;i<20;i++){
        printf("%d\t", *(vet+i));
    }


    return 0;
}



int * retorna_numeros_intervalo(int inf, int sup) {
    int tamanho = sup - inf;
    //int vetor[tamanho];
    int *vetor = calloc(tamanho, sizeof(int)); //vetor ponteiro declarado dentro da função e com alocação estatica, se mudar para malloc, ou calloc funcionaria
    int i;
    int j = 0;
    for(i = inf; i < sup; i++) {
        vetor[j] = i;
        j++;
    }
    return vetor;
}
