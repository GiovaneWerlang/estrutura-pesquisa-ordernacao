#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct item {
    int codigo;
    //outros campos: ra, nome, media
};

struct celula{
    Item item;
    Celula *prox;
};

struct lista{
    Celula *primeira;
    //Celula *ultima;
};

Lista * cria_lista_vazia(){
    Lista *l = (Lista*)malloc(sizeof(Lista));
    l->primeira = NULL;
    return l;
}
// retorna 1 se a lista está vazia ou 0 se não está
int verifica_lista_vazia(Lista *l){
    return l->primeira == NULL;
}

void adiciona_inicio(Lista *l, int codigo){
    Item novo_item;
    novo_item.codigo = codigo;
    Celula *nova = (Celula*)malloc(sizeof(Celula));
    nova->item = novo_item;

    nova->prox = l->primeira;
    l->primeira = nova;
}

void adiciona_fim(Lista *l, int codigo){
    Item novo_item;
    novo_item.codigo = codigo;
    Celula *nova = (Celula*)malloc(sizeof(Celula));
    nova->item = novo_item;
    nova->prox = NULL;
    if(verifica_lista_vazia(l)){//quem aponta para nova é l->primeiro
        l->primeira = nova;
    }
    else{//quem aponta para a primeira é a última
        Celula *aux = l->primeira;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = nova;
    }
}

void adiciona_por_pos(Lista *l, int codigo, int pos){

    Celula *aux = busca_celula_por_codigo(l, pos);
    if(aux==NULL){
        printf("Item não encontrado.\n");
    }else{
        Item novo_item;
        novo_item.codigo = codigo;
        Celula *nova = (Celula*)malloc(sizeof(Celula));
        nova->item = novo_item;
        nova->prox = aux->prox;
        aux->prox = nova;
    }

}

void remove_item_por_codigo(Lista *l, int codigo){
    Celula *aux = l->primeira;
    Celula *anterior;
    while(aux != NULL && aux->item.codigo != codigo){
        anterior = aux;
        aux = aux->prox;
    }
    if(aux == l->primeira){//remoção do inicio
        l->primeira = aux->prox;
    }
    else{// remoção meio ou fim
        anterior->prox = aux->prox;
    }
    free(aux);
}

void libera_lista(Lista *l){
    Celula *aux = l->primeira;
    Celula *liberar;
    while(aux != NULL){
        liberar = aux;
        aux = aux->prox;//se der free direto no aux quebra a lista no meio
        free(liberar);
    }
    //free(aux);
    free(l);
}

Celula * busca_celula_por_codigo(Lista *l, int codigo){
    Celula *aux =l->primeira;
    while(aux != NULL && aux->item.codigo != codigo){
        aux = aux->prox;
    }
    return aux;
}

void imprime_lista(Lista *l){
    Celula *aux;
    for(aux = l->primeira; aux!=NULL; aux = aux->prox){
        printf("Codigo: %d\n", aux->item.codigo);
    }
}

void concatena_Lista(Lista *l, Lista *m){
    Celula *aux = l->primeira;
    Celula *aux2 = m->primeira;
    for(aux = l->primeira; aux->prox !=NULL; aux = aux->prox){
        //aux = aux->prox;
    }
    /*while(aux->prox != NULL){
        aux = aux->prox;
    }*/
        aux->prox = aux2;
}

