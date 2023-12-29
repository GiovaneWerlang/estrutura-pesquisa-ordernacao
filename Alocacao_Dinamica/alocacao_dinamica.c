#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//free em variaveis que nao serao mais usadas, e no fim da execução
typedef struct{
    float x;
    float y;
}Ponto;
int main(){
    int *p =malloc(sizeof(int));

    //int *v = malloc(10 * sizeof(int)); //equivalente a int v[10]
    int *v = calloc(10 , sizeof(int));//se der pau adicione (int*) antes do calloc
    char *string = malloc(30 * sizeof(char));
    int tamanho;

    printf("Informe uma string: ");
    fflush(stdin);
    gets(string);
    printf("%s\n",string);

    tamanho = strlen(string);
    printf("Quantidade de caracteres: %d\n", tamanho);
    string = realloc(string, tamanho * sizeof(char));//poderia aumentar substituindo tamanho por 50 por ex
    printf("%s", string);

    /*int i;
    for(i=0;i<10;i++){
        printf("%d\t", v[i]);
    }

    Ponto *pto = malloc(sizeof(Ponto));*/


    return 0;
}
