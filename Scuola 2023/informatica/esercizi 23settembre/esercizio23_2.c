/*
Fusar Bassini Simone
esercizio23_2.c 
Consegna:
Realizzare un programma in c che chiede all' utente un numero intero e stampa a video il numero precedente e il numero sucessivo a quello inserito
*/
#include <stdio.h>
int main(){
	int n,np1,nm1; //dichiaro n
	printf("Inserisci un numero intero \n"); 
	scanf("%d",&n); //input n
	nm1=n-1; // il precedente 
	printf("Il precedente e' %d \n",nm1);
	np1=(n+1);// il sucessivo 
	printf("Il sucessivo e' %d",np1);
}
