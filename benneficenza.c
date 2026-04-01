#include <stdio.h>

int main()
{

int soldi = 0, nuovo;


do{
 printf("inserisci i soldi che vuoi donare:  ");
scanf("%d", &nuovo);

soldi =  soldi + nuovo;

printf("hai donato %d euro\n", soldi);
}
while(soldi <= 1000);

    return 0;
}
