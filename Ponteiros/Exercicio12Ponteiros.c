/*Escrever uma função para contar a quantidade de caracteres de uma string, usando ponteiros para percorre-la.*/

#include <stdio.h>

int contaCaractere(char *s);

int main(void){
    char string[] = "quantidade";
    int i = contaCaractere(string);
    printf("%d",i);


    return 0;
}

int contaCaractere(char *s){
    int i=0;
    while(*s != '\0'){
        s++;
        i++;
    }
    return i;


}
