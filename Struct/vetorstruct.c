#include <stdio.h>
#include <string.h>

typedef struct aluno Aluno;

struct aluno{
    char nome[30];
    char curso[30];
    int ra;
};

int main(void)
{
    Aluno vetor_alunos[10];
    int i;

    for(i=0;i<10;i++)
    {
        printf("Informe o nome: ");
        fflush(stdin);
        gets(vetor_alunos[i].nome);
        printf("Informe o curso: ");
        fflush(stdin);
        gets(vetor_alunos[i].curso);
        printf("Informe o RA: ");
        scanf("%d",&vetor_alunos[i].ra);
    }

    for(i=0;i<10;i++)
    {
        printf("Nome: %s\n", vetor_alunos[i].nome);
        printf("Curso: %s\n", vetor_alunos[i].curso);
        printf("RA: %d\n",vetor_alunos[i].ra);
    }
}
