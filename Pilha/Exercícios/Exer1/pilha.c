#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

/*struct item{
    int codigo;
    //demais campos
};

struct pilha{
    Item itens[MAXTAM];
    int topo;
};*/

Pilha * cria_pilha_vazia(){
    Pilha *p = (Pilha*)malloc(sizeof(Pilha));
    p->topo = -1;

    return p;
}


void libera_pilha(Pilha *p){
    free(p);
}

int verifica_pilha_cheia(Pilha *p){
    return p->topo == MAXTAM -1;
}

void empilha(Pilha *p, int codigo){
    if(verifica_pilha_cheia(p)){
        printf("A pilha já está cheia. ");
        return;
    }
    Item novo;
    novo.codigo = codigo;
    p->topo++;
    p->itens[p->topo] = novo;
}

int verifica_pilha_vazia(Pilha *p){
    return p->topo == -1;
}
void desempilha(Pilha *p){
    if(verifica_pilha_vazia(p)){
        printf("A pilha está vazia. ");
        return;
    }
    p->topo--;
}

void imprime_pilha(Pilha *p){
    int i;
    for(i=p->topo;i>=0;i--){
        printf("Codigo: %d\n", p->itens[i].codigo);
    }
}
