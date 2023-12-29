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
    Aluno aluno_1, aluno_2;
    strcpy(aluno_1.nome , "Giovane");
    strcpy(aluno_1.curso, "ADS");
    aluno_1.ra = 26543;

    aluno_2 = aluno_1;//somente estrutura igual dentro da mesma struct

    printf("Nome: %s\n",aluno_2.nome);
    printf("Curso: %s\n",aluno_2.curso);
    printf("RA: %d\n",aluno_2.ra);

}
