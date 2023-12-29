#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "livro.h"

struct livro{
    char titulo[30];
    char autor[30];
    char genero[30];
    int nr_paginas;
    int ano_lancamento;
};

Livro ** aloca_livro(int t){
    Livro **l;
    l = (Livro**)malloc(t * sizeof(Livro*));
    int i;
    for(i=0;i<t;i++){
        l[i]=(Livro*)malloc(sizeof(Livro));
    }
    return l;
}

void libera_livro(Livro **l, int t){
    int i;
    for(i=0;i<t;i++){
        free(l[i]);
    }
    free(l);
}

void cadastra_livro(Livro *l, char *titulo, char *autor, char *genero, int nr_pagina, int ano){
    strcpy(l->titulo, titulo);
    strcpy(l->autor, autor);
    strcpy(l->genero, genero);
    l->nr_paginas = nr_pagina;
    l->ano_lancamento = ano;
}

void mais_paginas(Livro **l, int t){
    int i;
    int aux = -1;
    int acc=0;

    for(i=0;i<t;i++){

        if(l[i]->nr_paginas > acc){
            acc = l[i]->nr_paginas;
            aux = i;

        }
    }

    if(aux>-1){
        printf("%s\n%s\n%s\n%d\n%d\n\n", l[aux]->titulo, l[aux]->autor, l[aux]->genero, l[aux]->nr_paginas, l[aux]->ano_lancamento);
    }

}

void ano_lancamento(Livro **l, int t, int ano){
    int i;
    int aux;
    for(i=0;i<t;i++){
        if(ano == l[i]->ano_lancamento){
                printf("%s\n%s\n%s\n%d\n%d\n\n", l[i]->titulo, l[i]->autor, l[i]->genero, l[i]->nr_paginas, l[i]->ano_lancamento);
        }
    }

}

void genero_livro(Livro **l, int t, char *genero){
    int i;
    int aux;
    for(i=0;i<t;i++){
        if(!strcmp(l[i]->genero, genero)){//strcomp retorna 1 se falso e o if vai interpretar como true sem o !
                printf("%s\n%s\n%s\n%d\n%d\n\n", l[i]->titulo, l[i]->autor, l[i]->genero, l[i]->nr_paginas, l[i]->ano_lancamento);
        }
    }
}


