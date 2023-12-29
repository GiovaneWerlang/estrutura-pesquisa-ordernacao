/*Implemente uma função que concatena uma string "b" no final de uma string "a".
O protótipo da função deve ser void concatena_strings(char *sa, char *sb). Utilize ponteiros.*/

#include <stdio.h>

void concatena_strings(char *sa, char *sb);

int main(void){
    char stringA[20] = "Boba";
    char stringB[20] = " Fett";
    concatena_strings(stringA, stringB);

    printf("%s", stringA);

    return 0;
}

void concatena_strings(char *sa, char *sb){
    while(*sa != '\0'){
        sa++;
    }
    while(*sb != '\0'){
        *sa = *sb;

        sa++;
        sb++;
        if(*sb=='\0'){
            *sa =*sb;
            break;
        }
    }

}
