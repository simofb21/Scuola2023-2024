/*
fusar bassini simone  3IC
multiplo.c
CONSEGNA: il programma legge due numeri interi inseriti dall’utente
 e controlla se il primo è multiplo del secondo comunicandolo con un messaggio opportuno.
*/
#include <stdio.h>
int main(){
	int a,b;
	printf("Inserisci il primo numero \n");
	scanf("%d",&a);
	printf("Inserisci il secondo numero \n");
	scanf("%d",&b);
	if(a%b==0||b%a==0){
		printf("%d e' un multiplo o divisore  di %d",a,b);
	}
	else {
		printf("%d  non e'un multiplo o divisore di %d",a,b);
	} return 0;
}
