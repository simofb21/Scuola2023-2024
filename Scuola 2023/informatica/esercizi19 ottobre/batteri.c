/*
Fusar Bassini Simone 3IC
batteri.c
Scrivi un programma in C che risolve il seguente problema.
Dato il numero N di individui di una popolazione iniziale di batteri e la percentuale di riproduzione giornaliera,
 calcolare e mostrare quanti giorni sono necessari affinché la popolazione raddoppi rispetto a quella iniziale.
*/
#include <stdio.h>
int main(){
	
	int n,ni,i=0;
	float p;
	printf("Inserisci il numero iniziale di batteri \n");
	scanf("%d",&ni);
	printf("Scrivi la percentuale di aumento: \n es  20 percento=0.2 Es 200percento=2.0 ....\n");
	scanf("%f",&p);
	n=ni;
	
	while (n<=(2*ni))
	{
		n=n+(n*p);
		printf("Popolazione attuale %d \n",n);
		i=1+i;
	}
	printf("Il numero di giorni  per raddoppiare e' %d",i);
	return 0;
}
