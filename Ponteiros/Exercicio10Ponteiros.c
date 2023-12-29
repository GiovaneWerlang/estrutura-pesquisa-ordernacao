/*Escreva um programa que imprime um vetor. Percorra os itens do
vetor através de aritmética de ponteiros.*/

#include <stdio.h>

void imprimeVetor(int *v, int t);

int main(void){
    int vetor[5] = {5, 15, 12,7,29};
    imprimeVetor(vetor, 5);

    return 0;
}

void imprimeVetor(int *v,int t){
    int i;

    for(i=0;i<t;i++){
        printf("%d\t", *v++);
    }


}
