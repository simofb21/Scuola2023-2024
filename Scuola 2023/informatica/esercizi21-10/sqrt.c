/*
Fusar Bassini Simone 3IC
sqrt.c
6. RADICE QUADRATA. Secondo la formula di Newton se x � un'approssimazione della radice quadrata di a allora 
(x+a/x)/2 � un'approssimazione migliore. Scrivi un programma che calcola la radice quadrata di un numero
 utilizzando la formula di Newton: inizia con un valore approssimato di x = a/2, quindi applica 
ripetutamente la formula fino a quando la differenza assoluta tra il nuovo valore di x e il precedente valore (usa fabs() di math.h) � inferiore ad una quantit� predefinita (tolleranza).
*/
#include <stdio.h>
#include <math.h>
int main(){
	float toller,x,a,deltaX;
	printf("Inserisci il numero di qui vuoi avere la radice ");
	scanf("%f",&a);
	printf("\nInserisci la tolleranza espressa come un numero: Pi� il numero e' basso + saremo precisi ");
	scanf("%f",&toller);
	//calcoli
	x=a/2;
	deltaX=x;
		while(fabs((x-sqrt(a)))>toller){
			x=(x+a/x)/2;
			deltaX=deltaX-x;
			printf("%f,%f",x,deltaX);
			
		}
	printf("La radice quadrata di %f e'%f",a,x);
	
	
	
	
	
	
	
	
	
	
	
	
	}
