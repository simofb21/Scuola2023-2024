/*
Fusar Bassini Simone 
oca.c
4. OCA. Fare un programma per simulare il gioco dell’oca per due giocatori, 
a turno ogni giocatore muove la propria pedina di tante caselle quanto la somma del lancio di due dadi a sei facce; 
nel caso in cui sui due dadi vengono due valori uguali, quello è un lancio fortunato perché dopo aver mosso,
 tocca nuovamente a quel giocatore, se un giocatore è molto fortunato può fare anche più lanci fortunati consecutivi. 
 Vince il primo giocatore che arriva alla casella 100.
*/
#include <stdio.h>
 #include <stdlib.h> 
 #include <time.h> 
int main(){ //aggiungo interfaccia in modo che il giocatore 1 e 2 possono gicare, ogni turno devono dire s 
    int dado1,dado2,pos1=0,pos2=0;  
    char scelta;
    srand(time(0)); 
    printf("Inizio del gioco\n");
    while(pos1<=100||pos2<=100){                    //al posto di usare il goto  bastava fare una variabile giocatore corrente, che può essrere uno o due; vedi soluzione profs
        //turno primo giocatore
        printf("\nE' il turno del primo giocatore: \n");
        Giocatore1 :  
		printf("Digita s per tirare ");
    	scanf(" %c",&scelta);  
    	 if(scelta=='s'){
	
            dado1=rand()%6+1; 
            dado2=rand()%6+1;
            printf("Il dado estrae %d e %d",dado1,dado2);
            pos1=pos1+dado1+dado2;
            printf("\nTi trovi alla casella %d\n ",pos1);

                if(dado1==dado2){
                        printf("Rigiochi ancora,\n ");
                        goto Giocatore1 ;
                }}
                    
        //secondo giocatore
		 printf("\nE' il turno del secondo giocatore: \n,  ");
        Giocatore2 :
			printf("Digita s per tirare ");
    		scanf(" %c",&scelta);  
    	 if(scelta=='s'){
            dado1=rand()%6+1;
            dado2=rand()%6+1;
             printf("Il dado estrae %d e %d",dado1,dado2);
                pos2=pos2+dado1+dado2;
            printf("\nTi trovi alla casella %d\n ",pos2);
            if(dado1==dado2){
                        printf("Rigiochi ancora\n  ");
                        goto Giocatore2 ;
                } }
             if (pos1 >= 100 || pos2 >= 100) {
            break;
        }     
    }
    if(pos1>pos2)
        printf("Il vincitore e' il primo giocatore");
    else 
        printf("Il vincitore e' il secondo giocatore");
}