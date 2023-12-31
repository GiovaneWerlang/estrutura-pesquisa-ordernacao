#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct item{
    int chave;
};

struct celula{
    Item item;
    Celula *ant;
    Celula *prox;
};

struct lista{
    Celula *primeira;
};

Lista * cria_lista_vazia(){
    Lista *l = (Lista*)malloc(sizeof(Lista));
    l->primeira = NULL;
    return l;
}

int verifica_lista_vazia(Lista *l){
    return l->primeira == NULL;
}

void insere_inicio(Lista *l, int chave){
    Item novo;
    novo.chave = chave;
    Celula *nova = (Celula*)malloc(sizeof(Celula));
    nova->item = novo;
    nova->ant=NULL;
    nova->prox = l->primeira;
    if(l->primeira !=NULL){
        l->primeira->ant = nova;
    }
    l->primeira = nova;
}

void insere_final(Lista *l, int chave){
    if(verifica_lista_vazia(l)){
        insere_inicio(l, chave);
    }else{
        Item novo;
        novo.chave = chave;
        Celula *nova = (Celula*)malloc(sizeof(Celula));
        nova->item = novo;

        nova->prox = NULL;
        Celula *ultima = l->primeira;
        while(ultima->prox != NULL){
            ultima = ultima->prox;
        }
        nova->ant = ultima;
        ultima->prox = nova;
    }
}

void insere_meio(Lista *l, int chave, int chave_b){
    Celula *anterior = busca_por_chave(l, chave_b);
    if(anterior == NULL){
        printf("A c�lula n�o existe ou a lista est� vazia.\n");
        return;
    }
    Item novo;
    novo.chave = chave;
    Celula *nova = (Celula*)malloc(sizeof(Celula));
    nova->item = novo;

    Celula *proxima = anterior->prox;
    nova->ant = anterior;
    nova->prox = proxima;

    anterior->prox = nova;
    if(proxima != NULL){
        proxima->ant = nova;
    }
}

void remove_item(Lista *l, int chave){
    Celula *aux = busca_por_chave(l, chave);
    Celula *remover;
    if(aux->ant==NULL && aux->prox ==NULL){
        l->primeira=NULL;
    }
    else if(aux==l->primeira){
        remover = aux;
        l->primeira = aux->prox;
        l->primeira->ant = NULL;
    }else if(aux->prox !=NULL && aux->ant !=NULL){
        Celula *proxima = aux->prox;
        Celula *anterior = aux->ant;
        proxima->ant = anterior;
        anterior->prox = proxima;
    }else if(aux->prox == NULL && aux->ant != NULL){
        Celula *proxima = aux->prox;
        Celula *anterior = aux->ant;
        anterior->prox = proxima;
    }

}

void imprime_esq_dir(Lista *l){
    Celula *aux = l->primeira;
    while(aux != NULL){
        printf("Chave: %d\n", aux->item.chave);
        aux = aux->prox;
    }

}

void imprime_dir_esq(Lista *l){
    Celula *aux = l->primeira;
    while(aux->prox !=NULL){
        aux =aux->prox;
    }
    while(aux !=NULL){
        printf("Chave: %d\n", aux->item.chave);
        aux = aux->ant;
    }
}

Lista * busca_por_chave(Lista *l, int chave){
    Celula *aux = l->primeira;
    while(aux != NULL && aux->item.chave != chave){
        aux = aux->prox;
    }
    return aux;
}

void troca_celula(Lista *l, int chave, int chave_b){
    Celula *chaveA = busca_por_chave(l, chave);
    Celula *chaveB = busca_por_chave(l, chave_b);
    int chave1 = chaveA->item.chave;
    long int aux = chaveA->ant;//usar variavel long pra armazenar endere�o do ponteiro
    chaveA->item.chave = chaveB->item.chave;
    chaveB->item.chave = chave1;
}

void insere_items_ordenados(Lista *l, int chave){
    Celula *aux = l->primeira;
    Item novo;
    novo.chave =0;
    while(aux !=NULL){
            if(aux->item.chave > novo.chave && aux->item.chave < chave){
                novo.chave = aux->item.chave;
            }
            aux = aux->prox;
    }
    if(verifica_lista_vazia(l)){
        insere_inicio(l, chave);
    }else if(novo.chave==0){
        insere_inicio(l,chave);
    }else{
        insere_meio(l, chave, novo.chave);
    }
}

void inverte_items_lista(Lista *l){//funciona
    //percorrer a lista para saber o tamanho
    //percorrer at� a metade trocando os extremos
    Celula *aux = l->primeira;
    Celula *auxU;
    int i;
    while(aux->prox != NULL){
        aux = aux->prox;
    }
    if(aux->prox==NULL){
        printf("teste\n");
    }
    auxU=aux;

    for(aux=l->primeira; aux->prox!=auxU->ant;aux = aux->prox){
        troca_celula(l, aux->item.chave, auxU->item.chave);
        if(aux->prox==auxU&&auxU->ant==aux){
            return;
        }
        auxU=auxU->ant;
    }
}

void libera_lista(Lista *l){
    Celula *aux = l->primeira;
    Celula *remover;
    while(aux != NULL){
        remover =aux;
        aux = aux->prox;
        free(remover);
    }
    free(l);
}
