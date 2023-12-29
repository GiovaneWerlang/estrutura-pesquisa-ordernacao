/*
    Fa�a um programa que controla o consumo de energia dos eletrodom�sticos de uma casa:

    Leia e armazene os dados 5 eletrodom�sticos que cont�m nome, pot�ncia (em kW) e tempo m�dio ativo
    por dia (em horas);
    Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo relativo de cada
    eletrodom�stico (consumo/consumo total) neste per�odo de tempo. Apresente este �ltimo dado em porcentagem.
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
