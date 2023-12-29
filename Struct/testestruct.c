#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    char Nome[50];
    int RA;
    float coeficiente;
};

int main(void)
{
    char repetir;
    int i, n=5;
    struct Aluno alunos[n];

    do
    {
        system("cls");
        //
        for(i=0;i<n;i++)
        {
            printf("Nome: ");
            fflush(stdin);
            gets(alunos[i].Nome);
            printf("RA: ");
            scanf("%d",&alunos[i].RA);
            printf("Coeficiente: ");
            scanf("%d",&alunos[i].coeficiente);
        }
        for(i=0;i<n;i++)
        {
            printf("\nNome: %s\n",alunos[i].Nome);
            printf("RA: %d\n",alunos[i].RA);
            printf("Coeficiente: %d\n",alunos[i].coeficiente);
        }
        printf("\nExecutar novamente (s/s para sim): ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
