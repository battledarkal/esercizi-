#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
srand(time(NULL));

int aa = 0, bb = 0, cc = 0, uno = 0, due = 0,tre = 0;

    aa = rand() % (9 - 1 + 1) + 1;
    bb = rand() % (9 - 1 + 1) + 1;
    cc = rand() % (9 - 1 + 1) + 1;

do {
    printf("insersci il primo numero compreso tra 1 e 9:  ");
    scanf("%d", &uno);
    
    printf("insersci il secondo numero compreso tra 1 e 9:  ");
    scanf("%d", &due);

    printf("insersci il terzo numero compreso tra 1 e 9:  ");
    scanf("%d", &tre);
    
    if(uno == aa) {
        printf(" il primo numero è giusto nel posto giusto\n");
    } else {
    if(uno == bb || uno == cc) {
        printf("il primo numero è giusto nel posto sbagliato\n");
    } else {
    printf("il primo numero è sbagliato\n");
    }
    }
    
    if(due == bb) {
        printf(" il secondo numero è giusto nel posto giusto\n");
    } else {
    if(due == aa || due == cc) {
        printf("il secondo numero è giusto nel posto sbagliato\n");
    } else {
    printf("il secondo numero è sbagliato\n");
    }
    }

    if(tre == cc) {
        printf(" il primo numero è giusto nel posto giusto\n");
    } else {
    if(tre == bb || tre == aa) {
        printf("il primo numero è giusto nel posto sbagliato\n");
    } else {
    printf("il primo numero è sbagliato\n");
    }
    }
    
    
} while( aa != uno || bb != due || cc != tre);

printf("Hai vinto");

return 0;


}
 
