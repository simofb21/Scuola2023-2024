/*
Fusar Bassini Simone 3IC
media.c
1. MEDIA. Scrivi un programma in C che calcola e visualizza la media di una serie di numeri inseriti dall�utente.
 I numeri sono acquisiti uno alla volta e la sequenza termina quando l�utente inserisce un numero negativo.
*/
#include <stdio.h>
int main (){
    float n,somma=0,media;
    int i=0;
    
    printf ("Inserisci una serie di numeri e un numero negativo per terminare \n");
    do{
        scanf("%f",&n);
        if(n>=0){
            somma=somma+n;
			i=1+i;}
		}
        while(n>=0);
    if(n<0){
			media=somma/i;   
	printf("La media  %f",media);
		}
    }

