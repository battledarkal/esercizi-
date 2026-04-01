#include <stdio.h>

int main()
{

int numero;

printf("inserisci un numero tra 1 e 100:  ");
scanf("%d", &numero);

for(int i = numero; i <=100; i++) {

if(i % 2 == 0) {
    printf("%d\n", i);
    
}
}

    return 0;
}
