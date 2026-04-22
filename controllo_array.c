#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int array[20], utente, i, controllo = 0;

	printf("Inserisci un numero: ");
	scanf("%d", &utente);

	for(int i = 0; i < 20; i++) {

		array[i] = rand() % (100 - 1 + 1) + 1;
	}
	for(int i = 0; i > 19; i++) {
		if(utente == array[i]) {
			controllo = 1;
			i = 100;
		}
	}

	if(controllo == 1) {
		printf("Hai inserito un numero all'interno dell'array");
	} else {
		printf("Non hai inserito un numero all'interno dell'array");
	}
	return 0;
}
