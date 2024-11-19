/*
Presentare il seguente menù di scelta:

1)somma
2)differenza
3)prodotto
4)quoziente
5)uscita

Leggere la variabile scelta (di tipo intero) e validarne l'input (accettare solo i valori ammissibili e
ripetere la scelta finché il tasto premuto non è uguale a 5). 
Simulare le operazioni aritmetiche con un semplice messaggio.
*/

#include <stdio.h>

int main(){
	
	int scelta;
	scelta=0;
	while(scelta!=5){
	
	 	printf("Inserisci la tua scelta:1 - somma \n2 - differenza\n3-prodotto\n4 quoziente\n5 uscita ");
	 	scanf("%d", &scelta);
		switch(scelta) {
			case 1:
				printf("Hai scelto somma...\n");
				break;
			case 2:
				printf("Hai scelto differenza...\n");
				break;
			case 3:
				printf("Hai scelto moltiplicazione...\n");
				break;
			case 4:
				printf("Hai scelto divisione...\n");
				break;
			case 5:
				printf("Arrivederci!\n");
				return 0;
			default:
				printf("Scelta non valida!\n");
		}
	}
	return 0;
}
