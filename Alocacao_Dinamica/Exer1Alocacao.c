//Identificar os problemas dos códigos abaixo:
//a)
#include <stdlib.h>
main() {
    int v[10];
    free(v); // alocacao de memoria foi estatica, nao tem como liberar
}
b)

main() {
    int x, *p;
    p = malloc(sizeof(int));
    p = &x;
    free(p);
}
c)

 main(){
   int *v;
   v = malloc (10 * sizeof (int));
   free(v+1); // endereco errado
}
