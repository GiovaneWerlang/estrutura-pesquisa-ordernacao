typedef struct fracao Fracao;

Fracao ** cria_fracao(int t);

void cadastra_fracao(Fracao *f, int x, int y);

void libera_fracao(Fracao **f);

void soma_fracao(Fracao **f, int a, int b);

void subtracao_fracao(Fracao **f, int a, int b);

void multiplica_fracao(Fracao **f, int a, int b);

void divide_fracao(Fracao **f, int a, int b);

void imprime_fracao(Fracao *f);

