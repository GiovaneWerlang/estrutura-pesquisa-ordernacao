/*
    Criar uma estrutura para armazenar dados de filmes: título, diretor, gênero, duração (em minutos)
    e nota (1, 2, 3, 4 ou 5 estrelas).

    Leia e armazene informações de alguns filmes;
    Crie uma função para mostrar os dados do filme mais longo.
    Crie uma função para mostrar os dados dos filmes com 5 estrelas.
    Crie uma função para mostrar os dados dos filmes com apenas 1 estrela.
    Crie uma função para mostrar todos os filmes de um determinado diretor.
    Crie uma função para mostrar todos os filmes de um determinado gênero.
*/

#include <stdio.h>

typedef struct dados Filme;

struct dados{
    char titulo[30];
    char diretor[30];
    char genero[30];
    int duracao;
    int nota;
};

void mostraMaisLongo(Filme filmes[]);
void mostraCincoEstrelas(Filme filmes[]);
void mostraUmaEstrela(Filme filmes[]);
void mostraFDiretor(Filme filmes[]);
void mostraFGenero(Filme filmes[]);

int main(void){
    Filme filmes[5];
    int i;
    int opcao;

    for(i=0;i<5;i++)
    {
        printf("Informe o titulo do filme: ");
        fflush(stdin);
        gets(filmes[i].titulo);
        printf("Informe o direto do filme: ");
        fflush(stdin);
        gets(filmes[i].diretor);
        printf("Informe o genero do filme: ");
        fflush(stdin);
        gets(filmes[i].genero);
        printf("Informe a duracao do filme: ");
        scanf("%d",&filmes[i].duracao);
        printf("Informe a nota do filme: ");
        scanf("%d",&filmes[i].nota);
    }

    printf("Menu: \n");
    printf("1 - Mostrar os dados do filme mais longo.\n");
    printf("2 - Mostrar os dados dos filmes com 5 estrelas.\n");
    printf("3 - Mostrar os dados dos filmes com apenas 1 estrela.\n");
    printf("4 - Mostrar todos os filmes de um determinado diretor.\n");
    printf("5 - Mostrar todos os filmes de um determinado gênero.\n");
    scanf("%d",&opcao);

    switch(opcao)
    {
        case 1:
        {
            mostraMaisLongo(filmes);

            break;
        }
        case 2:
        {
            mostraCincoEstrelas(filmes);

            break;
        }
        case 3:
        {
            mostraUmaEstrela(filmes);

            break;
        }
        case 4:
        {
            mostraFDiretor(filmes);

            break;
        }
        case 5:
        {
            mostraFGenero(filmes);
            break;
        }
        default:
        {
            printf("Opcao invalida.\n");
            break;
        }
    }



return 0;
}

void mostraMaisLongo(Filme filmes[]){
    int i;
    int aux = 1;

    for(i=0;i<5;i++)
    {
        if(filmes[i].duracao>aux)
        {
            aux = i;
        }
    }
    printf("%s\n",filmes[aux].titulo);
    printf("%s\n",filmes[aux].diretor);
    printf("%s\n",filmes[aux].genero);
    printf("%d\n",filmes[aux].duracao);
    printf("%d\n",filmes[aux].nota);
}
void mostraCincoEstrelas(Filme filmes[]){
    int i;
    int aux = 5;

    for(i=0;i<5;i++)
    {
        if(filmes[i].nota==aux)
        {
            printf("%s\n",filmes[i].titulo);
            printf("%s\n",filmes[i].diretor);
            printf("%s\n",filmes[i].genero);
            printf("%d\n",filmes[i].duracao);
            printf("%d\n",filmes[i].nota);
        }
    }
}
void mostraUmaEstrela(Filme filmes[]){
    int i;
    int aux = 1;

    for(i=0;i<5;i++)
    {
        if(filmes[i].nota==aux)
        {
            printf("%s\n",filmes[i].titulo);
            printf("%s\n",filmes[i].diretor);
            printf("%s\n",filmes[i].genero);
            printf("%d\n",filmes[i].duracao);
            printf("%d\n",filmes[i].nota);
        }
    }
}
void mostraFDiretor(Filme filmes[]){
    int i;
    int aux[30];
    int res=1;

    printf("Informe o direto: ");
    fflush(stdin);
    gets(aux);

    for(i=0;i<5;i++)
    {
        res = strcmp(filmes[i].duracao,aux);
        if(res==0)
        {
            printf("%s\n",filmes[i].titulo);
            printf("%s\n",filmes[i].diretor);
            printf("%s\n",filmes[i].genero);
            printf("%d\n",filmes[i].duracao);
            printf("%d\n",filmes[i].nota);
        }
    }
}
void mostraFGenero(Filme filmes[]){
    int i;
    int aux[30];
    int res=1;

    printf("Informe o genero: ");
    fflush(stdin);
    gets(aux);

    for(i=0;i<5;i++)
    {
        res = strcmp(filmes[i].genero,aux);
        if(res==0)
        {
            printf("%s\n",filmes[i].titulo);
            printf("%s\n",filmes[i].diretor);
            printf("%s\n",filmes[i].genero);
            printf("%d\n",filmes[i].duracao);
            printf("%d\n",filmes[i].nota);
        }
    }

}
