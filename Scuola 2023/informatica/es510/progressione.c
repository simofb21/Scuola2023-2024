/*
fusar bassini simone  3IC
progressione.c
CONSEGNA: 2. PROGRESSIONE
Il programma ricevuti tre numeri interi, determina se possono essere considerati in progressione aritmetica;
 una progressione aritmetica è una serie di numeri in cui la differenza tra due numeri successivi è costante.
*/
#include <stdio.h>
int main(){
	int a,b,c;
	printf("Inserisci il primo numero \n");
	scanf("%d",&a);
	printf("Inserisci il secondo numero \n");
	scanf("%d",&b);
	printf("Inserisci il terzo numero \n");
	scanf("%d",&c);
	if((b-a)==(c-b)){
		printf("SONO IN PROGRESSIONE");
	}
	else {
		printf("NON SONO IN PROGRESSIONE");
	} return 0;
}
