#include "Fila.h"
#include <stdio.h>
#include <stdlib.h>

int main () {
	Fila *f = cria_fila_vazia();
	int num, maior_dir;

	while(scanf("%d", &num) == 1 && num != -1) {
		enfileira(f, num);
	}

	while(verifica_fila_vazia(f) == 0) {
		maior_dir = acha_primeiro_maior_dir(f);
		printf("%d\t%d\n", desenfileira(f), maior_dir);
	}
	return 0;	
}
