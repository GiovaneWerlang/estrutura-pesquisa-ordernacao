#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct item{
    int codigo;;
    // outros campos para guardar
    //nome, media
};

struct lista {
    Item itens[MAXTAM];
    int ultimo;
};

Lista * cria_lista_vazia(){
    Lista *l = (Lista*)malloc(sizeof(Lista));
    l->ultimo = -1;
    return l;
}

void libera_lista(Lista *l){
    free(l);
}

int  verifica_lista_cheia(Lista *l){
    return l->ultimo == MAXTAM -1;//Retorna 1 se está cheia
}

//Altere a função que adiciona um item no fim da lista para que não seja permitido adicionar
//itens repetidos (itens com chaves/códigos iguais).
void insere_item_lista(Lista *l, int codigo){
    if(verifica_lista_cheia(l)){
        printf("Impossível inserir o item, a lista está cheia.\n");
        return;
    }
    if(busca_item_por_codigo(l, codigo)!= -1){ //usando busca
        printf("Não é permitida a inserção de itens repetidos.\n");
        return;
    }
    Item novo;
    novo.codigo = codigo;
    l->ultimo++;
    l->itens[l->ultimo] = novo;

}
//Crie uma função que permite adicionar um item em uma posição qualquer da lista.
void insere_item_lista_posicao(Lista *l, int codigo, int indice){
    if(verifica_lista_cheia(l)){
        printf("Impossível inserir o item, a lista está cheia.\n");
        return;
    }
    Item novo;
    Item copo;
    novo.codigo = codigo;
    int i;
    for(i=indice; i < l->ultimo; i++){
        copo = l->itens[i];
        l->itens[i] = novo;
        novo = l->itens[i+1];
        l->itens[i+1] = copo;
    }
    l->ultimo++;
}
//Crie uma função que insere os itens em uma lista de forma ordenada.
void insere_item_lista_ordenando(Lista *l, int codigo){
    if(verifica_lista_cheia(l)){
        printf("Impossível inserir o item, a lista está cheia.\n");
        return;
    }
    Item novo;
    novo.codigo = codigo;
    l->itens[l->ultimo + 1] = novo;
    l->ultimo++;
    int i;
    for(i=l->ultimo;i > 0;i--){
        if(l->itens[i].codigo < l->itens[i-1].codigo){
            novo = l->itens[i-1];
            l->itens[i-1] = l->itens[i];
            l->itens[i] = novo;
        }
    }
}

void imprime_lista(Lista *l){
    int i;
    for(i=0;i <= l->ultimo; i++){
        printf("Código: %d\n", l->itens[i].codigo);
    }
}

int verifica_lista_vazia(Lista *l){
    return l->ultimo == -1;
}

int busca_item_por_codigo(Lista *l, int codigo){
    int i=0;
    while(i <= l->ultimo && l->itens[i].codigo != codigo){
        i++;
    }
    if(i<= l->ultimo){
        return i;
    }
    else{
        return -1;
    }
}

void retira_item_por_codigo(Lista *l, int codigo){
    if(verifica_lista_vazia(l) || busca_item_por_codigo(l, codigo) == -1){
    printf("Lista vazia ou item não existe.\n");
    return;
    }
    int i;
    int indice = busca_item_por_codigo(l, codigo);
    for(i=indice; i < l->ultimo; i++ ){
        l->itens[i] = l->itens[i+1];
    }
    l->ultimo--;
}
//Crie uma função chamada copia_lista que recebe duas listas. A primeira deve ser uma lista vazia
//e a segunda não. A função deve copiar os itens da segunda lista na primeira lista.
void copia_lista(Lista *origem, Lista *destino){
    if(verifica_lista_vazia(destino)){
        int i;
        for(i=origem->ultimo; i>=0; i--){
            destino->itens[i] = origem->itens[i];
        }
    }else{
        printf("\nLista destino não está vazia.");
    }
    destino->ultimo = origem->ultimo;
}
//Crie uma função que recebe duas listas. Considere que dentro de uma lista não existem itens repetidos
//(você já tratou para que não seja permitido adicionar itens iguais). Sua função deve
//retornar uma terceira lista que representa a intersecção entre as duas listas recebidas.
Lista * intersecao_entre_listas(Lista *A, Lista *B){
    Lista *I = cria_lista_vazia();
    int i;
    int j;
    for(i=0; i <= A->ultimo; i++){
        for(j=0; j <= B->ultimo; j++){
            if(A->itens[i].codigo == B->itens[j].codigo){
                //I->itens[i] = A->itens[i];
                //I->ultimo++;
                insere_item_lista_ordenando(I, A->itens[i].codigo);
            }
        }
    }
    return I;
}
/*Crie uma função que recebe duas listas. Considere que dentro de uma lista não existem itens repetidos.
Sua função deve retornar uma terceira lista que representa a união entre as duas listas recebidas.
Assegure-se de que a terceira lista não tenha itens repetidos.*/
Lista * uniao_entre_listas(Lista *A, Lista *B){
    Lista *U = cria_lista_vazia();
    int i;

    for(i=0;i <= A->ultimo; i++){
        insere_item_lista_ordenando(U, A->itens[i].codigo);
    }
    for(i=0;i <= B->ultimo; i++){
        insere_item_lista_ordenando(U, B->itens[i].codigo);
    }
    return U;
}

//Crie uma função que percorre uma lista de números inteiros e diz se ela está ordenada ou não.
void checa_lista_ordenada(Lista *l){
    int i;
    for(i=0;i< l->ultimo; i++){
        if(l->itens[i]>l->itens[i+1]){
            printf("Não está ordenada. ");
            i=l->ultimo;
        }
    }

}
