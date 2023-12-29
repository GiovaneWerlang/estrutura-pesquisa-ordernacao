/*Faça um programa que gerencie o estoque de um mercado e:
Leia e armazene um vetor de 5 produtos, com os dados: código, nome, preço e quantidade.
Leia um pedido, composto por um código de produto e quantidade.
Localize este código no vetor e, se houver quantidade suficiente para atender ao pedido integralmente,
atualize o estoque e informe para o usuário que o pedido foi realizado com sucesso. Se não, informe que o
pedido não foi concluído por falta de estoque.*/

#include <stdio.h>

typedef struct produto Produto;

struct produto{
    int codigo;
    char nome[30];
    float preco;
    int qtde;
};

int main(void){

    Produto produtos[5];
    int i;

    for(i=0;i<5;i++)
    {
        do
        {
            printf("Informe o codigo do produto %d: ", i+1);
            scanf("%d",&produtos[i].codigo);
        }while(produtos[i].codigo<=0);
        printf("Informe o nome do produto %d: ", i+1);
        fflush(stdin);
        gets(produtos[i].nome);
        do
        {
            printf("Informe o preco do produto %d: ", i+1);
            scanf("%f",&produtos[i].preco);
        }while(produtos[i].preco<=0);
        do
        {
            printf("Informe a quantidade em estoque do produto %d: ", i+1);
            scanf("%d",&produtos[i].qtde);
        }while(produtos[i].qtde<=0);
    }

    int codigoP;
    int qtdeP;

        do
        {
            printf("Informe o codigo do produto que deseja: ");
            scanf("%d",&codigoP);
        }while(codigoP<=0);
        do
        {
            printf("Informe a quantidade do produto que deseja: ");
            scanf("%d",&qtdeP);
        }while(qtdeP<=0);

    for(i=0;i<5;i++)
    {
        if(codigoP==produtos[i].codigo)
        {
            if(qtdeP<=produtos[i].qtde)
            {
                produtos[i].qtde = produtos[i].qtde - qtdeP;
            }
            else
            {
                i=5;
                printf("Pedido não concluido por falta de estoque. ");
            }
        }
    }

return 0;
}
