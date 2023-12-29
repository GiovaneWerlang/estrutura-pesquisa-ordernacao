typedef struct livro Livro;

Livro ** aloca_livro(int t);

void libera_livro(Livro **l, int);

void cadastra_livro(Livro *l, char *titulo, char *autor, char *genero, int nr_pagina, int ano);

void mais_paginas(Livro **l, int t);

void ano_lancamento(Livro **l, int t, int ano);

void genero_livro(Livro **l, int t, char *genero);


