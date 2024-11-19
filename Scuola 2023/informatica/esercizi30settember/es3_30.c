/*
Fusar Bassini Simone 3IC
es3_30.c
Consegna:
Scrivi un programma in C che Dopo aver inserito quantità e prezzo di un prodotto, calcola e mostra il totale da pagare: 
se l’importo supera i 100 euro l'importo da pagare viene scontato del 5%.

*/
#define SCONTO 0.05
#include<stdio.h>
int main(){
	int quantita;
	float prezzoProdotto, prezzoTot;
	printf("Inserisci la quantita di pezzi acquistati, e il costo di un singolo pezzo separati da una virgola \n");
	scanf("%d,%f",&quantita,&prezzoProdotto);
	prezzoTot=prezzoProdotto*quantita;
	if(prezzoTot>100){
		prezzoTot=prezzoTot*(1-SCONTO);
	}
	else {
		prezzoTot=prezzoTot;
	}
	printf("Il prezzo da pagare e' %.2f",prezzoTot);
	return 0;
}
