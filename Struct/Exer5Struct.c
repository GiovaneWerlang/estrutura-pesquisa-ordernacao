/*Faça um programa que leia os dados de 10 alunos (nome, matrícula e média final), armazenando em um
vetor. Uma vez lidos os dados, divida estes dados em 2 novos vetores, o vetor dos aprovados e o vetor dos
reprovados, considerando a média mínima para a aprovação como sendo 5.0. Exibir na tela os dados do vetor
de aprovados, seguido dos dados do vetor de reprovados.*/

#include <stdio.h>

typedef struct aluno Aluno;

struct aluno{
    char nome[30];
    int matricula;
    float media;
};

int main(void)
{
    Aluno alunos[10];

    int i;

    for(i=0;i<10;i++)
    {
        printf("Informe o nome do alunos %d: ", i+1);
        fflush(stdin);
        gets(alunos[i].nome);

        do
        {
            printf("Informe a matricula do aluno %d:", i+1);
            scanf("%d",&alunos[i].matricula);
        }while(alunos[i].matricula<=0);

        do
        {
            printf("Informe a media final do aluno %d:", i+1);
            scanf("%f",&alunos[i].media);
        }while(alunos[i].media<=0);
    }
        int j=0;
        int k=0;

        for(i=0;i<10;i++)
        {
            if(alunos[i].media>=5.0)
            {
                j++;
            }
            else
            {
                k++;
            }
        }

        Aluno aprovados[j];
        Aluno reprovados[k];
        int l=j;
        int m=k;


        j=0;
        k=0;

        for(i=0;i<10;i++)
        {
            if(alunos[i].media>=5.0)
            {
                aprovados[j] = alunos[i];
                j++;
            }
            else
            {
                reprovados[k] = alunos[i];
                k++;
            }
        }

        for(i=0;i<j;i++)
        {
            printf("%s\n",aprovados[i].nome);
            printf("%d\n", aprovados[i].matricula);
            printf("%.2f\n",aprovados[i].media);
        }
        for(i=0;i<k;i++)
        {
            printf("%s\n",reprovados[i].nome);
            printf("%d\n", reprovados[i].matricula);
            printf("%.2f\n",reprovados[i].media);
        }

    return(0);
}
