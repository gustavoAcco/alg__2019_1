#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_vector_string(char **vector, int len) {
	int i;
	for(i = 0; i < len; i++) {
		printf("%s\t", vector[i]);
	}
	printf("\n");
	return;
}
void print_vector(int *vector, int len) {
	int i;
	for(i = 0; i < len; i++) {
		printf("%d\t", vector[i]);
	}
	printf("\n");
	return;
}
void swap_values_char(char **a,char **b) {
	char *aux;
	aux = *a;
	*a = *b;
	*b = aux;
	return;
}
void swap_values(int *a, int *b) {
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
	return;
}

int *find_smallest(int *vector, int len) {
	int i, *smallest;
	for(i = 1, smallest = vector; i < len; i++)
		if(*smallest >= vector[i]) 
			smallest = &vector[i];
	return smallest;
}

void selection_sort(int *vector, int len) {
	int i, k;
	for(i = 0, k = len; i < len; i++, k--) 
		swap_values(&vector[i], find_smallest(&vector[i], k));
	return;
}

void insertion_sort(int *vector, int len) {
	int i, j;
	for(i = 1; i < len; i++)
		for(j = i - 1; j >= 0; j--)
			if(vector[j] > vector[j + 1])
				swap_values(&vector[j + 1], &vector[j]);
	return;
}

void bubble_sort(int *vector, int len) {
	int i, j;
	for(i = len; i > 0; i--) 
		for(j = 0; j < i; j++)
			if(vector[j] > vector[j + 1])
				swap_values(&vector[j], &vector[j + 1]);
	return;
}

void insertion_sort_inverted(int *vector, int len) {
	int i, j;
	for(i = 1; i < len; i++)
		for(j = i - 1; j >= 0; j--)
			if(vector[j] < vector[j + 1])
				swap_values(&vector[j + 1], &vector[j]);
	return;
}

void word_sort(char **vector, int len) {
	int i, j;
	for(i = 1; i < len; i++) 
		for(j = i - 1; j >= 0; j--)
			if(strcmp(vector[j], vector[j + 1]) > 0)
				swap_values_char(&vector[j], &vector[j + 1]);
	return;
}
