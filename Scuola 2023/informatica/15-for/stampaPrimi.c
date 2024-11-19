/*
Fusar Bassini Simone
3IC
stampaPrimi.c
consegna:4. TUTTI PRIMI. Scrivi un programma in C che stampa tutti i numeri primi compresi tra 2 e n (n è inserito dall'utente).
N.B. Puoi partire dal codice dell'esercizio precedente.*/
#include <stdio.h>
#include <stdbool.h>
int main(){
    int i,n=2,nMax;
    bool primo=true;
    printf("Inserisci un numero massimo ");
    scanf("%d",&nMax);
    printf("1,");
  for(n=2;n<=nMax;n++)  {
		primo=true;
    for (i=2;i<n;i++){
    	if (n%i==0)
    		primo=false;
	} if (primo)
		printf("%d ,",n);
		
	} 
}