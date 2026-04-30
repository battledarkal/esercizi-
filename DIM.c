#include <stdio.h>
#define DIM 50
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int array[DIM], i, j, conta = 0;

	for(int i = 0; i < DIM; i++) {
		array[i] = rand () % (DIM - 0 + 1) - 0;
	}

	for(int i = 0; i < DIM - 1; i++) {
		for(int j = i + 1; j < DIM; j++) {
			if(array[i] == array[j]) conta++;
		}
	}

	if(conta == 0) {
		printf("Sono tutti diversi");
	} else {
		printf("Non sono tutti diversi");
	}

	return 0;
}
