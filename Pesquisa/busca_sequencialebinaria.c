#include <stdio.h>

int busca_sequencial(int vetor[], int n, int chave);
int busca_binaria(int vetor[], int n, int chave);

int main (void){
    int vetor[] = {1, 2, 3, 4, 10, 13, 20, 50};
    int posicao = busca_binaria(vetor, 7, 20);
    printf("Posicao: %d\n", posicao);


    return 0;
}

int busca_sequencial(int vetor[], int n, int chave){
    int i;
    for(i=0; i < n; i++){
        if(vetor[i] == chave){
            return i;
        }
    }
    return -1;

}

int busca_binaria(int vetor[], int n, int chave){
    int p=0;
    int u = n-1;
    int meio;
    while(p <= u){
        meio = (p+u) /2;
        if(vetor[meio]==chave){
            return meio;
        }else if(vetor[meio] > chave){
            u = meio - 1;
        }else{
            p = meio + 1;
        }
    }
    return -1;

}
