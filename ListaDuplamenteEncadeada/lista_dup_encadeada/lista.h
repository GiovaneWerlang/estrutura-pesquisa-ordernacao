typedef struct item Item;
typedef struct celula Celula;
typedef struct lista Lista;
Lista * cria_lista_vazia();
int verifica_lista_vazia(Lista *l);
void insere_inicio(Lista *l, int chave);
void imprime_esq_dir(Lista *l);
void imprime_dir_esq(Lista *l);
void insere_final(Lista *l, int chave);
Lista * busca_por_chave(Lista *l, int chave);
void insere_meio(Lista *l, int chave, int chave_b);
void libera_lista(Lista *l);
void remove_item(Lista *l, int chave);
void troca_celula(Lista *l, int chave, int chave_b);

















