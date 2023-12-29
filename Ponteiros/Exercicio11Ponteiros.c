/*Escreva uma função que imprime uma string. Percorra os itens da string através de aritmética de ponteiros.*/

#include <stdio.h>

void imprimeString(char *s);

int main(void){
    char string[] = "teste imprime";
    imprimeString(string);

    return 0;
}

void imprimeString(char *s){
    while(*s != '\0'){
        printf("%c", *s);
        s++;
    }

}
