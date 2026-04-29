#include <stdio.h>

int main() {

	int array[10] = {0}, voti[5] = {0}, i;

	for(int i = 0; i < 10; i++) {

		printf("inserisci il voto %d: ", i + 1);
		scanf("%d", &array[i]);
	}

	for(int i = 0; i < 10; i++) {
		if(voti[i] >= 6 && voti[i] < 10) {
			voti[array[i]-6]++;
		}
	}

	for(int i = 0; i < 5; i++) {
		printf("hai preso %d %d volte\n", array[i], i+6);
	}
	return 0;
}

