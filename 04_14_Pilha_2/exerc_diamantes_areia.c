#include <stdio.h>
#include "Pilha.h"

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

	return 0;

}
