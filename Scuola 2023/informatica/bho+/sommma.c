#include <stdio.h>
int main() {
	 int a,b,ris;                                                            //dichiarazione variabili: a e b sono gli addendi; ris contiene la somma
    printf("Inserisci il primo numero intero") ;                                   //lettura dati utente 
    scanf("%d",&a);
     printf("Inserisci il secondo numero intero")   ;     
    scanf("%d",&b);
    ris=a+b;                                                                    //espressione
    printf("il risultato  della somma di %d e %d e'� %d",a,b,ris);                //risultato
}
