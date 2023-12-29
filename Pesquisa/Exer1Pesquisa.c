#include <stdio.h>

int busca_binaria_p(int vetor[], int n, int chave);
int busca_binaria_u(int vetor[], int n, int chave);


int main(void){
    int vetor[] = {1,2,3,4,5,6,10,10};
    int primeiro = busca_binaria_p(vetor, 8, 10);
    int ultimo = busca_binaria_u(vetor, 8, 10);


    printf("Primeira posicao: %d\nUltima posicao: %d\n", primeiro, ultimo);

    return 0;
}

int busca_binaria_u(int vetor[], int n, int chave){
    int p =0;
    int u = n-1;
    int meio;

    while(p <= u){
        meio = (p + u) /2;
        if(vetor[meio] == chave){
            while(vetor[meio] == vetor[meio+1]){
                meio++;
            }
            return meio;
        }else if(vetor[meio] > chave){
            u = meio-1;
        }else{
            p = meio+1;
        }
    }
    return -1;
}

int busca_binaria_p(int vetor[], int n, int chave){
    int p =0;
    int u = n-1;
    int meio;

    while(p <= u){
        meio = (p + u) /2;
        if(vetor[meio] == chave){
            return meio;
        }else if(vetor[meio] > chave){
            u = meio-1;
        }else{
            p = meio+1;
        }
    }
    return -1;
}
