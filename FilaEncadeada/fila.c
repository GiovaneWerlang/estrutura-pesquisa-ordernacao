#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct item{
    int codigo;
};

struct celula{
    Item item;
    Celula *prox;
};

struct fila{
    Celula *primeira;
    Celula *ultima;
};

Fila * cria_fila_vazia(){
    Fila *f = (Fila*)malloc(sizeof(Fila));
    if(f == NULL)
        return NULL;

    f->primeira = NULL;
    f->ultima = NULL;
    return f;
}
//se estiver vazia retorna 1
int verifica_fila_vazia(Fila *f){
    return f->primeira == NULL;
}

//novo item aponta p
//f->ultima recebe end nova
//----------------------
//se não está vazia, a ultima aponta para nova
//se está vazia, inicio tambem recebe end nova

void enfileira(Fila *f, int codigo){
    Item novo_item;
    novo_item.codigo = codigo;
    Celula *nova = (Celula*)malloc(sizeof(Celula));
    nova->item = novo_item;
    nova->prox = NULL;
    if(verifica_fila_vazia(f)){
        f->primeira = nova;
    }else{
        f->ultima->prox = nova;
    }
    f->ultima = nova;
}

void imprime(Fila *f){
    Celula *aux;
    for(aux = f->primeira; aux !=NULL; aux = aux->prox){
        printf("Codigo: %d\n", aux->item.codigo);
    }
}

int desenfileira(Fila *f){
    if(verifica_fila_vazia(f)){
        printf("Fila já está vazia.\n");
        return;
    }
    int codigo;
    Celula *remover= f->primeira;
    codigo = remover->item.codigo;
    f->primeira = remover->prox;
    free(remover);
    if(verifica_fila_vazia(f)){
        f->ultima = NULL;
    }
    return codigo;
}

void libera_fila(Fila *f){
    Celula *aux = f->primeira;
    Celula *remover;
    while(aux !=NULL){
        remover = aux;
        aux = aux->prox;
        free(remover);
    }
    free(f);
}
