/*
Fusar Bassini Simone
londra1.c 
Consegna:
 Scrivi un programma in C che chiede all'utente di inserire una temperatura in gradi Celsius e la converte in gradi Fahrenheit mostrando il risultato.
La formula per la conversione �:   F = C * 9 / 5 + 32
*/

#include <stdio.h>               
int main(){
	float celsius,farenheit; //dichiaro variabili 
	printf("Inserisci la temperatura in Celsius \n"); //chiedo di inserire i dati
	scanf("%f",&celsius);
	farenheit=(celsius*9)/5+32; //converto
	printf("I tuoi gradi in Farenheit sono %.2f",farenheit); //stampo risultato
	return 0;
}  
