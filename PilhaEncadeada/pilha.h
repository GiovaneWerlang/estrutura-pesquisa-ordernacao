typedef struct item Item;
typedef struct celula Celula;
typedef struct pilha Pilha;

Pilha * cria_pilha_vazia();
int verifica_pilha_vazia(Pilha *p);
void empilha(Pilha *p, int codigo);
void imprime_pilha(Pilha *p);
void desempilha(Pilha *p);
void libera_pilha(Pilha *p);
