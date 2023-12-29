#include <stdio.h>


typedef struct aluno Aluno;
struct aluno {
    char nome[50];
    int ra;
    float notas[3];
    float media;
};

void calcula_media(Aluno vetor[], int n){
    int i, j;
    int media;

    for(i=0;i<n;i++)
    {
        media = 0;
        for(j=0;j<3;j++)
        {
            media = media + vetor[i].notas[j];
        }
        vetor[i].media = media/3;
    }
}

int main(void) {
    Aluno vetor[3];
    int i, j;
    for(i = 0; i < 3; i++) {
        printf("Informe o nome: ");
        scanf("%[^\n]s", vetor[i].nome);
        printf("Informe o ra: ");
        scanf("%d", &vetor[i].ra);
        for(j = 0; j < 3; j++) {
            printf("Informe a nota %d: ", j + 1);
            scanf("%f", &vetor[i].notas[j]);
        }
        fflush(stdin);
    }
    calcula_media(vetor, 3);
    for(i = 0; i < 3; i++) {
        printf("Nome: %s\n", vetor[i].nome);
        printf("RA: %d\n", vetor[i].ra);
        for(j = 0; j < 3; j++) {
            printf("Nota %d: %.2f\n", j + 1, vetor[i].notas[j]);
        }
        printf("Media: %.2f\n", vetor[i].media);
    }

    return 0;
}
