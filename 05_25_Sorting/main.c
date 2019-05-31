#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int main(void) {
	int num;	
	int i;
	scanf("%d", &num);	
	char **vector = malloc(num*sizeof(char*));
	for(i = 0; i < num; i++) {
		vector[i] = malloc(50*sizeof(char));
		scanf("%s", vector[i]);
	}
	word_sort(vector, i);
	print_vector_string(vector, i);
	return 0;
}
