/*Com base nos pseudocódigos dos métodos estudados, implemente os
algoritmos de ordenação por seleção, inserção e bolha.*/
#include <stdio.h>
#include <stdlib.h>

void troca(int vet[], int min, int i){
    int copo = vet[min];
    vet[min] = vet[i];
    vet[i] = copo;
}
void ordena_selecao(int vet[], int tam){
    int i;
    int min;
    int j;

    for(i=0;i<=tam-1;i++){
        min = i;
        for(j=i+1;j<=tam;j++){
            if(vet[j] < vet[min]){
                min = j;
            }
        }
        troca(vet, min, i);
    }
}

void ordena_insercao(int vet[], int tam){
    int i,j,atual;

    for(i=1;i<=tam;i++){
        atual = vet[i];
        j= i-1;
        while(j>=0 && vet[j] > atual){
            vet[j+1] = vet[j];
            j= j-1;
        }
        vet[j+1] = atual;
    }
}

void ordena_bolha(int vet[], int tam){
    int i, flag, j;

    for(i = tam-1; i >= 1; i--){
        flag = 0;
        for(j= 0; j <= i-1; j++){
            if(vet[j] > vet[j+1]){
                troca(vet , j, j+1);
                flag++;
            }
        }
        if(flag==0){
            i=0;
        }
    }
}
int main(void){
    int vet[10] = {14,25,57,85,37,86,62,96,79,41};
    int i;
    for(i=0;i<10;i++){
        printf("%d\t",vet[i]);
    }
    ordena_selecao(vet,10);
    printf("\n");
    for(i=0;i<10;i++){
        printf("%d\t",vet[i]);
    }
    return 0;
}
