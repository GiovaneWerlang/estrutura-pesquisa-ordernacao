#define MAXTAM 5

typedef struct item Item;

typedef struct pilha Pilha;

Pilha * cria_pilha_vazia();

void libera_pilha(Pilha *p);

int verifica_pilha_cheia(Pilha *p);

void empilha(Pilha *p, int codigo);

void imprime_pilha(Pilha *p);

int verifica_pilha_vazia(Pilha *p);

void desempilha(Pilha *p);
