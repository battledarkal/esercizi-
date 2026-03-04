#include <stdio.h>
#include <stdlib.h>   
#include <time.h>

int main() {
  srand(time(NULL));

  int numero, casuale, min = 1, max = 100, tentativi_buono = 3, tentativi_max = 10, tent = 0;
    numero = rand() % (max - min + 1) + min;

do {
        printf("Indovina il numero casuale tra 1 e 100: ");
        scanf("%d", &numero);
        tent++;
        if(casuale != numero
        ) {
            printf("Male male \n Ti rimangono %d tentativi\n", tentativi_max - tent);
        }
    }while(casuale != numero && tent < tentativi_max);

    if(tent <= 3) {
        printf("Aura");
    } else {
if(tent >= 4 && tent <= 10) {
printf("Bravino"); }
 else {
printf("Brutto");
 }
    }}


}

    return 0;

}
