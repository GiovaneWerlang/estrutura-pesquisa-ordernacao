#include <stdlib.h>

int main(void) {
    int x;
    int *v= malloc(sizeof(int));
    free(v);
}
