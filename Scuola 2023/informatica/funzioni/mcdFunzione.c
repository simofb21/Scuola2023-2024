/*
Fusar Bassini Simone 3IC
MCD.c
4. MCD. Scrivi un programma in C che calcola il M.C.D. (massimo comune divisore) tra due numeri interi utilizzando l'algoritmo di Euclide (vedi flow chart allegato).
*/
int mcd (int a , int b); //prototipo
#include <stdio.h>
int main(){ //main
	int a,b,ris,resto;
	printf("Insrisci a ");
	scanf("%d",&a);
	printf("Insrisci b  ");
	scanf("%d",&b);
	
	ris=mcd(a,b);
	printf("MDC=%d",ris);           //al posto del printf posso fare leggi
}
int mcd(int a,int b){   //funzione
        int resto;
    while(b!=0){
		resto=a%b;
		a=b;
		b=resto;
	}
    return a;
}