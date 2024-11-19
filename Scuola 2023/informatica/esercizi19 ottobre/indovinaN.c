/*
Fusar Bassini Simone 3IC
batteri.c
Scrivi un programma in C che realizza un gioco in cui l'utente deve indovinare un numero nascosto compreso tra 1 e 1000 
(estratto casualmente dal computer). Ad ogni tentativo il programma comunica al giocatore se il numero nascosto è maggiore o minore rispetto al tentativo. 
Quando il numero viene indovinato il programma comunica il numero di tentativi fatti.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	
	int n,i=0,nUtente;
	srand(time(0));
	n=rand()%1000+1;
	nUtente==0;
	printf("Inserisci il numero che pensi sia  \n");

	while (nUtente!=(n))
	{
		scanf("%d",&nUtente);
		if(nUtente>n){
		printf("Inserisci un numero  minore \n");
		}else if(nUtente<n){
			printf("Inserisci un numero maggiore \n");
			}
		i=1+i;
	}
	printf("Bravo : il numero corretto era %d \nHai fatto %d tentativi",n,i);
	
	return 0;
}
