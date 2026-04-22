#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int array[50], i, controllo = 0;


	for(int i = 0; i < 50; i++) {

		array[i] = rand() % (10 - 1 + 1) + 1;
		if(array[i] > 8) controllo++;
	}

	printf("Sono usciti %d numeri maggiori di 8", controllo);

	return 0;
}
