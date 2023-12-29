#include <stdio.h>

int busca_binaria(int vetor[], int n, int chave);

int main(void){
    int vetor[] = {1,2,3,4,5,6,10,10};
    int posicao = busca_binaria_r(vetor, 0, 7, 10);
    printf("Posicao: %d\n", posicao);

    return 0;
}

int busca_binaria_r(int vetor[], int p, int u, int chave){
    int meio = p + u/2;
    if(vetor[meio] == chave){
        return meio;
    }else if(vetor[meio] > chave){
        busca_binaria_r(vetor, p, meio-1, chave);
    }else{
        busca_binaria_r(vetor, meio+1, u, chave);
    }

}

int busca_binaria(int vetor[], int n, int chave){
    int p =0;
    int u = n-1;
    int meio;

    while(p <=u){
        meio = (p+u)/2;
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

