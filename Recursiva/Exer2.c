/*
    Escreva uma função recursiva para imprimir um vetor:

    Na mesma ordem em que foi criado;
    Ao contrário.
*/

#include <stdio.h>
#include <stdlib.h>

void imprime_recursiva(int vet[], int tam){
    if(tam==0){
        return;
    }
    imprime_recursiva(vet,tam-1);
    printf("%d\t",vet[tam-1]);

}

void imprime_inverso_recursiva(int vet[], int tam){
    if(tam==0){
        return;
    }
    printf("%d\t",vet[tam-1]);
    imprime_inverso_recursiva(vet,tam-1);
}

int main(void){
    int vet[5] = {1,2,3,4,5};
    imprime_recursiva(vet, 5);
    printf("\n");
    imprime_inverso_recursiva(vet,5);
    return 0;
}
