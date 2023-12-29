#include <stdio.h>

typedef struct data Data;
typedef struct aniversario Aniversario;

struct data{
    int dia;
    int mes;
    int ano;
};

struct aniversario{
    char nome[50];
    Data data_nascimento;
};

int main(void){
    Aniversario p1;
    int idade;

    printf("Informe o nome da pessoa: ");
    fflush(stdin);
    gets(p1.nome);
    printf("Informe a data do aniversario dd/mm/aaaa: ");
    scanf("%d/%d/%d",&p1.data_nascimento.dia, &p1.data_nascimento.mes, &p1.data_nascimento.ano);

    idade = 2019 - p1.data_nascimento.ano;

    printf("O aniversario de %s é: %d/%d", p1.nome, p1.data_nascimento.dia, p1.data_nascimento.mes);
    printf("\nIdade em 2019: %d\n", idade);

return 0;
}
