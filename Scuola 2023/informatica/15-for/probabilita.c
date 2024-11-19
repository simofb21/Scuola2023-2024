/*
Fusar Bassini Simone
3IC
probabilita.c
5.  PROBABILITA'. Scrivere un programma in C che simula il lancio di un dado a sei facce per un numero
 di volte specificato dall’utente, mostra i risultati e alla fine calcola la percentuale di quante volte è uscito il 6.
Es. inserendo 10 stampa
5 6 2 3 1 6 3 4 1 2
il 6 è uscito 2 volte su 10 (20%)*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
     int n,i,nVolte,nSei=0;
     float perc;
      srand(time(0));
   printf("Inserisci il numero di volte ");
   scanf("%d",&nVolte);
   for(i=1;i<=nVolte;i+=1){
    n=rand()%6+1;
    if(n==6){
        nSei+=1;
    }
    }
    printf("\nIl numero sei viene  pescato %d volte su %d",nSei,nVolte);
    perc=(float)nSei/(float)nVolte*100;
    printf(" \n la percentuale  e' del %f: ",perc);
    }