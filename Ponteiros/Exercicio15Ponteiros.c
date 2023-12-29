/*Implemente uma função que compara duas strings. O protótipo da função deve ser: int compara_string(char *sa, char *sb),
retornando um número inteiro para indicar se são iguais ou não. Utilize ponteiros.*/

#include <stdio.h>

int compara_string(char *sa, char *sb);

int main(void){
    char sa[] = "teste1";
    char sb[] = "teste2";
    int res = compara_string(sa, sb);
    printf("%d\n", res);


    return 0;
}

int compara_string(char *sa, char *sb){
    int i = 0;

    while(*sa != '\0'){
        if(*sa != *sb){
            i=1;
            return i;
        }
        else{
            sa++;
            sb++;
        }
    }
    return i;
}
