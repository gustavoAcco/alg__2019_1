typedef struct tipo_livro Livros;

void cadastra_livros (Livros **l, int tam);
Livros **ajusta_valor (Livros **l, int tam, float percent);
void imprime_livros (Livros **l, int tam);
void livro_barato (Livros **l, int tam);
void livro_caro (Livros **l, int tam);
void imprime_pgenero (Livros **l, int tam, char genero[]);
void imprime_lanc (Livros **l, int tam);
//void libera(Livros **l);
