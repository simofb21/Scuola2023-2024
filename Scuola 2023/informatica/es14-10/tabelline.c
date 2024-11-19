/*
Fusar Bassini Simone 
3IC
tabelline.c
TABELLINE. Scrivi un programma in C che consente di verificare le conoscenze delle tabelline. 
Il programma propone 4 operazioni di moltiplicazione casuali a cui deve rispondere inserendo il risultato. 
Ad ogni risposta il programma comunica se la risposta è corretta o sbagliata (fornendo il risultato corretto). 
 Al termine viene comunicato un giudizio così articolato:
- 4  risposte esatte (su 4) "eccellente"
- 3 risposte esatte (su 4) "buono"
- 2 risposte esatte (su 4) "sufficiente"
- 1 risposta esatta (su 4) "scarso"
- 0 risposte esatte (su 4) "torna alle elementari"

Esempio:
Quanto fa 7 x 8 ?
Vero o Falso? _
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
 int main(){
		int n1,n2,risultato,nRis=0,corr=0; //n1 e n2 sono i numeri, risultato è quello che mette l' utenet, nRis il numero di domande a cui si ha risposto , corr, il numero di risposte corrette 
		srand(time(0));
		printf("RISPONDI CORRETTAMENTE ALLE SEGUENTI DOMANDE PER PASSARE AVANTI\n");
		/*PRIMO NUMERO
		*/
		n1=rand()%11;
		n2=rand()%11;
		printf("%d x %d=",n1,n2);
		scanf("%d",&risultato);
		nRis=1+nRis;
		if(risultato==(n1*n2)){
			printf("CORRETTO \n");
			corr=1+corr;
		}else{
			printf("HAI SBAGLIATO; LA RISPOSTA CORRETTA  ERA %d \n" ,n1*n2);
		}
			/*SECONDO NUMERO
		*/
		n1=rand()%11;
		n2=rand()%11;
		printf("%d x %d=",n1,n2);
		scanf("%d",&risultato);
		nRis=1+nRis;
		if(risultato==(n1*n2)){
			printf("CORRETTO \n");
			corr=1+corr;
		}else{
			printf("HAI SBAGLIATO; LA RISPOSTA CORRETTA  ERA %d \n",n1*n2);
		}
			/*TERZO NUMERO
		*/
		n1=rand()%11;
		n2=rand()%11;
		printf("%d x %d=",n1,n2);
		scanf("%d",&risultato);
		nRis=1+nRis;
		if(risultato==(n1*n2)){
			printf("CORRETTO \n");
			corr=1+corr;
		}else{
			printf("HAI SBAGLIATO; LA RISPOSTA CORRETTA  ERA %d \n",n1*n2);
		}
			/*QUARTO NUMERO
		*/
		n1=rand()%11;
		n2=rand()%11;
		printf("%d x %d=",n1,n2);
		scanf("%d",&risultato);
		nRis=1+nRis;
		if(risultato==(n1*n2)){
			printf("CORRETTO \n");
			corr=1+corr;
		}else{
			printf("HAI SBAGLIATO; LA RISPOSTA CORRETTA  ERA %d \n",n1*n2);
		}
		if(nRis==4){
			printf("STAMPO DEI RISULTATI IN CORSO . ATTENDERE PREGO \n \n");
			printf("3 \n");
			printf("2 \n");
			printf("1 \n");
			printf("Ecco i risultati \n");
			 switch (corr) {
		 case 0:
            printf("HAI SBAGLIATO TUTTO, TORNA ALLE ELEMENTARI\n");
            break;
        case 1:
            printf("UNA RISPOSTA CORRETTA: SCARSO\n");
            break;
        case 2:
            printf("DUE RISPOSTE CORRETTE: 'SUFFICIENTE' \n");
            break;
        case 3:
            printf("TRE RISPOSTE CORRETTE: BUONO.\n");
            break;
        case 4:
            printf("4 RISPOSTE CORRETTE : OTTIMO\n");
            break; 
    }
		}
		
	return 0;
}

