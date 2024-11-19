//scrivi un programma che dato orario espresso in ore, minuti, secondi, calcoli e comunichi il numero di secondi trascorsi dalla mezzanotte
#include <stdio.h>
int main(){
	int ore,min,sec,sTrascorsi,l;
	printf("Inserisci l'orario nel formato ore:minuti:secondi \n");
	scanf("%d:%d:%d",&ore,&min,&sec);
	sTrascorsi=sec+min*60+ore*3600;
	printf("I secondi trascorsi sono: %d \n",sTrascorsi);
}