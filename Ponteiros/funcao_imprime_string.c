#include <stdio.h>

void imprime_string(char s[]);

int main(void){
    char string[] = "ponteiros e strings";
    imprime_string(string);


    return 0;
}

void imprime_string(char s[]){//pode ser *s
    while(*s != '\0'){
        printf("%c",*s);//imprime conteudo
        s++;//aumenta o endere�o, pode ser ++ por que a fun��o recebe a copia
    }
}
