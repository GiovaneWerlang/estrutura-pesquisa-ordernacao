/*
    Faça um programa que controla o consumo de energia dos eletrodomésticos de uma casa:

    Leia e armazene os dados 5 eletrodomésticos que contém nome, potência (em kW) e tempo médio ativo
    por dia (em horas);
    Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo relativo de cada
    eletrodoméstico (consumo/consumo total) neste período de tempo. Apresente este último dado em porcentagem.
*/

#include <stdio.h>

typedef struct eletrodomesticos eletro;

struct eletrodomesticos{
    char nome[30];
    float potencia;
    int tempo;
};

int main(void)
{
    eletro eletros[5];
    int i;

    for(i=0;i<5;i++)
    {
        printf("Informe o nome do eletrodomestico: \n");
        fflush(stdin);
        gets(eletros[i].nome);
        printf("Informe a potencia do eletrodomestico: \n");
        scanf("%f",&eletros[i].potencia);
        printf("Informe o tempo media ativo em horas: \n");
        scanf("%d",&eletros[i].tempo);
    }

    int tempo;

    do
    {
        printf("Informe a quantidade de dias: ");
        scanf("%d",&tempo);
    }while(tempo<=0);

    float consumoTotal=0; // consumo = watts * horas

    for(i=0;i<5;i++)
    {
        consumoTotal = consumoTotal + (eletros[i].potencia * eletros[i].tempo);
    }

    printf("Consumto total: %.2f\n", consumoTotal);

    for(i=0;i<5;i++)
    {
        printf("\nPorcentagem do eletrodomestico %s = %.2f", eletros[i].nome,((eletros[i].potencia*eletros[i].tempo)* 100)/consumoTotal);
    }


}
