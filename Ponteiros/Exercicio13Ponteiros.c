/*Implemente uma função que copia o conteúdo de uma string de origem em uma string de destino.
O protótipo da função deve ser void copia_string(char *destino, char *origem). Utilize ponteiros.*/

#include <stdio.h>

void copia_string(char *destino, char *origem);


int main(void){
    char string[] = "xerox";
    char p[20]; //necessario dar um endereço para o ponteiro pode ser criada um variavel com um valor para dar um endereço tmb
    copia_string(p , string);

    printf("%s\n", p);
    return 0;
}

void copia_string(char *destino, char *origem){

    while(*origem != '\0'){
        *destino = *origem;

        origem++;
        destino++;
    }
}
