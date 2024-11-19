/*
Fusar Bassini Simone 3IC
es1_30.c
Consegna:
 MAXTRA2. Scrivi un programma in C che chiesti all'utente due numeri interi determina il maggiore tra i due.
*/
#include <stdio.h>
int main(){
	int a,b;
	printf("Determina il numero maggiore tra a e b\n"); 
	printf("Inserisci a e b separati da una virgola \n"); //chiedo di inserire i 2 numeri
	scanf("%d,%d",&a,&b);
	if(a>b){ //stampo il maggiore, se sono uguali sarà sempre b
		printf("Il maggiore e' a(%d)",a);
	}
	else{
			printf("Il maggiore e' b(%d)",b);
	}
}
