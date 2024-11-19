/*
Fusar Bassini Simone 
3IC
lotteria.c
  Scrivi un programma in C che simula una combinazione di simboli di una slot machine estraendo 3 numeri casuali tra 0 e 9
   e li visualizza sullo schermo insieme ad un messaggio di vincita o perdita così definito:
- tre simboli uguali (es. 444) "hai vinto 10 euro"
- due simboli uguali (es. 272) "hai vinto 1 euro"
- altrimenti "hai perso 1 euro"
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
 	
 	int main(){
 		int a,b,c;
 		char bottone;
 		srand(time(0)); //srand per impostare al tempo 0 
 		//PRIMA GIOCATA
 		printf("DIGITA S PER INIZIARE A GIOCARE. QUANDO AVRAI FINITO DIGITA F \n");
 		scanf(" %c",&bottone);
 			if (bottone=='S'){
 				a=rand()%10;
 				b=rand()%10;
 				c=rand()%10;
 				printf("%d %d %d ",a,b,c);
 				if((a!=b)&&(b!=c)&&(c!=a)){
 					printf("Hai perso 1 euro\n");
 					}
 				else if((a==b)&&(b==c)&&(c==a)){
 					printf("Hai VINTo 10 euro\n");
 					}
 				else if((a==b)||(b==c)||(c==a)){
 					printf("Hai vinto 1 euro\n");
 					}
 				}
 			printf("DIGITA F PER  FERMARTI E RITIRARE ALTRIMENTI S PER CONTINUARE: PUOI FARE SOLO UN' ALTRA PARTITA , PERCHE' SIAM CONTRO LA LUDOPATIA\n");
 			//controllo per ritirare o iniziare seconda partita
 			scanf(" %c",&bottone);
 			if(bottone=='F'){
 					printf (" TI SEI FERMATO.'\n");
				 }
				 
				  else if (bottone=='S'){
 					a=rand()%10;
 					b=rand()%10;
 					c=rand()%10;
 					printf("%d %d %d ",a,b,c);
 					if((a!=b)&&(b!=c)){
 						printf("Hai perso 1 euro\n");
 						 scanf(" %c",&bottone); 
 						}
 					else if((a==b)&&(b==c)){
 					printf("Hai perso 10 euro\n");
 					 scanf(" %c",&bottone); 
 					}
 				if((a!=b)&&(b!=c)&&(c!=a)){
 					printf("Hai perso 1 euro\n");
 					}
 				else if((a==b)&&(b==c)&&(c==a)){
 					printf("Hai VINTo 10 euro\n");
 					}
 				else if((a==b)||(b==c)||(c==a)){
 					printf("Hai vinto 1 euro\n");
 					}
 					}
 			if (bottone=='F'){
			 }printf("SE HAI VINTO PUOI RITIRARE LA VINCITA IN CASSA");
 			
 			//TROPPE CONDIZIONI
	 }

