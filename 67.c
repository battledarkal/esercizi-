#include <stdio.h>
#include <stdlib.h>   
#include <time.h>

int main() {
  srand(time(NULL));

int moneta = 0, min = 60, max = 70;

for(int i=1; i <= 100; i++) {
moneta = rand() % (max - min + 1) + min;
if(moneta == 67) {
    printf("è uscito 67!!!!!\n");
}else{
    printf("non è uscito 67 skibidi sigma\n");
}

return 0;
}
}
