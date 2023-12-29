/*
    Escreva um programa para fazer a cria��o dos novos tipos de dados conforme solicitado abaixo:

    Hor�rio: composto de hora, minutos e segundos.
    Data: composto de dia, m�s e ano.
    Compromisso: composto de uma data, hor�rio e texto que descreve o compromisso.
    Fa�a o cadastro de alguns compromissos e imprima todos os compromissos de um m�s solicitado pelo usu�rio.*/

#include <stdio.h>

typedef struct horario Horario;
typedef struct data Data;
typedef struct compromisso Compromisso;

struct horario{
    int hora;
    int min;
    int seg;
};

struct data{
    int dia;
    int mes;
    int ano;
};

struct compromisso{
    Data dataM;
    Horario hora;
    char descricao[50];
};

int main(void){
    int i;
    int mes;
    Compromisso c[3];

    for(i=0;i<3;i++)
    {
        printf("Informe a data do compromisso (dd/mm/aaaa): ");
        scanf("%d/%d/%d",&c[i].dataM.dia, &c[i].dataM.mes, &c[i].dataM.ano);
        printf("Informe o horario do compromisso (hh/mm/ss): ");
        scanf("%d/%d/%d", &c[i].hora.hora, &c[i].hora.min, &c[i].hora.seg);
        printf("Descri��o compromisso [%d]: ", i+1);
        fflush(stdin);
        gets(c[i].descricao);
    }
    printf("Informe o mes para pesquisa de compromissos: ");
    scanf("%d",&mes);

    for(i=0;i<3;i++)
    {
        if(mes==c[i].dataM.mes){
            printf("Data %d/%d/%d\n", c[i].dataM.dia, c[i].dataM.mes, c[i].dataM.ano);
            printf("Hora %d:%d:%d\n", c[i].hora.hora, c[i].hora.min, c[i].hora.seg);
            printf("%s",c[i].descricao);
        }
    }


return 0;
}
