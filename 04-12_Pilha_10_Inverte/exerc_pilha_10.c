#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int main (void) {
	int i;
	int n;
	char c;
	scanf("%d", &n);
	getchar();
	Pilha *p = cria_pilha_vazia();
	
	for(i = 0; i < n; i++) {
		while(scanf("%c", &c) && c!= '.') {
			if(c != ' '){
				empilha(p, c);
			}
			else {
				imprime_pilha(p);
				desempilha_tudo(p);
				printf(" ");
			}
			
		}
		getchar();
		imprime_pilha(p);
		printf ("\n");
		desempilha_tudo(p);
	}
	libera_pilha(p);
	return 0;
}
