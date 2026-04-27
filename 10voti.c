#include <stdio.h>

int main() {

	int array[10] = {0}, voti[5] = {0}, i;

	for(int i = 0; i < 10; i++) {

		printf("inserisci uno dei dieci ultimi voti:  ");
		scanf("%d", &array[i]);

		if(array[i] == 6) {
			voti[0]++;
		} else {
			if(array[i] == 7) {
				voti[1]++;
			} else {
				if(array[i] == 8) {
					voti[2]++;
				} else {
					if(array[i] == 9) {
						voti[3]++;
					} else {
						if(array[i] == 10) voti[4]++;
					}
				}
			}
		}
	}
	printf("hai preso 6 %d volte, 7 %d volte, 8 %d volte, 9 %d volte e 10 %d volte", voti[0],voti[1],voti[2],voti[3],voti[4]);
	return 0;
}
