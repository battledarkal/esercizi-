#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {
    srand(time(NULL));
    
    int utente = 0, computer = 0, roun = 0, win = 0, lose = 0, draw = 0, totale = 0;
    
    printf("Quanti round vuoi giocare da 5 a 30: ");
    scanf("%d", &totale);
    
    for(int i = 1; i <= totale; i++) {
    utente = rand() % (6 - 1 + 1) + 1;
    computer = rand() % (6 - 1 + 1) + 1;
    roun++;
    printf("Round %d\n", roun);
    printf("Tu: %d\n", utente);
    printf("Computer: %d\n", computer);
    
    if(utente > computer) {
        printf("Hai vinto\n");
        win++;
    } else { 
        if (utente == computer) {
        printf("Pareggio\n");
        draw++;
    } else {
        printf("Ha vinto il computer\n");
        lose++;
    }
    }
    }
    printf("Hai vinto %d volte\n",win);
    printf("Il computer ha vinto %d volte\n",lose);
    printf("Avete pareggiato %d volte",draw);
    
    return 0;
}
