#include <stdio.h>
#include <stdlib.h>

int ** aloca_matriz(int ni, int nj);
void imprime_matriz(int **m, int ni, int nj);
void libera_matriz(int **m, int ni);
void popula_matriz(int **m, int ni, int nj);
void soma_matriz(int **m, int **n, int **o, int ni, int nj);
void alocarmatriz(int **m, int ni, int nj);


int main(void){
    int **m, i, j;
    int **n;
    int **o;
    int ni = 3;
    int nj = 4;

    m = aloca_matriz(ni, nj);
    n = aloca_matriz(ni, nj);
    o = aloca_matriz(ni, nj);
    popula_matriz(m, ni, nj);
    popula_matriz(n, ni, nj);
    imprime_matriz(m, ni, nj);
    printf("\n");
    imprime_matriz(n, ni, nj);
    printf("\n");
    soma_matriz(m,n,o,ni,nj);
    imprime_matriz(o,ni,nj);
    printf("\n");
    libera_matriz(m, ni);


    return 0;
}

int ** aloca_matriz( int ni, int nj){
    int i;
    int **m = (int**)malloc(ni * sizeof(int*));
    for(i=0;i<ni;i++){
        m[i] = (int*)calloc(nj , sizeof(int));
    }
    return m;
}

void imprime_matriz(int **m, int ni, int nj){
    int i, j;
    for(i = 0; i< ni; i++){
        for(j=0; j< nj; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

void libera_matriz(int **m, int ni){
    int i;
    for(i=0; i< ni; i++){
        free(m[i]);
    }
    free(m);
}

void popula_matriz(int **m, int ni, int nj){
    int i, j;
    for( i=0; i< ni; i++){
        for(j=0;j< nj; j++){
            m[i][j] = rand() % 100 - 1;
        }
    }
}

void soma_matriz(int **m, int **n, int **o, int ni, int nj){

    int i, j;
    for(i = 0; i < ni; i++){
        for(j = 0; j < nj; j++){
            o[i][j] = m[i][j] + n[i][j];
        }
    }
    //return o;
}
