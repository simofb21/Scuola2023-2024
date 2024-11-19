#include <stdio.h>
int main(){
	int i=1,n,fatt=1;
	printf("DI CHE Numero vuoi il fattoriale \n");
	scanf("%d",&n);
	printf("%p\n",&i);
	while (i<=n)
	{
		//istruzioni nel ciclo
		fatt=fatt*i;
		i++;
	}
	printf("%d ! = %d",n,fatt);
}
