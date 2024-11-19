/*
Fusar Bassini Simone 
3IC
maggiore.c
Consegna
Scrivi un programma in C che dati due numeri interi inseriti dall'utente individua il maggiore, 
considerando anche la situazione nella quale i due numeri sono uguali. 
*/
#include <stdio.h>
#include <stdbool.h>
int main()
{
	int a,b,maggiore;
	printf("Inserisci il primo numero , \n il programma ti dirà il numero maggiore oppure se i 2 numeri sono uguali \n");
	scanf("%d",&a);
	printf("Inserisci il secondo numero , \n ");
	scanf("%d",&b);
	a=maggiore;
	if(b>maggiore){
		maggiore=b;
		}
	if (b==a){
		printf("Sono uguali");
		} 
	else{
			printf("Il maggiore e' %d",maggiore);
		}
}


	
	
