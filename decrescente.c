#include <stdio.h>
#define DIM 5
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int array[DIM], i,crescente = 0, decrescente = 0;

	for(int i = 0; i < DIM; i++) {
		array[i] = rand() % 1001;
	}

	for(i = 1; i < DIM; i++) {
		if(array[i] < array[i-1]) decrescente++;
		if(array[i] > array[i-1]) crescente++;
	}

	if(decrescente == 5) printf("L'array è decrescente\n");
	if(crescente == 5) {
	    printf("L'array è crescente\n");
	} else {
	    printf("L'array non è ordinato\n");
	}
	
	return 0;
}
