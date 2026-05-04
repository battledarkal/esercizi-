#include <stdio.h>
#define DIM 100
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int array[DIM], i, maggiore, minore;

	for(int i = 0; i < DIM; i++) {
		array[i] = rand () % 1001;
	}

	maggiore = array[0];
	minore = array[0];

	for(i = 1; i < DIM; i++) {
		if(array[i] > maggiore) maggiore = array[i];
		if(array[i] < minore) minore = array[i];
	}

	printf("Il numero maggiore è: %d\n", maggiore);
	printf("Il numero minore è %d\n", minore);

	return 0;
}
