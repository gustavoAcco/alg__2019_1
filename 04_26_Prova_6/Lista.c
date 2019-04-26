#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

struct item {
    int codigo;
    float peso;
};
struct lista {
    Item item[MAXTAM];
    int ultimo;
};

Lista * cria_lista_vazia() {
    Lista *l = malloc(sizeof(Lista));
    l->ultimo = -1;
    return l;
}

// retorna 1 se a lista está vazia ou 0 se não está vazia
int verifica_lista_vazia(Lista *l) {
    return l->ultimo == -1;
}

// retorna 1 se a lista está cheia ou 0 se não está cheia
int verifica_lista_cheia(Lista *l) {
    return l->ultimo == MAXTAM - 1;
}

void adiciona_item_fim_lista(Lista *l, int codigo, float peso) {
    if(verifica_lista_cheia(l)){
        printf("Lista cheia!\n");
        return;
    }
    Item novo_item;
    novo_item.codigo = codigo;
    novo_item.peso = peso;
    l->ultimo++;
    l->item[l->ultimo] = novo_item;
}

void imprime_lista(Lista *l) {
    int tam = l->ultimo + 1;
    int i;
    for(i = 0; i < tam; i++)
        printf("%d %.3f ", l->item[i].codigo, l->item[i].peso);
}


int busca_mais_caro(Lista *l) {
	int maiscaro = l->ultimo, i;
	
	for(i = l->ultimo - 1; i >= 0; i--) {
		if(l->item[i].peso > l->item[maiscaro].peso) 
			maiscaro = i;
	}

	return maiscaro;
}

Item *remove_item(Lista *l, int indice) {
	Item *aux;
	if(indice == l->ultimo) {
		aux->codigo = l->item[l->ultimo].codigo;
		aux->peso = l->item[l->ultimo].peso;
		l->ultimo--;
		return aux;
	} else {
		int i;
		aux->codigo = l->item[indice].codigo;
		aux->peso = l->item[indice].peso;
		for(i = indice + 1; i < l->ultimo; i++) {
			l->item[i-1] = l->item[i];
		}
		return aux;
		
	}

}

float calcula_peso_total(Lista *l) {
	int i;
	float soma = 0;
	for(i = 0; i < l->ultimo; i++) {
		soma += l->item[i].peso;
	}
	return soma;
}

void imprime_item(Item *qualquer) {
	printf("%d %.3f", qualquer->codigo, qualquer->peso);
}

void libera_lista(Lista *l) {
    free(l);
}
