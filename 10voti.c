#include <stdio.h>

int main() {

	int array[10] = {0}, voti[5] = {0}, i;

	for(int i = 0; i < 10; i++) {

		printf("inserisci il voto %d: ", i + 1);
		scanf("%d", &array[i]);
	}

	for(int i = 0; i < 10; i++) {
		voti[array[i]-6]++;
	}


	printf("hai preso 6 %d volte, 7 %d volte, 8 %d volte, 9 %d volte e 10 %d volte", voti[0],voti[1],voti[2],voti[3],voti[4]);
	return 0;
}

