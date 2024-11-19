/*
Calcolare l'area di un rettangolo. 
Dichiarare due variabili per la lunghezza e la larghezza del rettangolo, calcolare l'area e stampare il risultato.
*/
#include <stdio.h>
int main(){
	float area,base,altezza;
	printf("Inserisci base e altezza separati da uno spazio bianco \n");
	scanf("%f %f",&base,&altezza );
	area=base*altezza;
	printf("\n L' area e' %f",area);

}
