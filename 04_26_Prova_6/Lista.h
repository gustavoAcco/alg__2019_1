#define MAXTAM 100
typedef struct item Item;
typedef struct lista Lista;

Lista * cria_lista_vazia();
int verifica_lista_vazia(Lista *l);
int verifica_lista_cheia(Lista *l);
void adiciona_item_fim_lista(Lista *l, int codigo, float peso);
void imprime_lista(Lista *l);
void libera_lista(Lista *l);
int busca_mais_caro(Lista *l);
Item *remove_item(Lista *l, int indice);
float calcula_peso_total(Lista *l);
void imprime_item(Item *qualquer);
