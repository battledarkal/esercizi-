#include <stdio.h>

int main() {

int numero = 0, conta = 0;

printf("inserisci un numero: ");
scanf("%d", &numero);

for(int i = 3; i <= numero/2 ; i = i + 2) {
  if(numero % i == 0 && numero % 2 != 0) { 
  conta++;
  }
  if(conta == 0);{
  printf("il numero è primo");
}
    }

return 0;
}
