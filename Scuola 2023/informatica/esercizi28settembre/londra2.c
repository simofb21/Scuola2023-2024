/*
Fusar Bassini Simone
londra2.c 
Consegna:
 Scrivi un programma in C che data una somma di denaro in euro (EUR) calcola e visualizza la conversione in Sterline Inglese (GBP).
Ipotizzare il cambio costante pari a:  1 ERU = 0,87 GBP
*/
#include <stdio.h>             
#define CONV 0.87;
int main(){
	float euro,pound; //dichiaro variabili 
	printf("Inserisci il valore in euro che devi convertire in sterline \n"); //innput di euro
	scanf("%f",&euro);
	pound=euro*CONV;
	printf("convertito in sterline sono %f",pound); //stampo di sterline
	return 0;
}  


