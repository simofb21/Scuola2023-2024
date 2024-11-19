/*
Fusar Bassini Simone 3IC
totalizzatore.c
2. TOTALIZZATORE. Progetta un totalizzatore per il gioco del biliardo. 
Il programma chiede ogni volta i punti realizzati in un tiro e comunica il totale parziale raggiunto. 
Il programma termina quando si raggiunge o si supera il punteggio di 100 comunicando la vittoria.
*/
#include <stdio.h>
int main (){
    int punti,parziale=0;
    
    
      while(parziale<100){
	 
        if(parziale<100){
        	printf("Inserisci i punti  \n");
			scanf("%d",&punti);
			if (punti<0){
				punti=-(punti);
				printf("Scrivi meglio la prossima volta \n");
			}
			parziale=punti+parziale;
			printf("Il punteggio parziale e' %d: ",parziale);
			
        }
	}
        	printf("Hai vinto");	
    }

