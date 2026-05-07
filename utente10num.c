#include <stdio.h>
#define DIM 10

int main() {

	int array[DIM], i, maggiore, minore, pari = 0;

	for(int i = 0; i < DIM; i++) {
		printf("Inserisci un numero: ");
		scanf("%d", &array[i]);
	}

	maggiore = array[0];
	minore = array[0];

	for(i = 1; i < DIM; i++) {
		if(array[i] % 2 == 0) pari++;
		if(array[i] > maggiore) maggiore = array[i];
		if(array[i] < minore) minore = array[i];
	}

	printf("Il numero maggiore è: %d\n", maggiore);
	printf("Il numero minore è: %d\n", minore);
	printf("Ci sono %d numeri pari", pari);

	return 0;
}
