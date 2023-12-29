### Exercícios sobre complexidade

1) Escrever na notação Big-O:

1. f(n) = 5
O(1)
2. f(n) = 3n + n + 2
O(n)
3. f(n) = 200 + n
O(n)
4. f(n) = n² + n
O(n²)
5. f(n) = 5n³ + n² + n + 20
O(n³)
6. f(n) = 2^nn + n³ + 30
O(2n)
7. f(n) = n/5 + n
O(n)
___
2) Quais seriam o melhor caso e o pior caso para uma função com objetivo de remover um item de uma lista
implementada por meio de vetores? Qual a complexidade de tempo no melhor caso?
Qual a complexidade de tempo no pior caso?
f(n) = 9
1 + 2+2n +1 +1 +1 +1 +1 +1 +1 + 2 +2n +n +1
f(n) = 12 + 5n
O(1) - O(n)

___
3) Qual a complexidade de tempo de uma função que realiza a remoção do primeiro item de uma lista
encadeada como foi vista na aula?
f(n)= 1 +1 +1+1+1+1 //funcao apenas para remover o primeiro item
1 +1 + 2 +2n + n + n + 1 + 1 + 1//funcao que remove de qualquer posição
f(n)= 7 + 4n
O(n)
___
4) Qual a complexidade de tempo de uma função que realiza a remoção do último item de uma lista
encadeada (usando ponteiro para a última célula e sem usar ponteiro para a última célula)?
1 + 1 + 2 + 2n + n + 1
5 + 3n
O(n)
1 + 1 + 2 + 2n + n + 1 + 1
6 + 3n
O(n)
___
5) Qual é a complexidade de tempo de uma função que busca uma determinada chave dentro de uma
lista (não ordenada) no pior caso? Considere a implementação por vetores.
1 + 2 + 2n
3 + 2n
O(n)
1 + 1 + 1
O(1)
___
6) Dois algoritmos (A e B) possuem complexidade de tempo n^5 e 2^n, respectivamente.
Você utilizaria o algoritmo B ao invés do A em algum caso? Por quê?
Apenas caso fosse necessário percorrer todas as combinações.
___

7) Calcular a complexidade de tempo dos trechos de código abaixo:

...
    for(i = 0; i < n; i++) //n²
        for(j = 0; j < n; j++)
            mat[i][j] = i*j;//n

    for(i = 0; i < n; i++) { //n²
        for(j = 0; j < n; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
O(n²)

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
O(n²)

...
    for(i = 0; i < n; i++)
        vet1[i] = i*i;
    for(i = 0; i < m; i++)
        vet2[i] = i+i;
...
O(n)
