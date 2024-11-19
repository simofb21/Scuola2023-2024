/*
Simone Fusar Bassini
3IC
lotto.c
Scrivere un programma in C che stima la probabilità di indovinare un numero al lotto simulando 100 estrazioni. 

Suggerimento. Chiedere un numero all’utente, poi per ogni estrazione: generare 5 numeri compresi tra 1 e 90
 inclusi contando se è uscito il numero inserito dall’utente. 
Alla fine calcolare la probabilità come rapporto tra le uscite e il totale delle estrazioni.
*/
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
    int main(){
                float percentuale;
                int nEstrazioni,nUtente,nGenerato,i,nVolteGenerato=0;
                srand(time(0));
                  printf("Indovina il numero : ");       //richiesta input utente numero di cui verificare la probabilità
                    scanf("%d",&nUtente);
                    for (nEstrazioni=1;nEstrazioni<=100;nEstrazioni++){         //for che verifica numero di estrazioni

                        for(i=1;i<=5;i++){                      //for per estrazione singola di 5 numeri
                            nGenerato=rand()%90+1; 
                            printf("%d\n",nGenerato);       //lascio vedere il risultato della singola estrazione
                            if(nGenerato==nUtente){
                                nVolteGenerato++;
                            }
                    
                        }
                        
                      
                    }
            percentuale=(float)nVolteGenerato/(nEstrazioni-1)*100;
            printf("Il numero viene estratto %d volte",nVolteGenerato);
            printf("\nLa percentuale di volte che esce e'%f percento",percentuale);


    }