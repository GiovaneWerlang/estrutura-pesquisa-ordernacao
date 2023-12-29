
#include <stdio.h>
#include <stdlib.h>
#include "fila.h"


Fila * cria_fila_vazia() {
  Fila *f = malloc(sizeof(Fila));
  f->primeiro = 0;
  f->ultimo = 0;
  f->tamanho = 0;
  return f;
}

int verifica_fila_vazia(Fila *f) {
  return f->tamanho == 0;
}

int verifica_fila_cheia(Fila *f) {
  return f->tamanho == MAXTAM;
}

void enfileira(Fila* f, int chave) {
  if(verifica_fila_cheia(f)) {
	printf("Erro: a fila está cheia.\n");
    	return;
  }
  Item novo_item;
  novo_item.chave = chave;
  f->item[f->ultimo] = novo_item;
  f->ultimo = (f->ultimo + 1) % MAXTAM;
  f->tamanho++;
}

void imprime(Fila* f) {
  int t;
  int i = f->primeiro;
  for(t = 0; t < f->tamanho; t++) {
    printf("Chave: %d\n", f->item[i].chave);
    i = (i+1) % MAXTAM;
  }
}

void desenfileira(Fila* f) {
    if(verifica_fila_vazia(f)) {
    	printf("Erro: a fila está vazia.\n");
    	return;
  }
  f->primeiro = (f->primeiro + 1) % MAXTAM;
  f->tamanho--;
}

void libera(Fila *f) {
  free(f);
}

Fila * remove_duplicados(Fila *f){
    Fila *aux = cria_fila_vazia();
    int t, u;
  int i = f->primeiro;
  int j = aux->primeiro;
  char primeiro = 's';
  int aux2;

  for(t = 0; t < f->tamanho; t++) {
      if(primeiro == 's'){
            if(f->item[i].chave!=aux->item[j].chave){
                    enfileira(aux, f->item[i].chave);
                    primeiro = 'n';
                    i = (i+1) % MAXTAM;
                }
      } j = aux->primeiro;
      aux2=0;
        for(u=0; u < aux->tamanho;u++){

            if(f->item[i].chave!=aux->item[j].chave){
                aux2++;
                if(aux2==aux->tamanho){
                    enfileira(aux, f->item[i].chave);
                }
            }
        j = (j +1) % MAXTAM;
        }
    i = (i+1) % MAXTAM;

  }

  return aux;
}

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
    ItemP novo;
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

Fila * inverte_fila_com_pilha(Fila *f){
    Pilha *aux = cria_pilha_vazia();
    Fila *aux2 = cria_fila_vazia();
    int t;
  int i = f->primeiro;

  for(t = 0; t < f->tamanho; t++) {
        empilha(aux, f->item[i].chave);
        i = (i+1) % MAXTAM;
  }
    for(t = f->tamanho; t >=0; t--) {
        desenfileira(f);
    }
    i = f->primeiro;
    for(t = 0; aux->topo>=0; t++) {
        enfileira(aux2,aux->itens[aux->topo].codigo);
        desempilha(aux);
    }
  return aux2;
}
