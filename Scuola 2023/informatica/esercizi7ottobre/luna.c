/*
Fusar Bassini Simone 
3IC
luna.c
Consegna
La prima volta che l'uomo è andato sulla Luna è stato il 1969.
Creare un programma in C che chiede l'anno di nascita all'utente e gli risponde 
se è nato l'anno in cui l'uomo è andato sulla Luna o quanti anni prima o quanti anni dopo.
*/
#include <stdio.h>
 int main(){
 	int anno,differenza,LUNANNO=1969;
 	printf("Inserisci l' anno di nascita \n");
 	scanf("%d",&anno);
 	if(anno-LUNANNO==0){
 		printf("Sei nato lo stesso anno");}
 	else{
 		differenza=anno-LUNANNO;
 		if(differenza>0){
 			printf("Sei nato %d anni dopo",differenza);
		 }
		 else{
		 	differenza=-1*differenza;
		 	printf("Sei nato %d anni prima",differenza);
		 }
	 }
	 }
 
 
