/*
Fusar Bassini Simone 
3IC
data.c
Consegna
programma verifica se una data inserita è corretta 
(attenzione i mesi sono 12, e non in tutti i mesi ci sono 31 giorni, per semplicità non consideriamo gli anni bisestili ?? )
*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
 int main(){
	int giorno,mese,anno;
	bool notValid=false;
		printf("Inserisci il giorno\n");
		scanf("%d",&giorno);
		printf("Inserisci il mese\n");
		scanf("%d",&mese);
		printf("Inserisci l'anno\n");
		scanf("%d",&anno);
		if (((mese<0)||(mese>12))||(giorno<0)||(giorno>31)){ //controllo se esco dalle date valide generali 
			notValid=true;
		}
			if(mese==2){ //controllo per febbraio
				if(giorno>28){
					notValid=true;
				}
			}else if((mese==4)||(mese==11)||(mese==6)||(mese==9)){ //controllo per sett, nov,giugno e aprile
					if(giorno>30){
					notValid=true;
					}
			}else if(giorno>31){ //tutti gli altri casi
				notValid=true;
			}
			if((anno%4==0)&&(anno%100!=0)) //controllo per anno bisesistile
			{
			if((mese==2)&&(giorno==29)){
					notValid=false;
				}
			}
			if(notValid){
				printf("Hai inserito una data errata");
				}
			else{
				printf("Hai inserito una data valida");
			}
				
}	

