
/*
Fusar Bassini Simone 
3IC
quiz.c
 CULTURA. Scrivi un programma in C che propone all'utente un quiz composto da 4 
 domande di cultura generale a cui l'utente può rispondere vero o falso.
  Al termine viene comunicata la percentuale di risposte esatte.

Esempio:  
Domanda 1
La capitale d'Italia e' Milano.
Vero o Falso? _
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
 int main(){
	int tr=-4,nRis=0,bot;
	char ris;
	srand(time(0)); //srand per impostare al tempo 0 
		
	printf("La risposta deve essere sempre con vero o falso, se è vero scrivere v o V, se falso scrivere f o F\nSe vuoi l' aiuto del bot scrivi H' \n");

printf("L' Italia è in America.'Vero o Falso?' ");
scanf(" %c",&ris);
nRis=nRis+1;
	if ((ris=='v')||(ris=='V')){
			tr=tr+1;
	}else if(ris=='H'){
	bot= rand()%2;	
			}if (bot==1){
				tr=tr+1;
		}
	
	
printf("5+5=2x5.'Vero o Falso?' ");
scanf(" %c",&ris);
nRis=nRis+1;
		if ((ris=='v')||(ris=='V')){
			tr=tr+1;
	}else if(ris=='H'){
		bot= rand()%2;	
		}	if (bot==1){
				tr=tr+1;
		}
	
	
printf("Il presdidente dell' Italia è Mattarella?'.'Vero o Falso?' ");
scanf(" %c",&ris);
nRis=nRis+1;
		if ((ris=='v')||(ris=='V')){
			tr=tr+1;
	}else if(ris=='H'){
		bot= rand()%2;	
		}	if (bot==1){
				tr=tr+1;
		}
	
printf("San francesco era di Assisi.'Vero o Falso?' ");
scanf(" %c",&ris);
nRis=nRis+1;
		if ((ris=='v')||(ris=='V')){
		tr=tr+1;
	}else if(ris=='H'){
		bot= rand()%2;	
		}if (bot==1){
			tr=tr+1;
		}
if (nRis==4){
	printf("TEST FINITO \n hai totalizzato %d domande corrette",tr);
	
}	
	return 0;
}


