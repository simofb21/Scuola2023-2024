/*
Fusar Bassini Simone
esercizio23_1.c 
Consegna:
Realizzare un programma in c che calcola l' area del cerchio e la sua circonferenza conoscendo il raggio
*/
#include <stdio.h>
#include<math.h>
int main(){
	float r,A,cir; 	//dichiaro variabili
	const float pi=3.14159;  //metto anche che pi è const(ante) in modo che in ogni caso il valore della variabile non possa cambiare ;

	printf("Inserisci il raggio in cm \n"); 								//inserisco raggio
	scanf("%f",&r);
	A=pi* pow(r,2); 															   //calcolo area:uso pow(r,2)per calcolare la potenza r^2
	cir=2*pi*r; 														  //calcolo circonferenza
	printf("L' area e' di %f \n Il raggio e'di %f",A,cir);               //stampo risultati
}

