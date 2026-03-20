#include <stdio.h>
#include <stdlib.h>   
#include <time.h>

int main() {
  srand(time(NULL));

int uscita = 0, soldi, scommessa = 0, scelta = 0, tempi = 0;

printf("quanti soldi vuoi scommettere?  ");
scanf("%d", &soldi);

printf("\nquanti soldi vuoi puntare per volta?   ");
scanf("%d", &scommessa);

while(soldi > 0) {
uscita = rand() % (2 - 1 + 1) + 1;
tempi++;
printf("\nsegli testa inserendo 1 e croce inserendo 2:  ");
scanf("%d", &scelta);
if(uscita == scelta) {
    soldi = soldi + (scommessa * 2);
    soldi = (soldi - scommessa);
    printf("Hai vinto\n");
} else {
    soldi = (soldi - scommessa);
    
    printf("Hai perso\n");
}
}

printf("hai scommesso %d volte prima di finire i soldi", tempi);

return 0;
}
