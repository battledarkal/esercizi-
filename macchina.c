#include <stdio.h>

int main () {
    
    int accelerazione = 0, velocita = 0, tempo = 0;
    float metrisecondo, accelerazionesecondo, spazio;
    
    printf("inserisci l'accelerazione della macchina in km/h:  ");
    scanf("%d", &accelerazione);
    
while(velocita < 100) {
tempo++;
velocita = velocita + accelerazione;

printf("%d km/h\n", velocita);
}

metrisecondo = velocita / 3.6;
accelerazionesecondo = accelerazione / 3.6;

spazio = 0.5 * accelerazionesecondo * tempo * tempo;
printf("la macchina ha percorso %f metri", spazio);

    return 0;
}
