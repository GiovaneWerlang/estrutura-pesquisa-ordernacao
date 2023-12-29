/*Faça um programa que armazene em uma estrutura os dados de um funcionário de uma empresa,
compostos de: Nome, Idade, Sexo (M/F), CPF, Data de Nascimento, Código do Setor onde trabalha (0-99),
Cargo que ocupa e Salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura e
exibidos na tela. Obs.: crie uma estrutura para armazenar a data de nascimento e use esta estrutura
dentro da estrutura do cadastro.*/

#include <stdio.h>

typedef struct data Data;
typedef struct dados Dados;

struct data{
    int dia;
    int mes;
    int ano;
};

struct dados{
    char nome[50];
    int idade;
    Data data_nasc;
    char sexo;
    int cpf;
    int codigo;
    char cargo[50];
    float salario;
};

int main(void){
    Dados func;

    printf("Informe o nome do funcionario: ");
    fflush(stdin);
    gets(func.nome);
    printf("Informe a idade do funcionario: ");
    scanf("%d",&func.idade);

        printf("Informe o sexo do funcionario (M/F): ");
        fflush(stdin);
        scanf("%c",&func.sexo);
        //getchar();
        //gets(func.sexo);

    printf("Informe a data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d",&func.data_nasc.dia, &func.data_nasc.mes, &func.data_nasc.ano);
    do{
        printf("Informe o codigo do setor: ");
        scanf("%d",&func.codigo);
    }while(func.codigo<0||func.codigo>99);
    printf("Informe o nome do cargo: ");
    fflush(stdin);
    gets(func.cargo);
    printf("Informe o salario do funcionario: ");
    scanf("%f",&func.salario);

    printf("Nome: %s\n",func.nome);
    printf("Idade: %d\n",func.idade);
    printf("Sexo: %c\n",func.sexo);
    printf("Nascimento: %d/%d/%d\n", func.data_nasc.dia, func.data_nasc.mes, func.data_nasc.ano);
    printf("Codigo: %d\n",func.codigo);
    printf("Cargo: %s\n", func.cargo);
    printf("Salario: %f\n", func.salario);

    return 0;
}
