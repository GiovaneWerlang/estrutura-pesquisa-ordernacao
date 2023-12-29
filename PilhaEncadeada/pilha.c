#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct item{
    int codigo;
};

struct celula{
    Item item;
    Celula *prox;
};

struct pilha{
    Celula *topo;
};

Pilha * cria_pilha_vazia(){
    Pilha *p = (Pilha*)malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

int verifica_pilha_vazia(Pilha *p){
    return p->topo == NULL;
}

void empilha(Pilha *p, int codigo){
    Celula *novo = (Celula*)malloc(sizeof(Celula));
    novo->item.codigo = codigo;
    if(verifica_pilha_vazia(p)){
        novo->prox = NULL;
    }else{
        novo->prox = p->topo;
    }

    p->topo = novo;
}

void imprime_pilha(Pilha *p){
    Celula *aux;
    for(aux=p->topo; aux!=NULL; aux = aux->prox){
        printf("Codigo %d\n", aux->item.codigo);
    }
}

void desempilha(Pilha *p){
    Celula *novo = p->topo;
    p->topo = novo->prox;
    free(novo);
}

void libera_pilha(Pilha *p){
    Celula *aux = p->topo;
    Celula *liberar;
    while(aux!=NULL){
        liberar = aux;
        aux = aux->prox;
        free(liberar);
    }
    free(p);
}
