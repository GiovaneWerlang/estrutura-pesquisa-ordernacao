typedef struct r3 R3;

R3 ** cria_r3(int t);

void libera_r3(R3 **ponto, int t);
void soma_r3(R3 **ponto, int a, int b);
void escalar_r3(R3 **ponto, int a, int b);
void vetorial_r3(R3 **ponto, int a , int b);
void imprime_r3(R3 **ponto, int t);
void popula_r3(R3 *ponto, int a, int b, int c);
