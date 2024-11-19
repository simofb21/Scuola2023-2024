/*
Simone Fusar Bassini
3IC
piramide.c
Scrivi un programma in C che visualizza una piramide di altezza data. 
Esempio: l'utente inserisce 5 e il programma visualizza 5 righe (la prima con un asterisco, la seconda con due asterischi ecc..):

*/
#include <stdio.h>
    int main(){
            int n,i,aste;
            printf("Inserisci il numero di righe che vuoi   ");
            scanf("%d",&n);

                for (i=1;i<=n;i++){             //for per colonna 
                         printf("\n");        
                   for(aste=1;aste<=i;aste++){            //singola riga
                        printf("*");

                    }
                           
                }
    }