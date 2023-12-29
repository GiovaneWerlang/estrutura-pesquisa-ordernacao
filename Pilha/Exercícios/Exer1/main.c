/*Crie um programa que lê uma expressão na notação polonesa inversa e calcula o resultado da expressão.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"


int main(void){
    Pilha *p = cria_pilha_vazia();
    char expressao[10];
    printf("Informe uma expressão matemática com limite de 9 itens: ");
    fflush(stdin);
    gets(expressao);

    int i=0;
    char n1, n2, n3;

    /*    42*     43+    45-    47/   */
    for(i=0; expressao[i] != '\0'; i++){
        if(expressao[i] >=48 && expressao[i] <=57){
            empilha(p, expressao[i]-48);

        }
        else{
                //printf("teste");
            n2 = p->itens[p->topo].codigo;
            desempilha(p);
            n1 = p->itens[p->topo].codigo;
            desempilha(p);

            switch(expressao[i]){
                case 42:
                {
                    n3 = n1 * n2;
                    empilha(p, n3);
                    break;
                }
                case 43:
                {
                    n3 = n1 + n2;
                    empilha(p, n3);
                    break;
                }
                case 45:
                {
                    n3 = n1 - n2;
                    empilha(p, n3);
                    break;
                }
                case 47:
                {
                    n3 = n1 / n2;
                    empilha(p, n3);
                    break;
                }

            }

        }
    }
    imprime_pilha(p);

    libera_pilha(p);
    return 0;
}
