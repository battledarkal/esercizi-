#include <stdio.h>

int main() {

int numero, conta = 1;

printf("Inserisci un numero: ");
    scanf("%d", &numero);

for(conta <= numero; conta++) {
        if(conta != 1 && conta != numero) {
            printf("%d ", conta);
        }
    }

    return 0;
}
