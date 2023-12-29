typedef struct item Item;
typedef struct celula Celula;
typedef struct lista Lista;
Lista * cria_lista_vazia();
int verifica_lista_vazia(Lista *l);

void adiciona_inicio(Lista *l, int codigo);
void adiciona_fim(Lista *l, int codigo);
void adiciona_por_pos(Lista *l, int codigo, int pos);
void remove_item_por_codigo(Lista *l, int codigo);
void libera_lista(Lista *l);
Celula * busca_celula_por_codigo(Lista *l, int codigo);
void imprime_lista(Lista *l);
void concatena_Lista(Lista *l, Lista *m);
