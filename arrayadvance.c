#include <stdio.h>

int main() {
    float array[10] = {0};
    int i;
    
    for(int i = 0; i < 8; i++) {
    
    printf("inserisci un numero reale:  ");
    scanf("%f", &array[i]);
    
    array[8] += array[i];
    }
    
    array[9] = array[8] / 8;
    
    printf("la somma è %.2f e la media è %.2f", array[8], array[9]);
    
    return 0;
}
