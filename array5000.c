#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int array[5000], conta[10] = {0}, i;

	for(int i = 0; i < 5000; i++) {

		array[i] = rand() % (10 - 1 + 1) + 1;
        conta[array[i]-1]++;

	}

for(int i = 0; i < 10; i++) {
printf("Il numero %d è uscito %d volte\n",i+1 ,conta[i]);
}
	return 0;
}
