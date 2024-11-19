/*
Fusar Bassini Simone
es1compito.c 
Consegna:
Dati in ingresso la base e l' altezza di un triangolo rettangolo, calcolare e mostrare perimetro e area
*/
#include <stdio.h> 
#include <math.h>                  //includo anche un altra libreria
int main(){
	float Area,base,altezza,perimetro, lato; //dichiaro variabili 
	printf("Inserisci la base e l' altezza separati da una virgola \n"); //chiedo di inserire i dati
	scanf("%f,%f",&base,&altezza );
	Area=(base*altezza)/2; //calcolo area
	lato=sqrt((base*base)+(altezza*altezza)); //calcolo lato
	perimetro=lato+base+altezza; //calcolo perimetro
	printf("Il perimetro e' %f e  l' Area e' %f",perimetro,Area); //stampo risultato
}
