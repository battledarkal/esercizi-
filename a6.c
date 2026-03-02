#include <stdio.h>
#include <stdlib.h>   
#include <time.h>

int main() {
  srand(time(NULL));

  int numero, min = 1, max = 10, prova = 0;

while(prova != numero) {

numero = rand() % (max - min + 1) + min;

printf("inserisci un numero per provare a indovinare quello generato: \n");
scanf("&d", &prova);
}

printf("hai inserito un numero uguale a quello generato");

return 0;
}
