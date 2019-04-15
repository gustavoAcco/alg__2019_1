include <stdio.h>
#include <stdlib.h>

typedef struct item Item;
typedef struct pilha Pilha;

#define MAXTAM 2000

struct item {
  char chave;
  // demais campos
};

struct pilha {
  Item item[MAXTAM];
  int topo;
};

// criar uma pilha vazia
Pilha * cria_pilha_vazia() {
    Pilha *p = malloc(sizeof(Pilha));
    p->topo = -1;
    return p;
}

// retorna 1 se a lista está cheia ou 0 se não está cheia
int verifica_pilha_cheia(Pilha *p) {
    return p->topo == MAXTAM - 1;
}

// empilha
void empilha(Pilha *p, char chave) {
    Item novo_item;

    if(verifica_pilha_cheia(p)){
        printf("Erro: a pilha está cheia.\n");
        return;
    }
    else {
        novo_item.chave = chave;
        p->topo++;
        p->item[p->topo] = novo_item;
    }
}

// imprime a pilha
void imprime_pilha(Pilha *p) {
    int i;
    for(i = p->topo; i >= 0; i--)
        printf("%c", p->item[i].chave);
}

// retorna 1 se a pilha está vazia ou 0 se não está vazia
int verifica_pilha_vazia(Pilha *p) {
    return p->topo == -1;
}

// desempilha 
void desempilha(Pilha *p) {
    if (verifica_pilha_vazia(p)) {
        //printf("Erro: a pilha está vazia.\n");
        return;
    }
    else {
        p->topo--;
    }
}


// desempilha todos os itens da pilha
void desempilha_tudo(Pilha *p) {
    p->topo = -1;
}

void libera_pilha(Pilha *p) {
    free(p);
}

int main (void) {
    Pilha *p = cria_pilha_vazia();
    int i, n, count;
    char diameareia;

    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        count = 0;
        while(scanf ("%c", &diameareia) && diameareia != '\n') {
            if (diameareia == '<') {
                empilha (p, diameareia);
            } else if (diameareia == '>' && verifica_pilha_vazia(p) == 0) {
                count++;
                desempilha (p);
            }
        }
        printf ("%d\n", count);
        desempilha_tudo(p);
    }
    
    libera_pilha(p);

    return 0;

}
