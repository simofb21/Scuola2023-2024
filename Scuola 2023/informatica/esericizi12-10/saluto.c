/*
Fusar Bassini Simone 
3IC
saluto.c
Consegna
Scrivi un programma che legge 
un numero che indica la nazionalità di una persona (0 = italiano, 1 = inglese, 2 = francese) e gli comunica un saluto nella sua lingua.
*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
 int main(){
	int n;
	printf("Inserisci un numero che indichi la nazionalita' :\n 0=italiano,1=inglese,2=francese\n");
	scanf("%d",&n);
	if(n==0){
		printf("CIAO BELLO");
		}else if(n==1){
			printf("HI HOW ARE U?");}
		else if(n==2){
			printf("BONJOUR COMMENT ALLEZ VOUS?");
		}
	else{
		printf("NAZIONALITA NON RICONOSCIUTA");
	}	
}












