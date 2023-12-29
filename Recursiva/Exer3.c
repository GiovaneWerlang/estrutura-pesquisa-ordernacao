/*
    Elabore uma fun��o recursiva para imprimir uma string ao contr�rio. Exemplo:

Entrada:
bom dia
Sa�da:
aid mob
*/

#include <stdio.h>
#include <stdlib.h>

void imprime_string_invertida_recursiva(char string[], int tam){
    if(tam==0){
            printf("%c", string[tam]);
        return;
    }
    printf("%c", string[tam]);
    imprime_string_invertida_recursiva(string, tam-1);


}

int main(void){
    char string[50] = "bom dia";
    printf("%s\n",string);
    imprime_string_invertida_recursiva(string, 50);


    return 0;
}
