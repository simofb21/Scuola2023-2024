/*
Fusar Bassini Simone 3IC
MCD.c
4. MCD. Scrivi un programma in C che calcola il M.C.D. (massimo comune divisore) tra due numeri interi utilizzando l'algoritmo di Euclide (vedi flow chart allegato).
*/
#include <stdio.h>
int main(){
	int a,b,ris,resto;
	printf("Insrisci a ");
	scanf("%d",&a);
	printf("Insrisci b  ");
	scanf("%d",&b);
	while(b!=0){
		resto=a%b;
		a=b;
		b=resto;
	}
	ris=a;
	printf("MDC=%d",ris);
}
