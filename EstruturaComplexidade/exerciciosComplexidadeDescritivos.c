### Exerc�cios sobre complexidade

1) Escrever na nota��o Big-O:

1. f(n) = 5
O(1)
2. f(n) = 3n + n + 2
O(n)
3. f(n) = 200 + n
O(n)
4. f(n) = n� + n
O(n�)
5. f(n) = 5n� + n� + n + 20
O(n�)
6. f(n) = 2^nn + n� + 30
O(2n)
7. f(n) = n/5 + n
O(n)
___
2) Quais seriam o melhor caso e o pior caso para uma fun��o com objetivo de remover um item de uma lista
implementada por meio de vetores? Qual a complexidade de tempo no melhor caso?
Qual a complexidade de tempo no pior caso?
f(n) = 9
1 + 2+2n +1 +1 +1 +1 +1 +1 +1 + 2 +2n +n +1
f(n) = 12 + 5n
O(1) - O(n)

___
3) Qual a complexidade de tempo de uma fun��o que realiza a remo��o do primeiro item de uma lista
encadeada como foi vista na aula?
f(n)= 1 +1 +1+1+1+1 //funcao apenas para remover o primeiro item
1 +1 + 2 +2n + n + n + 1 + 1 + 1//funcao que remove de qualquer posi��o
f(n)= 7 + 4n
O(n)
___
4) Qual a complexidade de tempo de uma fun��o que realiza a remo��o do �ltimo item de uma lista
encadeada (usando ponteiro para a �ltima c�lula e sem usar ponteiro para a �ltima c�lula)?
1 + 1 + 2 + 2n + n + 1
5 + 3n
O(n)
1 + 1 + 2 + 2n + n + 1 + 1
6 + 3n
O(n)
___
5) Qual � a complexidade de tempo de uma fun��o que busca uma determinada chave dentro de uma
lista (n�o ordenada) no pior caso? Considere a implementa��o por vetores.
1 + 2 + 2n
3 + 2n
O(n)
1 + 1 + 1
O(1)
___
6) Dois algoritmos (A e B) possuem complexidade de tempo n^5 e 2^n, respectivamente.
Voc� utilizaria o algoritmo B ao inv�s do A em algum caso? Por qu�?
Apenas caso fosse necess�rio percorrer todas as combina��es.
___

7) Calcular a complexidade de tempo dos trechos de c�digo abaixo:

...
    for(i = 0; i < n; i++) //n�
        for(j = 0; j < n; j++)
            mat[i][j] = i*j;//n

    for(i = 0; i < n; i++) { //n�
        for(j = 0; j < n; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
O(n�)

...
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            mat[i][j] = i*j;

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
...
O(n�)

...
    for(i = 0; i < n; i++)
        vet1[i] = i*i;
    for(i = 0; i < m; i++)
        vet2[i] = i+i;
...
O(n)
