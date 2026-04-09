#include <stdio.h>
#include <stdlib.h>   
#include <time.h>

int main() {
  srand(time(NULL));

int dado1, dado2, volte, jackpot = 0, sommaMax = 1, sommaMin = 13;
float totale = 0;

printf("Quante volte vuoi lanciare i due dadi, scegli un numero tra 5 e 20:  \n");
scanf("%d", &volte);

for(int i = 0; i < volte; i++) {
dado1 = rand() % (6 - 1 +1) + 1;
dado2 = rand() % (6 - 1 +1) + 1;

if(dado1 + dado2 == 2 || dado1 + dado2 == 12) {
printf("Jackpot\n");
jackpot++;
} else {
    if((dado1 + dado2) % 2 != 0 && dado1 + dado2 != 2 && dado1 + dado2 != 12) {
        printf("Dispari\n");
    } else {
        if(dado1 + dado2 == 7) {
            printf("Sette fortunato\n");
        } else {
            printf("Pari\n");
        }
    }
    
}
totale = totale + dado1 + dado2;
int somma = dado1 + dado2;

if (somma > sommaMax) sommaMax = somma;
if (somma < sommaMin) sommaMin = somma;
}


printf("Jackpot è uscito %d volte \n", jackpot);
printf("La somma total è di %.1f", totale);
printf("La somma mininma è stata %d mentre quella massima %d", sommaMin, sommaMax);
return 0;
}
