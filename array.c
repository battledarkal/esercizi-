#include <stdio.h>

int main()
{
    int array[10];
    int i;
    for(int i = 0; i<10; i++) {
    
    array[i] = i + 1;
   }
   for(int i = 0; i<10; i++) {

    printf("%d\t", array[i]);
}
    return 0;
}
