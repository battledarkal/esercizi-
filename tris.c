#include <stdio.h>

int main() {

    /* Campo di gioco, ogni variabile è una cella */
    char a=' ', b=' ', c=' ';
    char d=' ', e=' ', f=' ';
    char g=' ', h=' ', i=' ';

  char giocatore = 'X'; //il primo a giocare ha sempre la X
    int pos;
    int mosse = 0;
    int fine = 0;

    printf("GIOCO DEL TRIS\n");

    /* STAMPA CAMPO DA GIOCO */
    printf("\n %c | %c | %c\n", a,b,c);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", d,e,f);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", g,h,i);

      /* ===== MOSSA 1 ===== */
      printf("\nGiocatore %c, scegli una posizione (1-9): ", giocatore);
      scanf("%d", &pos);

      if(pos==1 && a==' ') {
	    a=giocatore;
      } else {
        if(pos==2 && b==' ') {   
        b=giocatore;
        } else {
            if(pos==3 && c==' ') {
	          c=giocatore;
            } else {
                if(pos==4 && d==' ') {
	              d=giocatore;
                } else {
                  if(pos==5 && e==' ') {
	                e=giocatore;
                  } else {
                      if(pos==6 && f==' ') {
	                    f=giocatore;
                      } else {
                         if(pos==7 && g==' ') {
	                       g=giocatore;
                         } else {
                            if(pos==8 && h==' ') {
	                          h=giocatore;
                            } else {
                                if(pos==9 && i==' ') {
	                              i=giocatore;
                                } else {
                                  printf("Mossa non valida\n");
        }

   mosse++;

      if(giocatore=='X') giocatore='O';
      else giocatore='X';

     /* ===== MOSSA 2 ===== */
      printf("\nGiocatore %c, scegli una posizione (1-9): ", giocatore);
      scanf("%d", &pos);

      if(pos==1 && a==' ') {
	    a=giocatore;
      } else {
        if(pos==2 && b==' ') {   
        b=giocatore;
        } else {
            if(pos==3 && c==' ') {
	          c=giocatore;
            } else {
                if(pos==4 && d==' ') {
	              d=giocatore;
                } else {
                  if(pos==5 && e==' ') {
	                e=giocatore;
                  } else {
                      if(pos==6 && f==' ') {
	                    f=giocatore;
                      } else {
                         if(pos==7 && g==' ') {
	                       g=giocatore;
                         } else {
                            if(pos==8 && h==' ') {
	                          h=giocatore;
                            } else {
                                if(pos==9 && i==' ') {
	                              i=giocatore;
                                } else {
                                  printf("Mossa non valida\n");
        }

   mosse++;

      if(giocatore=='X') giocatore='O';
      else giocatore='X';

                              
   /* ===== MOSSA 3 ===== */
      printf("\nGiocatore %c, scegli una posizione (1-9): ", giocatore);
      scanf("%d", &pos);

      if(pos==1 && a==' ') {
	    a=giocatore;
      } else {
        if(pos==2 && b==' ') {   
        b=giocatore;
        } else {
            if(pos==3 && c==' ') {
	          c=giocatore;
            } else {
                if(pos==4 && d==' ') {
	              d=giocatore;
                } else {
                  if(pos==5 && e==' ') {
	                e=giocatore;
                  } else {
                      if(pos==6 && f==' ') {
	                    f=giocatore;
                      } else {
                         if(pos==7 && g==' ') {
	                       g=giocatore;
                         } else {
                            if(pos==8 && h==' ') {
	                          h=giocatore;
                            } else {
                                if(pos==9 && i==' ') {
	                              i=giocatore;
                                } else {
                                  printf("Mossa non valida\n");
        }

   mosse++;

      if(giocatore=='X') giocatore='O';
      else giocatore='X';

     /* ===== MOSSA 4 ===== */
      printf("\nGiocatore %c, scegli una posizione (1-9): ", giocatore);
      scanf("%d", &pos);

      if(pos==1 && a==' ') {
	    a=giocatore;
      } else {
        if(pos==2 && b==' ') {   
        b=giocatore;
        } else {
            if(pos==3 && c==' ') {
	          c=giocatore;
            } else {
                if(pos==4 && d==' ') {
	              d=giocatore;
                } else {
                  if(pos==5 && e==' ') {
	                e=giocatore;
                  } else {
                      if(pos==6 && f==' ') {
	                    f=giocatore;
                      } else {
                         if(pos==7 && g==' ') {
	                       g=giocatore;
                         } else {
                            if(pos==8 && h==' ') {
	                          h=giocatore;
                            } else {
                                if(pos==9 && i==' ') {
	                              i=giocatore;
                                } else {
                                  printf("Mossa non valida\n");
        }

   mosse++;

      if(giocatore=='X') giocatore='O';
      else giocatore='X';


         /* ===== MOSSA 5 ===== */
      printf("\nGiocatore %c, scegli una posizione (1-9): ", giocatore);
      scanf("%d", &pos);

      if(pos==1 && a==' ') {
	    a=giocatore;
      } else {
        if(pos==2 && b==' ') {   
        b=giocatore;
        } else {
            if(pos==3 && c==' ') {
	          c=giocatore;
            } else {
                if(pos==4 && d==' ') {
	              d=giocatore;
                } else {
                  if(pos==5 && e==' ') {
	                e=giocatore;
                  } else {
                      if(pos==6 && f==' ') {
	                    f=giocatore;
                      } else {
                         if(pos==7 && g==' ') {
	                       g=giocatore;
                         } else {
                            if(pos==8 && h==' ') {
	                          h=giocatore;
                            } else {
                                if(pos==9 && i==' ') {
	                              i=giocatore;
                                } else {
                                  printf("Mossa non valida\n");
        }

   mosse++;

      if(giocatore=='X') giocatore='O';
      else giocatore='X';

                              // METTERE LA CONDIZIONE DI VITORIA DA QUA IN POI PER OGNI MOSSA!!!

           /* ===== MOSSA 6 ===== */
      printf("\nGiocatore %c, scegli una posizione (1-9): ", giocatore);
      scanf("%d", &pos);

      if(pos==1 && a==' ') {
	    a=giocatore;
      } else {
        if(pos==2 && b==' ') {   
        b=giocatore;
        } else {
            if(pos==3 && c==' ') {
	          c=giocatore;
            } else {
                if(pos==4 && d==' ') {
	              d=giocatore;
                } else {
                  if(pos==5 && e==' ') {
	                e=giocatore;
                  } else {
                      if(pos==6 && f==' ') {
	                    f=giocatore;
                      } else {
                         if(pos==7 && g==' ') {
	                       g=giocatore;
                         } else {
                            if(pos==8 && h==' ') {
	                          h=giocatore;
                            } else {
                                if(pos==9 && i==' ') {
	                              i=giocatore;
                                } else {
                                  printf("Mossa non valida\n");
        }

   mosse++;

      if(giocatore=='X') giocatore='O';
      else giocatore='X';

                                 /* ===== MOSSA 7 ===== */
      printf("\nGiocatore %c, scegli una posizione (1-9): ", giocatore);
      scanf("%d", &pos);

      if(pos==1 && a==' ') {
	    a=giocatore;
      } else {
        if(pos==2 && b==' ') {   
        b=giocatore;
        } else {
            if(pos==3 && c==' ') {
	          c=giocatore;
            } else {
                if(pos==4 && d==' ') {
	              d=giocatore;
                } else {
                  if(pos==5 && e==' ') {
	                e=giocatore;
                  } else {
                      if(pos==6 && f==' ') {
	                    f=giocatore;
                      } else {
                         if(pos==7 && g==' ') {
	                       g=giocatore;
                         } else {
                            if(pos==8 && h==' ') {
	                          h=giocatore;
                            } else {
                                if(pos==9 && i==' ') {
	                              i=giocatore;
                                } else {
                                  printf("Mossa non valida\n");
        }

   mosse++;

      if(giocatore=='X') giocatore='O';
      else giocatore='X';

              /* ===== MOSSA 8 ===== */
      printf("\nGiocatore %c, scegli una posizione (1-9): ", giocatore);
      scanf("%d", &pos);

      if(pos==1 && a==' ') {
	    a=giocatore;
      } else {
        if(pos==2 && b==' ') {   
        b=giocatore;
        } else {
            if(pos==3 && c==' ') {
	          c=giocatore;
            } else {
                if(pos==4 && d==' ') {
	              d=giocatore;
                } else {
                  if(pos==5 && e==' ') {
	                e=giocatore;
                  } else {
                      if(pos==6 && f==' ') {
	                    f=giocatore;
                      } else {
                         if(pos==7 && g==' ') {
	                       g=giocatore;
                         } else {
                            if(pos==8 && h==' ') {
	                          h=giocatore;
                            } else {
                                if(pos==9 && i==' ') {
	                              i=giocatore;
                                } else {
                                  printf("Mossa non valida\n");
        }

   mosse++;

      if(giocatore=='X') giocatore='O';
      else giocatore='X';                 
                            
                            
                            
            /* ===== MOSSA 9 ===== */
      printf("\nGiocatore %c, scegli una posizione (1-9): ", giocatore);
      scanf("%d", &pos);

      if(pos==1 && a==' ') {
	    a=giocatore;
      } else {
        if(pos==2 && b==' ') {   
        b=giocatore;
        } else {
            if(pos==3 && c==' ') {
	          c=giocatore;
            } else {
                if(pos==4 && d==' ') {
	              d=giocatore;
                } else {
                  if(pos==5 && e==' ') {
	                e=giocatore;
                  } else {
                      if(pos==6 && f==' ') {
	                    f=giocatore;
                      } else {
                         if(pos==7 && g==' ') {
	                       g=giocatore;
                         } else {
                            if(pos==8 && h==' ') {
	                          h=giocatore;
                            } else {
                                if(pos==9 && i==' ') {
	                              i=giocatore;
                                } else {
                                  printf("Mossa non valida\n");
        }

   mosse++;

      if(giocatore=='X') giocatore='O';
      else giocatore='X';                   

                              if(  a == b  &&  a == c ) {  //condizioni di vittoria, manca controllare il giocatore precedente per capire chi ha vintot

                                
                              } else {
                                  if(  d == e &&  d == f ) {

                                
                                  } else { 
                                     if(  g == h &&  g == i ) {

                                
                                     } else { 
                                          if(  a == e &&  a == i ) {

                                
                                          } else { 
                                               if(  c == e &&  c == g ) {

                                
                                               } else { 
                                                    if(  a == d &&  a == g ) {

                                
                                                    } else { 
                                                         if(  b == e &&  b == h ) {

                                
                                                         } else { 
                                                              if(  c == f &&  c == i ) {

                                
                                                              } else { 
                                                                printf("la partita è finita con un pareggio");
                 }

                            
                } // PARENTESI FINALE!!!
