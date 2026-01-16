#include <stdio.h>

int main () {
  char A, B, C, D, E, F, G, H, I, X, O;
  int posizione;

    printf(" %c| %c| %c/n", A, B, C);
    printf("---+---+---/n");
    printf(" %c| %c| %c/n", D, E, F);
    printf("---+---+---/n");
    printf(" %c| %c| %c/n", G, H, I);

  printf("scegli in che casella mettere la tua pedina: ");
  scanf("&d, &posizione);


  if(posizione == 1){ 
  printf(" X |   |   /n");
  printf("---+---+---/n");
  printf("   |   |   /n");
  printf("---+---+---/n");
  printf("   |   |   ");
  } else {
    if(posizione == 2 ){
    printf("   | X |   /n");
    printf("---+---+---/n");
    printf("   |   |   /n");
    printf("---+---+---/n");
    printf("   |   |   "); 
    } esle {
      if(posizione == 3){
      printf("   |   | X /n");
      printf("---+---+---/n");
      printf("   |   |   /n");
      printf("---+---+---/n");
      printf("   |   |   "); 
      } else {
        if(posizione == 4){
        printf("   |   |   /n");
        printf("---+---+---/n");
        printf(" X |   |   /n");
        printf("---+---+---/n");
        printf("   |   |   "); 
        } else {
          
        }
      }
    } 
  }
}
