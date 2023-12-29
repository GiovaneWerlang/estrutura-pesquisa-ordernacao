
#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct item {
  int chave;
  // demais campos
};

struct fila {
  Item item[MAXTAM];
  int primeiro;
  int ultimo;
  int tamanho;
};

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

int enfileira(Fila* f, int chave) {
  if(verifica_fila_cheia(f)) {
	printf("Erro: a fila está cheia.\n");
    	return 0;
  }
  Item novo_item;
  novo_item.chave = chave;
  f->item[f->ultimo] = novo_item;
  f->ultimo = (f->ultimo + 1) % MAXTAM;
  f->tamanho++;
  return 1;
}

void imprime(Fila* f) {
  int t;
  int i = f->primeiro;
  for(t = 0; t < f->tamanho; t++) {
    printf("Chave: %d\n", f->item[i].chave);
    i = (i+1) % MAXTAM;
  }
}

Item * desenfileira(Fila* f) {
    if(verifica_fila_vazia(f)) {
    	printf("Erro: a fila está vazia.\n");
    	return 0;
  }
    Item *novo = (Item*)malloc(sizeof(Item));
    *novo = f->item[f->ultimo];
    f->primeiro = (f->primeiro + 1) % MAXTAM;
    f->tamanho--;
    return novo;
}

void libera(Fila *f) {
  free(f);
}

int espia(Fila* f) {
    if(verifica_fila_vazia(f)) {
    	printf("Erro: a fila está vazia.\n");
    	return 0;
  }

  return f->item[(f->primeiro + 1) % MAXTAM].chave;
}

