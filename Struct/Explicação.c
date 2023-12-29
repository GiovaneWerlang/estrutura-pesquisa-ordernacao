#include <stdio.h>
#include <string.h>

typedef struct aluno Aluno;//define um novo nome da struct para declarar variavel, agora Aluno

struct aluno {
    char nome_aluno[30];//campos da struct
    char curso[30];
    float coeficiente;
    int ra;
};//termina com ponto e virgula



int main(void){
    struct aluno  aluno_1;
    struct aluno  aluno_2;
    char nome[30] = "maria";
    struct aluno aluno_3 = {"Maria", "Humanas", 0.8,14000};
    //atribuição
    aluno_1.ra= 10500;
    aluno_1.coeficiente = 0.7;
    strcpy(aluno_1.nome_aluno, "Emanoeli");
    strcpy(aluno_1.curso,"Engenharia de Computação");

    //scanf


    printf("Informe os dados do aluno: \n");
    printf("Nome: ");
    fflush(stdin);
    gets(aluno_2.nome_aluno);
    printf("Curso: ");
    fflush(stdin);
    gets(aluno_2.curso);
    printf("Coeficiente: ");
    scanf("%f",&aluno_2.coeficiente);
    printf("RA: ");
    scanf("%d",&aluno_2.ra);

    printf("Nome: %s\n",aluno_1.nome_aluno);
    printf("Curso: %s\n",aluno_1.curso);
    printf("Coeficiente: %.2f\n", aluno_1.coeficiente);
    printf("Ra: %d\n", aluno_1.ra);

    printf("Nome: %s\n",aluno_2.nome_aluno);
    printf("Curso: %s\n",aluno_2.curso);
    printf("Coeficiente: %.2f\n", aluno_2.coeficiente);
    printf("Ra: %d\n", aluno_2.ra);

    printf("Nome: %s\n",aluno_3.nome_aluno);
    printf("Curso: %s\n",aluno_3.curso);
    printf("Coeficiente: %.2f\n", aluno_3.coeficiente);
    printf("Ra: %d\n", aluno_3.ra);

    return(0);
}
