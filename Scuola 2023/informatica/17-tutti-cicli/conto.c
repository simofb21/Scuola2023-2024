/*
Fusar Bassini Simone 3IC
conto.c
2. CONTO. In un conto corrente vengono effettuati N movimenti (il numero è specificato dall'utente all'inizio, 
il programma effettua un controllo dell'input affinché tale numero sia positivo e non nullo, altrimenti invita ad inserire un altro valore). 
Per ogni movimento viene poi inserito il tipo di movimento: "p" per prelievo e "v" per versamento e l'importo relativo.
 Si vuole visualizzare il saldo del conto al termine dei movimenti. Il saldo iniziale è di 1200€.
*/
#include <stdio.h>
        int main(){
                int nMov,i;
                char movimento;
                float saldo=1200.0,importo; //importo può essere sia prelevato che versato
                printf("Inserisci il numero di movimenti che vuoi effettuare ");
                scanf("%d",&nMov);
                    do{
                        if(!(nMov>0)){
                            printf("Assicurati che sia maggiore di 0 e rinseriscilo " );
                             scanf("%d",&nMov);}
                    }while(nMov<=0);
                   
                    for(i=1;i<=nMov;i++){
                        printf("Che tipo di movimento vuoi effettuare: \n p=prelevare oppure v=versare\n");
                        scanf(" %c",&movimento);
                        if(movimento=='p'){
                            printf("Inserisci la cifra che vuoi prelevare\n");
                            scanf("%f",&importo);
                            saldo=saldo-importo;
                        }
                        else  if(movimento=='v'){
                            printf("Inserisci la cifra che vuoi versare\n");
                            scanf("%f",&importo);
                            saldo=saldo+importo;
                        }else{                      //messaggio di errore; e non lo conto coem un movimento valido se sbaglia a scrivere
                            printf("Movimento non valido\n");
                            i--;}
                    }
                    printf("Il conto al termine di tutti i movimenti e' di %f",saldo);
}