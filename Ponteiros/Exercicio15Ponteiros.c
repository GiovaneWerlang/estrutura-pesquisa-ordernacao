/*Implemente uma fun��o que compara duas strings. O prot�tipo da fun��o deve ser: int compara_string(char *sa, char *sb),
retornando um n�mero inteiro para indicar se s�o iguais ou n�o. Utilize ponteiros.*/

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
