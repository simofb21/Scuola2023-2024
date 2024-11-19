
#include <stdio.h>
#include <stdlib.h>

//inizio funzione:  dichiarazione o prototipo :scrivo come è fatta la funzione
// int casuae(); (la metto come commento; mi serve solo a vedere la struttura della funziones)
//definizione funzione; stamperà il doppio .
int casuale(){
   int a,b,n;
   n=rand()%(b-a)+a;
   return n;
}       //la posso scrivere sia prima che dopo in teoria ; se la scrivo dopo però devo mettere il prototipo magari prima , quindi struttura prototipo, main,funzione
// ora vado nel main
    int main(){     //anche il main è una funzione , questo è il programma principale, la funzione la piazzo prima  o dopo
        int a,b;          //posso chiamarla ancora a , è diversa, questa è quella del programma
        b=casuale(100,300);

        //stampo il risultato
        printf("Casuale e' %d",b);
      
       return 0;
}