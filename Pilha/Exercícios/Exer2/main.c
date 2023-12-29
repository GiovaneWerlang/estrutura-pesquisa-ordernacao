#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(void){
    Pilha *p = cria_pilha_vazia();
    char expressao[21];
    fflush(stdin);
    printf("Informe uma expressão matemática: ");
    gets(expressao);

    int i=0;

    while(expressao[i] != '\0'){
        switch(expressao[i]){
            case 40:
            {
                empilha(p, expressao[i]);
                break;
            }
            case 41:
            {
                if(p->itens[p->topo].codigo==40)
                {
                    desempilha(p);
                }
                 break;
            }
            case 91:
            {
                empilha(p, expressao[i]);
                break;
            }
            case 93:
            {
                if(p->itens[p->topo].codigo==91)
                {
                    desempilha(p);
                }
                break;
            }
        }
        i++;
    }





    if(verifica_pilha_vazia(p)){
        printf("Expressão balanceada.");
    }else{
        printf("Expressão não balanceada.");
    }

    libera_pilha(p);
    return 0;
}
