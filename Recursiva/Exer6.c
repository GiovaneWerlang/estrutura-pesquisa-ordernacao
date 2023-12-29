/*
    Escreva uma função recursiva para verificar se uma string é palíndromo. Ideia: verificar se:

    1º == último
    2º == penúltimo
    3º == antepenúltimo
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verifica_palindromo(char s[], int i, int j);

int main(void){
    char s[10] = "ada";
    printf("%s\n", s);
    int j = 0;
    while(s[j] != '\0'){
        j++;
    }

    int r;
    r = verifica_palindromo(s, 0, j-1);

    printf("\n%d\n", r);

    return 0;
}

int verifica_palindromo(char s[], int i, int j){
    int acc = 0;

    if(s[i] == s[j]){
        if(i == j){
            return 0;
        }
        acc += verifica_palindromo(s, i+1, j-1);
    }else{
        return 1;
    }

    return acc;
}
