#include <stdio.h>
int main(){
	int a; 
	char p;
	printf("Inserisci la tua eta : \n");
	scanf("%d",&a);
	printf("HAi la patente (s/n)? \n");
	scanf(" %c" ,&p);
	if ((a>=18) && ((p=='s') || (p=='S')))       //posso non mettere l' else
	{
		printf("PUOI GUIDARE");
	}
	
}
