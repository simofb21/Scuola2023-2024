/*
FUnzione doppio */
#include <stdio.h>
//inizio funzione:  dichiarazione o prototipo :scrivo come è fatta la funzione
// int doppio(int a); (la metto come commento; mi serve solo a vedere la struttura della funziones)
//definizione funzione; stamperà il doppio .
int doppio(int a){
    return a*2;
}       //la posso scrivere sia prima che dopo in teoria ; se la scrivo dopo però devo mettere il prototipo magari prima , quindi struttura prototipo, main,funzione
// ora vado nel main
    int main(){     //anche il main è una funzione , questo è il programma principale, la funzione la piazzo prima  o dopo
        int a,b;          //posso chiamarla ancora a , è diversa, questa è quella del programma
        printf("Inserisci un numero intero ");
        scanf("%d",&a);
        b=doppio(a);            //uso la funzione doppio

        //stampo il risultato
        printf("Il doppio e' %d",b);
      
       return 0;
}