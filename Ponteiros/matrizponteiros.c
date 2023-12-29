#include <stdio.h>
#include <stdlib.h>

int ** aloca_matriz(int ni, int nj);
void libera_matriz(int **m, int ni);
void imprime_matriz(int **m, int ni, int nj);

int main(){
    int **m, i, j;
    int ni = 3;// n linhas
    int nj = 4;// n colunas
    //alocar os ponteiros que irão apontar para as linhas
    m = aloca_matriz(ni, nj);
   /* m = malloc(3 * sizeof(int*));
    for(i= 0; i < ni; i ++ ){
        m[i] = calloc(nj , sizeof(int));//alocar colunas
        printf("%ld\n",&m[i]);
    }*/

    imprime_matriz(m, ni, nj);
    /*for(i=0; i < ni; i++){
        for(j=0; j< nj; j++){
            printf("%ld\t", &m[i][j]); //*(*(m + i) + j) ou m[i][j]
        }
        printf("\n");
    }*/

    libera_matriz(m, ni);
    /*for(i=0;i<ni;i++){
        free(m[i]);//esvaziar matriz, linhas
    }
    free[m];//liberar vetor*/

    return 0;
}

int ** aloca_matriz(int ni, int nj){
    int i, j;
    int **m = (int**)malloc(3 * sizeof(int*));
    for(i= 0; i < ni; i ++ ){
        m[i] = (int*)calloc(nj , sizeof(int));
        printf("%ld\n",&m[i]);
    }
    return m;
}

void libera_matriz(int **m, int ni){
    int i;
    for(i=0;i<ni;i++){
        free(m[i]);//esvaziar matriz, linhas
    }
    free(m);
}

void imprime_matriz(int **m, int ni, int nj){
    int i, j;
    for(i=0; i < ni; i++){
        for(j=0; j< nj; j++){
            printf("%ld\t", &m[i][j]); //*(*(m + i) + j) ou m[i][j]
        }
        printf("\n");
    }
}















