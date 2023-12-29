#include <stdio.h>

char * busca_caractere(char *s, char c);

int main(void){
    char string[] = "strings e ponteiros";
    char letra = 'g';
    char *p = busca_caractere(string, letra);// nao é necessario & pois a funcao já retorna ponteiro

    if(*p == '\0'){
        printf("Não encontrou.");
    }
    else{
        printf("%s", p);
    }
    printf("\n%s", string);

    return 0;
}

char * busca_caractere(char *s, char c){//tipo do ponteiro e * para retornar ponteiro
    while(*s != '\0' && *s != c){
        s++;
    }
    return s;
}
