#include <stdio.h>

int main() {
    
int prezzo, scontato, totale = 0, totalescontato = 0, risparmi = 0, prodottoPiuCaro = -1, prodottoMenoCaro = -1;
float sconto;

printf("inserisci il prezzo del prodotto in centesimi(0 per quando hai finito):  \n");
scanf("%d", &prezzo);
 do {
    printf("prezzo prodotto: "); 
    scanf("%d", &prezzo);
    
    if(prezzo < 100) {
    sconto = prezzo * 0.05;
    scontato = prezzo - sconto;
    printf("sconto del 5%, il prezzo scontato è: %d \n", scontato);
    } else {
    if(prezzo > 500) {
    sconto = prezzo * 0.1;
    scontato = prezzo - sconto;
    printf("sconto del 10%, il prezzo scontato è: %d \n",scontato);
    } else {
    scontato = prezzo;
    printf("no sconto");
    } 
    }
   
    totale = totale + prezzo;
    totalescontato = totalescontato + scontato;
    risparmi = risparmi + sconto;
    
    if (prodottoPiuCaro == -1 || prezzo > prodottoPiuCaro) prodottoPiuCaro = prezzo;
    if (prodottoMenoCaro == -1 || prezzo < prodottoMenoCaro) prodottoMenoCaro = prezzo;
 
     
 } while (prezzo != 0);
 
   printf("\n=== SCONTRINO FINALE ===\n");
    printf("Totale senza sconti: %d centesimi (%.2f euro)\n", totale, totale / 100.0);
    printf("Totale con sconti:   %d centesimi (%.2f euro)\n", totalescontato, totalescontato / 100.0);
    printf("Risparmio totale:    %d centesimi (%.2f euro)\n", totale - totalescontato, (totale - totalescontato) / 100.0);
    printf("Prodotto piu' caro:  %d centesimi (%.2f euro)\n", prodottoPiuCaro, prodottoPiuCaro / 100.0);
    printf("Prodotto meno caro:  %d centesimi (%.2f euro)\n", prodottoMenoCaro, prodottoMenoCaro / 100.0);
}
