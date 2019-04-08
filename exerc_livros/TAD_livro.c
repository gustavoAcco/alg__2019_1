#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TAD_livro.h"

struct tipo_livro {
	char titulo [30];
	char genero [30];
	int ano;
	float valor;
};

void cadastra_livros (Livros **l, int tam) {
	int i;
	for (i = 0; i < tam; i++) {
		getchar();
		scanf ("%[^\n]s", &l[i]->titulo);
		getchar();
		scanf ("%[^\n]s", &l[i]->genero);
		scanf ("%d", &l[i]->ano);
		scanf ("%f", &l[i]->valor);
	}
	
}

Livros **ajusta_valor (Livros **l, int tam, float percent) {
	int i;


	for(i = 0; i < tam; i++) {
		l[i]->valor *= percent;
	}
	
	return l;
}

void imprime_livros (Livros **l, int tam) {
	int i;

	for(i = 0; i < tam; i++) {
		printf("Título: %s\n", l[i]->titulo);
		printf("Genero: %s\n", l[i]->genero);
		printf("Ano: %d\n", l[i]->ano);
		printf("Valor: %.2f\n", l[i]->valor);
	}
}

void livro_barato (Livros **l, int tam) {
	int i, mais_barato = 0;

	for(i = 1; i < tam; i++) {
		if(l[mais_barato]->valor > l[i]->valor) {
			mais_barato = i;
		}
	}

	printf("Título: %s\n", l[mais_barato]->titulo);
	printf("Genero: %s\n", l[mais_barato]->genero);
	printf("Ano: %d\n", l[mais_barato]->ano);
	printf("Valor: %.2f\n", l[mais_barato]->valor);

}

void livro_caro(Livros **l, int tam) {
	int i, mais_caro= 0;

	for(i = 1; i < tam; i++) {
		if(l[mais_caro]->valor < l[i]->valor) {
			mais_caro= i;
		}
	}

	printf("Título: %s\n", l[mais_caro]->titulo);
	printf("Genero: %s\n", l[mais_caro]->genero);
	printf("Ano: %d\n", l[mais_caro]->ano);
	printf("Valor: %.2f\n", l[mais_caro]->valor);
}

void imprimir_pgenero (Livros **l, int tam, char genero[]) {
	int i; 

	for(i = 0; i < tam; i++) {
		if(strcmp (l[i]->genero, genero) == 0) {
			printf("Título: %s\n", l[i]->titulo);
			printf("Genero: %s\n", l[i]->genero);
			printf("Ano: %d\n", l[i]->ano);
			printf("Valor: %.2f\n", l[i]->valor);
		}
	}

}

void imprimir_lanc (Livros **l, int tam) {
	int i, ano_atual = 2019; 

	for(i = 0; i < tam; i++) {
		if(l[i]->ano == ano_atual) {
			printf("Título: %s\n", l[i]->titulo);
			printf("Genero: %s\n", l[i]->genero);
			printf("Ano: %d\n", l[i]->ano);
			printf("Valor: %.2f\n", l[i]->valor);
		}
	}

}

/*void libera (Livros **l) {
	free(l);
}

*/
