/*
Fusar Bassini Simone 3IC
verificaInput.c

CONTROLLO INPUT.  Presentare il seguente men� di scelta:

1)somma
2)differenza
3)prodotto
4)quoziente
5)uscita

Leggere la variabile scelta (di tipo intero) e validarne l'input (accettare solo i valori ammissibili e
ripetere la scelta finch� il tasto premuto non � uguale a 5). Simulare le operazioni aritmetiche con un semplice messaggio.
*/
#include <stdio.h>
int main(){
	int numero;
do{
	printf("Inserisci un numero  \n Le opzioni disponibili : 1)somma 2)differenza 3)prodotto 4)quoziente 5)uscita \n");
	scanf("%d",&numero);
	switch (numero)
	{
	case 1:
		printf("Sto eseguendo la somma\n");
	break;
	case 2:
		printf("Sto eseguendo la sottrazione\n");
	break;
	case 3:
		printf("Sto eseguendo la moltiplicazione\n");
	break;
	case 4:
		printf("Sto eseguendo il quoziente\n");
	break;
	case 5:
		printf("Sto uscendo\n");
	break;
	}
	}	while((numero!=5));

}
