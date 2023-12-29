#define MAXTAM 5
typedef struct item Item;

typedef struct lista Lista;

Lista * cria_lista_vazia();

void libera_lista(Lista *l);

int  verifica_lista_cheia(Lista *l);

void insere_item_lista(Lista *l, int codigo);

void imprime_lista(Lista *l);

int  verifica_lista_vazia(Lista *l);

int busca_item_por_codigo(Lista *l, int codigo);

void retira_item_por_codigo(Lista *l, int codigo);

void insere_item_lista_ordenando(Lista *l, int codigo);

void copia_lista(Lista *origem, Lista *destino);

Lista * intersecao_entre_listas(Lista *A, Lista *B);

Lista * uniao_entre_listas(Lista *A, Lista *B);

void ordena_selecao_lista(Lista *l);

void troca(Lista *l, int mini, int i);


