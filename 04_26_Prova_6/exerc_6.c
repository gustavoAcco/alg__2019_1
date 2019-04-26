#include <stdio.h>
#include "Lista.h"

int main (void) {
	float limite;
	float pesoMala;
	int numItens, i;
	int codigo;
	float peso;
	float pesoTotal;

	Lista *l = cria_lista_vazia();

	scanf("%f", &limite);
	scanf("%f", &pesoMala);
	scanf("%d", &numItens);

	for(i = 0; i <= numItens; i++) {
		scanf("%d", &codigo);
		scanf("%f", &peso);
		adiciona_item_fim_lista(l, codigo, peso); 
	}
	
	pesoTotal = calcula_peso_total(l);
	while(pesoTotal > limite) {
		imprime_item(remove_item(l, busca_mais_caro(l)));
	}

	return 0;
}
