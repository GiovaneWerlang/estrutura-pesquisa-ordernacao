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
        s++;//aumenta o endereço, pode ser ++ por que a função recebe a copia
    }
}
