/*
Fusar Bassini Simone 3IC
es.c
Scrivi un programma in C che risolve il seguente problema.
Dato il numero N di individui di una popolazione iniziale di batteri e la percentuale di riproduzione giornaliera,
 calcolare e mostrare quanti giorni sono necessari affinché la popolazione raddoppi rispetto a quella iniziale.
*/
#include <stdio.h>
int main (){
    int n,somma=0,media,i;
    
    printf ("Inserisci una serie di numeri e -1 per terminare e avere la somma \n");
    do{
        scanf("%d",&n);
        if(n>=0){
            somma=somma+n;}
			i=1+i;}
        while(n>=0);
    media=somma/i;   
	printf("La media  %d",media);
    }

