/*
    Seu objetivo neste exerc�cio � fazer um programa para simular uma agenda de telefones.
    Para cada pessoa na agenda, devem-se ter os seguintes dados: Nome, E-mail,
    Endere�o (contendo campos estado (sigla), cidade, rua e n�mero da casa), Telefone (contendo campos para DDD e n�mero)
    e Data de anivers�rio (contendo campos para dia, m�s, ano). Etapas a serem realizadas:

    Definir a estrutura acima (considerando que Endere�o, Telefone e Data de anivers�rio devem
                               ser estruturas separadas que ser�o utilizadas pela estrutura de agenda).
    Declarar um vetor do tipo agenda com capacidade de agendar at� 100 nomes.
    Definir uma fun��o insere_pessoa(): Insere por ordem alfab�tica de nome. Dica: para inserir
    em ordem alfab�tica, voc� pode ir comparado o nome do cadastro a ser inserido com os nomes dos
    cadastros j� existentes no vetor. Para isso, use a fun��o strcmp() que serve para comparar duas
    strings. Veja mais sobre a fun��o aqui: http://www.br-c.org/doku.php?id=strcmp.
    Definir uma fun��o imprime_agenda(): Imprime as informa��es de todos os contatos.
    Definir uma fun��o busca_primeiro_nome(): Imprime os dados da pessoa com esse nome (se tiver mais
    de uma pessoa com o nome, imprime para todas).
    Definir uma fun��o busca_mes(): Imprime os dados de todas as pessoas que fazem anivers�rio nesse m�s.
    Definir uma fun��o busca_dia_mes(): Imprime os dados de todas as pessoas que fazem anivers�rio nesse dia e m�s.
    Definir uma fun��o retira_pessoa(): Retira todos os dados dessa pessoa e desloca todos os elementos seguintes
    do vetor para a posi��o anterior.*/

#include <stdio.h>

typedef struct endereco Endereco;
typedef struct data Data;
typedef struct telefone Telefone;
typedef struct agenda Agenda;

struct endereco{
    char estado[2];
    char cidade[50];
    char rua[50];
    int numero;
};

struct data{
    int dia;
    int mes;
    int ano;
};

struct telefone{
    char ddd[5];
    int numero;
};

struct agenda{
    char nome[50];
    char email[50];
    Endereco end;
    Telefone numero;
    Data data_nasc;
};

void insere_pessoa(Agenda agendas[]);//insire nome por ordem alfabetica
void imprime_agenda(void);//imprime informacoes de todos os contatos
void busca_primeiro_nome(char nome[]);//imprime dados da pessoa com esse nome
void busca_mes(int mes);//Imprime os dados de todas as pessoas que fazem anivers�rio nesse m�s
void busca_dia_mes(int dia, int mes); // Imprime os dados de todas as pessoas que fazem anivers�rio nesse dia e m�s
void retira_pessoa(char nome[]);// Retira todos os dados dessa pessoa e desloca todos os elementos seguintes do vetor para a posi��o anterior.

int main(void)
{
    Agenda agendas[100];


    return 0;
}

void insere_pessoa(Agenda agendas[])
{
    int i;
    int j;

    for(i=0;i<100;i++)
    {
        for(j=0;j<100;j++)
        {
            printf("Informe os dados para cadastro: \n");
            printf("Nome: ");
            fflush(stdin);
            gets(agendas[i].nome);
            printf("Email: ");
            fflush(stdin);
            gets(agendas[i].email);
            printf("Estado: (SC)");
            fflush(stdin);
            gets(agendas[i].end.estado);
            printf("Cidade: ");
            fflush(stdin);
            gets(agendas[i].end.cidade);
            printf("Rua: ");
            fflush(stdin);
            gets(agendas[i].end.rua);
            printf("N�mero: ");
            scanf("%d",&agendas[i].end.numero);
            printf("DDD: (00)");
            scanf("%d",&agendas[i].numero.ddd);
            printf("Telefone: ");
            scanf("%d",&agendas[i].numero.numero);
            printf("Data de anivers�rio: (dd/mm/yyyy)");
            scanf("%d/%d/%d",&agendas[i].data_nasc.dia,&agendas[i].data_nasc.mes,&agendas[i].data_nasc.ano);
        }
    }
}
void imprime_agenda(void)
{

}
void busca_primeiro_nome(char nome[])
{

}
void busca_mes(int mes)
{

}
void busca_dia_mes(int dia, int mes)
{

}
void retira_pessoa(char nome[])
{

}
