/*Implemente um programa que leia o nome, sigla do estado, cidade, rua e
número da casa de uma pessoa e armazene os dados em uma estrutura. Depois, imprima os dados.*/

#include <stdio.h>
#include <locale.h>

typedef struct endereco Endereco;

struct endereco{
    char nome[30];
    char sigla_estado[3];//espaço extra para \0
    char cidade[30];
    char rua[30];
    int numero;
};

int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    Endereco Pessoa;


    printf("Informe o nome: ");
    fflush(stdin);
    gets(Pessoa.nome);
    printf("Informe o estado (sigla): ");
    fflush(stdin);
    gets(Pessoa.sigla_estado);
    printf("Informe a cidade: ");
    fflush(stdin);
    gets(Pessoa.cidade);
    printf("Informe a rua: ");
    fflush(stdin);
    gets(Pessoa.rua);
    printf("Informe o numero: ");
    scanf("%d",&Pessoa.numero);

    printf("%s \n", Pessoa.nome);
    printf("%s \n", Pessoa.sigla_estado);
    printf("%s \n", Pessoa.cidade);
    printf("%s \n", Pessoa.rua);
    printf("%d \n", Pessoa.numero);

    return(0);
}
