#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "livro.h"

int main(void){
    Livro **livro = aloca_livro(5);

    int i;
    char titulo[30];
    char autor[30];
    char genero[30];
    int nr_pagina;
    int ano;

    for(i=0;i<5;i++){
        printf("Informe o titulo do livro: ");
        fflush(stdin);
        gets(titulo);
        printf("Informe o autor do livro: ");
        fflush(stdin);
        gets(autor);
        printf("Informe o genero do livro: ");
        fflush(stdin);
        gets(genero);
        printf("Informe o numero de paginas: ");
        scanf("%d",&nr_pagina);
        printf("Informe o ano de publicacao: ");
        scanf("%d",&ano);
        cadastra_livro(livro[i], titulo, autor, genero, nr_pagina, ano);
    }
    mais_paginas(livro, 5);
    ano =2000;
    ano_lancamento(livro, 5, ano);
    char gene[30] =  "suspense";
    genero_livro(livro, 5, gene);

    libera_livro(livro, 5);
    return 0;
}
