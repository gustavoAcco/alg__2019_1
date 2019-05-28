#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int main(void) {
	int num, i;
	int tam = 0;
	int *vector = malloc(100*sizeof(int));
	while(scanf("%d", &num) == 1) {
		vector[tam++] = num;
	}
	bubble_sort(vector, tam);
	print_vector(vector, tam);
	return 0;
}
