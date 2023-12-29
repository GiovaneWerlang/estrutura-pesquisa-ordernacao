/*Adapte seus algoritmos para exibir o número de trocas necessárias para ordenar um vetor.
Faça testes com diferentes configurações de vetores: aleatório, crescente e decrescente.*/
#include <stdio.h>
#include <stdlib.h>

void troca(int vet[], int min, int i){
    int copo = vet[min];
    vet[min] = vet[i];
    vet[i] = copo;
}
int ordena_selecao(int vet[], int tam){
    int i;
    int min;
    int j;
    int trocas =0;

    for(i=0;i<=tam-1;i++){
        min = i;
        for(j=i+1;j<=tam;j++){
            if(vet[j] < vet[min]){
                min = j;
            }
        }
        troca(vet, min, i);
        trocas ++;
    }
    return trocas;
}

int ordena_insercao(int vet[], int tam){
    int i,j,atual;
    int trocas =0;

    for(i=1;i<=tam;i++){
        atual = vet[i];
        j= i-1;
        while(j>=0 && vet[j] > atual){
            vet[j+1] = vet[j];
            trocas++;
            j= j-1;
        }
        vet[j+1] = atual;
        //trocas++;
    }
    return trocas;
}

int ordena_bolha(int vet[], int tam){
    int i, flag, j;
    int trocas = 0;

    for(i = tam-1; i >= 1; i--){
        flag = 0;
        for(j= 0; j <= i-1; j++){
            if(vet[j] > vet[j+1]){
                troca(vet , j, j+1);
                trocas++;
                flag++;
            }
        }
        if(flag==0){
            i=0;
        }
    }
    return trocas;
}
int main(void){
    //int vet[10] = {14,25,57,85,37,86,62,96,79,41};
    int vet[10] = {1,2,3,4,5,6,7,8,9,10};
    int i;
    for(i=0;i<10;i++){
        printf("%d\t",vet[i]);
    }
    printf("\n");
    printf("%d",ordena_insercao(vet,10));
    printf("\n");
    for(i=0;i<10;i++){
        printf("%d\t",vet[i]);
    }

    return 0;
}

