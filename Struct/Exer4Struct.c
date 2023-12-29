/*
    Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a
    matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.

    Permita ao usuário entrar com os dados de 5 alunos;
    Encontre o aluno com maior nota da primeira prova;
    Encontre o aluno com maior média geral;
    Encontre o aluno com menor média geral;
    Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.*/

#include <stdio.h>
#include <string.h>

typedef struct alunos boletim;

struct alunos{
    int matricula;
    char nome[30];
    float notas[3];
};

int main(void)
{
    boletim aluno[5];
    int i;
    int j;

    for(i=0;i<5;i++)
    {
        printf("Informe a matricula: ");
        scanf("%d",&aluno[i].matricula);
        printf("Informe o nome: ");
        fflush(stdin);
        gets(aluno[i].nome);
        for(j=0;j<3;j++)
        {
            printf("Informe a nota %d: ",j+1);
            scanf("%f",&aluno[i].notas[j]);
        }
    }

    int maiorP=0;
    int maiorM=0;
    int menorM=10;
    float aux=0, aux2=0, aux3=10;

    for(i=0;i<5;i++)
    {
        if(aluno[i].notas[0]>aux)
        {
            maiorP=i;
            aux=aluno[i].notas[0];
        }
        if(((aluno[i].notas[0]+aluno[i].notas[1]+aluno[i].notas[2])/3.0)>aux2)
        {
            maiorM=i;
            aux2=(aluno[i].notas[0]+aluno[i].notas[1]+aluno[i].notas[2])/3;
        }
        if(((aluno[i].notas[0]+aluno[i].notas[1]+aluno[i].notas[2])/3.0)<aux3)
        {
            menorM=i;
            aux3=(aluno[i].notas[0]+aluno[i].notas[1]+aluno[i].notas[2])/3.0;
        }
    }

    printf("\nMaior nota na primeira prova: aluno %d", maiorP+1);
    printf("\nMaior media: aluno %d", maiorM+1);
    printf("\nMenor media: aluno %d", menorM+1);

    for(i=0;i<5;i++)
    {
        if(((aluno[i].notas[0]+aluno[i].notas[1]+aluno[i].notas[2])/3.0)>6)
        {
            printf("\nAluno %d Aprovado", i+1);
        }
        else
        {
            printf("\nAluno %d Reprovado", i+1);
        }
    }

}
