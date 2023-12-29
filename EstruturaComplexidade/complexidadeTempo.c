#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int * gera_vetor_aleatorio(int vet[],int tam){
    int i;
    for(i=0; i<tam;i++){
        vet[i] = rand() % 100;
    }
    return vet;
}

int main(void){
    FILE *fp;
    char nome_arquivo[] = "comparacao.csv";
    fp = fopen(nome_arquivo, "w+");
    fprintf(fp, "Inicio,Fim,Tempo Gasto,Tamanho\n");
    int tam = 100;
    clock_t ini, fim;
    double tempo_gasto;
    /*ini = clock();
    int vet1[tam];
    gera_vetor_aleatorio(vet1,tam);
    fim = clock();
    tempo_gasto = (double)(fim - ini) / CLOCKS_PER_SEC;
    printf("%ld\t%ld\t%f\n", ini,fim, tempo_gasto);*/
    int i;
    for(i=0; tam<=10000; i++){
        tam = tam+50;
        ini = clock();
        int vetC[tam];
        gera_vetor_aleatorio(vetC,tam);
        fim = clock();
        tempo_gasto = (double)(fim - ini) / CLOCKS_PER_SEC;
        fprintf(fp,"%ld,%ld,%f,%d\n", ini,fim, tempo_gasto,tam);
    }
    fclose(fp);
    return 0;
}
