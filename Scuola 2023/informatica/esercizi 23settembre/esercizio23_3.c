/*
Fusar Bassini Simone
esercizio23_3.c 
Consegna:
Realizzare un programma in c che consente di calcolare l' importo della busta paga. 
La paga di un operaio   di 15,00  all'ora, sulla stessa paga viene trattenuta una tariffa del 27%.
Il programma chiede il numero delle ore lavorate e stampa l' importo da pagare
*/
#include <stdio.h>
int main(){
		float ore,daPagare; //dichiaro tutte le variabili
		const float PERCENTUALE_TRATTENUTA=0.27;  //assegno il valore alla variabile delle percentuale in modo che si possa cambiare
		const float PAGA_ORARIA=15.00;   //il valore della paga oraria
		printf("Inserisci  il numero delle ore lavorate \n"); //chiedo di inserire il numero delle ore lavorate
		scanf("%f",&ore);
		daPagare=(PAGA_ORARIA*ore)*(1-PERCENTUALE_TRATTENUTA); //faccio il calcolo dell' importo da pagare
		printf("La paga  e' di euro %f", daPagare); //stampo il risultato
		
		
} 
