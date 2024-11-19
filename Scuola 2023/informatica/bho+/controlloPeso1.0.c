/*
Fusar Bassini Simone 
3IC
controlloPeso.c 
Scrivi un programma in C che effettui il controllo sul peso di confezioni 
di pasta impacchettate manualmente da un gruppo di operatori.
 Inserendo la percentuale di tolleranza e il valore nominale della confezione, 
 il programma deve segnalare se il pacchetto rientra nella norma oppure deve essere scartato. 
 Dopo aver individuato 5 pacchetti �fuori norma�, il programma dovr� terminare indicando 
 la percentuale di errori di impacchettamento.*/
#include <stdio.h> 
#include <math.h>
int main(){
	float peso,tolleranza,pCorretto,percentuale,i=0; //metto i come double per stampare correttamente la percentuale
	int fuoriNorma=0;
	printf("Inserisci la tolleranza in percentuale\nTOLLERANZA=    ");
		scanf("%f",&tolleranza);
			printf("\nQuale sarebbe il peso corretto?\n   PESO CORRETTO=   "); 
		scanf("%f",&pCorretto);
	while(fuoriNorma<5){
	
		printf("Inserisci il peso della confezione\n PESO CONFEZIONE=   ");
		scanf("%f",&peso);
		i=i+1;
		if(fabs(pCorretto-peso)<=(tolleranza*pCorretto)){   //controllo rispetto tolleranza
			printf("\nPeso valido\n");	 
		}else{
			fuoriNorma=fuoriNorma+1;		//se non valido sale10
			printf("\nPeso non ritenuto valido\n\n");
		}
		if(fuoriNorma==5){
			printf("5 non corretti\n"); 
		}
	}
	percentuale=(5/i)*100;
	printf("La percentuale di scarto  e' del %.2f percento",percentuale); //stampo percentuale di scarto
	
}
