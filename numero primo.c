#include <stdio.h>

int main() {

int numero = 0, conta = 0;

printf("inserisci un numero: ");
scanf("%d", &numero);

for(int i = 1; i <= numero ; i++) {
  if(numero % i == 0) { 
  conta++;
  }
  if(conta == 2);{
  printf("il numero è primo");
}
    }

return 0;
}
