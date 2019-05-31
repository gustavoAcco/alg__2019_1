#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int main(void) {
	int num;	
	int i;
	char **vector = malloc(100*sizeof(char*));
	scanf("%d", &num);	
	for(i = 0; i < num; i++) {
		vector[i] = malloc(50*sizeof(char));
		scanf("%[^\n]s", vector[i]);
	}
	word_sort(vector, i);
	print_vector_string(vector, i);
	return 0;
}
