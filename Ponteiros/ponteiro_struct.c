#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[30];
    int ra;
    char curso[30];
}Aluno;

void altera_curso(Aluno *a, char curso[]);
void imprime_aluno(Aluno *a);
Aluno * cadastra_aluno(char *nome, int ra, char *curso);

int main(void){
    Aluno *a1;
    //Aluno *a2;
    char nome[30], curso[30];
    int ra;
    //a2 = &a1;

    printf("Informe o nome: ");
    gets(nome);
    fflush(stdin);
    printf("Informe o ra: ");
    scanf("%d",&ra);
    printf("Informe o curso: ");
    fflush(stdin);
    gets(curso);

    a1 = cadastra_aluno(nome, ra, curso);

    //imprime_aluno(&a1);
    imprime_aluno(a1);

    altera_curso(a1, "letras");

    imprime_aluno(a1);

   /* printf("Nome: %s\n", a2 -> nome);//(*a2).nome pois o ponto tem prioridade
    printf("RA: %d\n", a2 -> ra);// -> ponteiro de estrutura
    printf("Curso: %s\n", (*a2).curso);*/

    return 0;
}

void altera_curso(Aluno *a, char curso[]){
    strcpy(a->curso, curso);
}

void imprime_aluno(Aluno *a){//melhor passar o ponteiro para nao passar uma copia de todos os items da struct
    printf("Nome: %s\n", a->nome);
    printf("RA: %d\n", a->ra);
    printf("Curso: %s\n", a->curso);
}

Aluno * cadastra_aluno(char *nome, int ra, char *curso){
    Aluno *a = malloc(sizeof(Aluno));//importante alocar endereço para o ponteiro para guardar
    strcpy(a->nome, nome);
    a->ra = ra;
    strcpy(a->curso, curso);
    return a;
}
