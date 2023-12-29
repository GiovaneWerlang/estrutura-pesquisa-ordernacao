/*Implemente uma fun��o que copia o conte�do de uma string de origem em uma string de destino.
O prot�tipo da fun��o deve ser void copia_string(char *destino, char *origem). Utilize ponteiros.*/

#include <stdio.h>

void copia_string(char *destino, char *origem);


int main(void){
    char string[] = "xerox";
    char p[20]; //necessario dar um endere�o para o ponteiro pode ser criada um variavel com um valor para dar um endere�o tmb
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
