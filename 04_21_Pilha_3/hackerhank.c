#include <stdio.h>
#include "Pilha.h"

int main (void) {
    Pilha *p = cria_pilha_vazia();
    int i, n, primeirofecha = 1;
    char entrada;

    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        while(scanf ("%c", &entrada) && entrada != '\n') {
            if (entrada == '(') {
                empilha (p, entrada);
            } else if (entrada == ')' && verifica_pilha_vazia(p) == 0) {
                desempilha (p);
            } else if (entrada == ')' && verifica_pilha_vazia(p) == 1) {
                empilha(p, entrada);
            }
        }
        if (verifica_pilha_vazia(p) == 1) {
            printf("correct\n");
        } else {
            printf("incorrect\n");
        }
        desempilha_tudo(p);
    }
    
    libera_pilha(p);

    return 0;

}
