#include <stdio.h>
#include <stdlib.h>   
#include <time.h>

int main() {
  srand(time(NULL));

int moneta = 0, testa = 0, croce = 0;

for(int i=1; i <= 100; i++) {
moneta = rand() % (2 - 1 + 1) + 1;
if(moneta == 1) {
    testa++;
} else {
    croce++;
}
}

printf("croce è uscito %d volte e testa %d volte",croce, testa); 


return 0;
}
