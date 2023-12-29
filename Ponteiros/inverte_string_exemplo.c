#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * inverte_string(char *string);

int main(void){
    char string[] = "ponteiros";
    char *invertida = inverte_string(string);
    printf("%s", invertida);

    return 0;
}

char * inverte_string(char *string){
    int t = strlen(string);
    char *invertida = malloc(t * sizeof(char));
    int i;
    char j;
    j=0;
    /*for(i=t-1; i>=0; i--){
        invertida[j] = string[i];
        j++;
    }*/
    int x=(t-1);
    for(i=0;i<t;i++){
        j = string[i];
        string[i] = string[x-i];
        string[x-i] = j;
    }
    invertida[j] = '\0';

    return string;
}
