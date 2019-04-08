#include <stdio.h>
#include <stdlib.h>
#include "TAD_livro.h"

int main() {
	int tam;
	float percent;
	char genero[20];
	Livros *l[tam];

	scanf("%d", &tam);
	scanf("%f", &percent);
	getchar();
	scanf("%[^\n]s", &genero);

	cadastra_livros (l, tam);

	imprime_livros (l, tam);
	
	//libera(l);	
	return 0;
}	
