/*Construa uma estrutura aluno com nome, número de matrícula, curso e coeficiente.
Leia do usuário a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.*/
#include <stdio.h>

typedef struct aluno Aluno;

struct aluno{
    char nome[30];
    int matricula;
    char curso[30];
    int coeficiente;

};

int main(void)
{
    Aluno doente[5];
    int i;

    for(i=0;i<5;i++)
    {
        printf("Nome aluno %d: ",i+1);
        fflush(stdin);
        gets(doente[i].nome);
        printf("Matricula aluno %d:",i+1);
        scanf("%d",&doente[i].matricula);
        printf("Curso aluno %d: ",i+1);
        fflush(stdin);
        gets(doente[i].curso);
        printf("Coenficiente aluno %d:", i+1);
        scanf("%d",&doente[i].coeficiente);
    }


    printf("Nome\t\tMatricula\tCurso\t\tCoeficiente\n");
    for(i=0;i<5;i++)
    {
        printf("%s\t\t%d\t\t%s\t\t%d\n",doente[i].nome,doente[i].matricula,doente[i].curso,doente[i].coeficiente);
    }
}
