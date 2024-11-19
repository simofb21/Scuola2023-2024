/*
Fusar Bassini Simone 
3IC
eq.c
Consegna
Scrivi un programma in C che dati i tre coefficienti reali a, b e c di 
un'equazione di secondo grado ax^2 + bx + c = 0 ne calcola e visualizza le radici.
 Considerare il caso in cui a è zero (equazione degenere) 
e il delta è negativo (soluzioni reali inesistenti).ù
*/
#include <stdio.h>
#include <math.h>
 int main(){
 	float a,b,c,x,x1,x2,delta;
 	printf("Inserisci a \n");
 	scanf("%f",&a);
 	printf("Inserisci b \n");
 	scanf("%f",&b);
 	printf("Inserisci c \n");
 	scanf("%f",&c);
 	delta=b*b-(4*a*c);
 	
 	if ((a!=0)&&(b!=0)&&(c!=0)){  //escludo tutti i casi in cui i fattori siano diversi da 0
 			if (!(delta>=0)){ //delta<0 eq imposs
 				printf("Equazione impossibile");
			} else {
			x1=(-b+ sqrt(delta))/(2*a); //calcolo x1,x2
 			x2=(-b-sqrt(delta))/(2*a);
 			printf("I risultati sono x1=%.2f,x2=%.2f",x1,x2);
			}
 	}
 	else{
 			if(a==0){ //se a è 0, quindi non è di secondo grado
		x=(-c)/b;
		printf("Un solo risultato : x=%.2f",x);
			} /* parte sbagliata
			if(b==0){   //se b è 0 spuria
		x1=sqrt((-c/a));
		x2=-sqrt((-c/a));
		
		if (-c<0){   //calcolo di  spurie
			printf("Equazione impossibile");
			}
			else{
				printf("I risultati sono x1=%.2f,x2=%.2f",x1,x2);
	 }	}
	 if(c==0){ //pure
		x1=0;
		x2=-b/a;
		printf("I risultati sono x1=%.2f,x2=%.2f",x1,x2);
		} */ 
} 
}



 
