/*
    Faça um programa que leia um vetor com dados de 5 livros: título, autor e ano. Permita ao usuário:

    Cadastrar livros;
    Buscar livros pelo título (mostrar todos os livros com o título igual ao buscado);
    Buscar livros pelo ano (mostrar todos os livros com o ano igual ao buscado);
*/

#include <stdio.h>
#include <string.h>

typedef struct livros Livro;

struct livros{
    char titulo[30];
    char autor[30];
    int ano;
};

void cadastroLivro(Livro vetor[], int n);

void buscaLivroTitulo(Livro vetor[], int n);

int comparaStringStruct(Livro vetor[], int pos, char titulo);

void buscaLivroAno (Livro vetor[], int n);

int main(void)
{
    Livro livro[5];
    int opcao;
    char repetir;

    cadastroLivro(livro, 5);

    do
    {
        do
        {
            opcao=0;
        printf("Informe o tipo de busca que deseja realizar: \n");
        printf("[1] - Busca por titulo. \n");
        printf("[2] - Busca por ano. \n");
        printf("[3] - Para sair.\n");
        printf("Informe a opcao desejada: ");
        scanf("%d",&opcao);
            switch(opcao)
            {
                case 1:
                {
                    buscaLivroTitulo(livro,5);
                    break;
                }
                case 2:
                {
                    buscaLivroAno(livro,5);
                    break;
                }
                default:
                {
                    printf("Opcao inválida tente novamente.\n");
                    break;
                }
            }
        }while(opcao!=3);


        printf("Executar novamente (s/S para sim): ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');




    return 0;
}

void cadastroLivro(Livro vetor[], int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("Informe o titulo do livro %d: ", i+1);
        fflush(stdin);
        gets(vetor[i].titulo);
        printf("Informe o autor do livro %d: ", i+1);
        fflush(stdin);
        gets(vetor[i].autor);
        printf("Informe o ano de publicacao do livro %d: ", i+1);
        scanf("%d",&vetor[i].ano);
    }
}


void buscaLivroTitulo(Livro vetor[], int n)
{
    int i;
    char titulo[30];
    int retorno;

    printf("Informe o titulo para busca: ");
    fflush(stdin);
    gets(titulo);

    for(i=0;i<n;i++)
    {
        retorno=-1;
        retorno = strcmp(vetor[i].titulo,titulo);
        if(retorno==0)
        {
            printf("%s\n",vetor[i].titulo);
            printf("%s\n",vetor[i].autor);
            printf("%d\n",vetor[i].ano);
        }
    }
}

void buscaLivroAno (Livro vetor[], int n)
{
    int i;
    int ano;

    printf("Informe o ano para busca: ");
    scanf("%d",&ano);

    for(i=0;i<n;i++)
    {
        if(vetor[i].ano==ano)
        {
            printf("%s\n",vetor[i].titulo);
            printf("%s\n",vetor[i].autor);
            printf("%d\n",vetor[i].ano);
        }
    }
}
