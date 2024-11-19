/*
Fusar Bassini Simone 3IC
es4_30.c
Consegna:
Scrivi un programma in C che chiede all'utente quanti soldi ha e quanto costa la moto. 
Il programma mostra un messaggio che dice se può comprare la moto oppure no.
*/
#include<stdio.h>
int main(){
	float soldi,costoMoto;
	printf("Inserisci quanti soldi hai e quanto costa la  moto<(i 2 prezzi van separati con una virgola) \n");
	scanf("%f,%f",&soldi,&costoMoto);
	if(soldi>=costoMoto){
		printf("Puoi acquistare la moto");
	}
	else{
		printf("NON PUOI ACQUISTARE LA MOTO!!!");
	}
	return 0;
}
