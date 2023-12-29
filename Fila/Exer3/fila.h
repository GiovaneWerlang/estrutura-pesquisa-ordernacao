typedef struct item Item;
typedef struct fila Fila;
typedef struct itemp ItemP;
typedef struct pilha Pilha;

#define MAXTAM 9

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

struct itemp{
    int codigo;
    //demais campos
};

struct pilha{
    ItemP itens[MAXTAM];
    int topo;
};

Fila * cria_fila_vazia();
int verifica_fila_vazia(Fila *f);
int verifica_fila_cheia(Fila *f);
void enfileira(Fila* f, int chave);
void imprime(Fila* f);
void desenfileira(Fila* f);
void libera(Fila *f);
Fila * remove_duplicados(Fila *f);

Pilha * cria_pilha_vazia();
void libera_pilha(Pilha *p);
int verifica_pilha_cheia(Pilha *p);
void empilha(Pilha *p, int codigo);
void imprime_pilha(Pilha *p);
int verifica_pilha_vazia(Pilha *p);
void desempilha(Pilha *p);
