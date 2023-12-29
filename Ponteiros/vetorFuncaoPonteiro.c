#include <stdio.h>

void atualiza_vetor(int vet[], int n);

int main(void){
    int vet[] = {10,40,20,15};
    int i;
    atualiza_vetor(vet,4);
    for(i=0;i<4;i++){
        printf("%d\t",vet[i]);
    }

return 0;
}

void atualiza_vetor(int vet[], int n){
    //vet[0] = 50;
    *vet = 50;//vetores são ponteiros
}
