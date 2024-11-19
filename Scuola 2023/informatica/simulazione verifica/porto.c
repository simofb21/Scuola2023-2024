/*
FUSAR BASSINI SIMONE 3IC 
porto.c
CONSEGNA:

5. In un porto turistico attraccano imbarcazioni fino a 20 metri. Le tariffe giornaliere sono le seguenti:
15€, fino a 5 m, 22€, fino a 12 m, 30€, fino a 15 m, 45€, oltre 15 m. Conoscendo il numero di giorni calcolare il costo totale dell’ormeggio.
*/
#include <stdio.h>M
#define COSTO5M	15
#define COSTO12	22
#define COSTO15	30	
#define COSTO20	45
int main() {
	
	int nGiorni,dimensioni,cosTot,cosGior;
		printf("Quanti giorni? ");
		scanf("%d",&nGiorni);			//questa & è l'indirizzo di memoria della variabile
		printf("Quanto e' lunga la tua barca? ");
		scanf("%d",&dimensioni);			//questa & è l'indirizzo di memoria della variabile
			//determino importo giornaliero in base a lunghezza
		if (dimensioni<=5){
			cosGior=15;
		}else if(dimensioni<=12){
			cosGior=22;
		}else if(dimensioni<=15){
			cosGior=30;
		}else if(dimensioni<=20){
			cosGior=45;
		}else{
			printf("Non puoi attraccare qui ");
		} //calcolo il totale da pagare 
		if(dimensioni<=20){
			cosTot=cosGior*nGiorni;
			printf("\nDevi pagare %d euro ",cosTot);
		} 
	
}
