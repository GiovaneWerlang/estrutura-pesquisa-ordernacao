/*Faça um programa que leia um vetor com os dados de 5 carros: modelo, marca, ano e preço.
Leia um valor p e mostre as informações de todos os carros com preço menor que p. Repita este
processo até que seja lido um valor p = 0.*/

#include <stdio.h>

typedef struct carro Carros;

struct carro{
    char modelo[30];
    char marca[30];
    int ano;
    float preco;
};

int main(void)
{
    Carros veiculo[5];
    float preco;
    int i;

    for(i=0;i<5;i++)
    {
        printf("Informe o modelo do carro %d: ", i+1);
        fflush(stdin);
        gets(veiculo[i].modelo);
        printf("Informe a marca do carro %d: ", i+1);
        fflush(stdin);
        gets(veiculo[i].marca);
        printf("Informe o ano de fabricacao do carro %d: ", i+1);
        scanf("%d",&veiculo[i].ano);
        printf("Informe o preco do carro %d: ", i+1);
        scanf("%f",&veiculo[i].preco);
    }

    do
    {
        printf("Informe o preco para verificar os mais baratos: ");
        scanf("%f",&preco);
        if(preco!=0)
        {
            for(i=0;i<5;i++)
            {
                if( veiculo[i].preco < preco)
                {
                    printf("%s\n",veiculo[i].modelo);
                    printf("%s\n",veiculo[i].marca);
                    printf("%d \n", veiculo[i].ano);
                    printf("%.2f \n", veiculo[i].preco);
                }
            }
        }
    }while(preco!=0);


}
