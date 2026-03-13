#include <stdio.h>

int main() {

int numero;

do {
        printf("Inserisci un numero: ");
        scanf("%d", &numero);
            if(numero <= 1) {
                printf("hai inserito un numero troppo piccolo");
            }
    
}

    while(numero <= 1);
    for(int i = 2; i < numero; i++)
        printf("%d\n", i);
}
