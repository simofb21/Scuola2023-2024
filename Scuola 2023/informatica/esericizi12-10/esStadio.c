/*
Fusar Bassini Simone 
3IC
esStadio.c
Consegna
Allo stadio il costo del biglietto è gratis fino a 10 anni e sopra i 65, costa 5 euro fino a 18 anni e
 10 euro per tutti gli altri: scrivi un programma che legge un numero intero indicante l’età dello spettatore e visualizza l’importo che deve pagare.

*/
#include <stdio.h>
#include <math.h>
 int main(){
int eta;
float costo;
printf("Inserisci l' eta'\n");
scanf("%d",&eta);
if ((eta>=18)&&(eta<65)) {
	costo=10;
}
else if((eta<=10)||(eta>=65)){
	costo=0;
}
else if((eta>10)&&(eta<18)){
	costo=5;
}
printf(" Il costo da pagare e'%.2f",costo);
 
 } 
