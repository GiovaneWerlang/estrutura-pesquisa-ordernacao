typedef struct ponto Ponto;

Ponto ** aloca_vetor_pontos(int t);
void imprime_vetor_pontos(Ponto **p, int t);
Ponto ** cadastra_vetor_pontos(Ponto *p, float x, float y);
void libera_ponto(Ponto **p, int t);
float calcula_distancia(Ponto **p, int x, int y);

