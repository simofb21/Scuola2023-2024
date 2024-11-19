/*
Fusar Bassini Simone 3IC
es2_30.c
Consegna:
2. PARI. Scrivi un programma che dati un numero intero inserito dall'utente determina se esso è pari oppure dispari.
*/
#include<stdio.h>
int main(){
	int a;
	printf("Determina se un numero e' pari oppure  dispari \n");
	printf("Inserisci il numero \n");
	scanf("%d",&a);
	if(a%2==0){
		printf("Il numero (%d) e'pari",a);
	}
	else{
		printf("Il numero (%d)  e' dipari",a);
	}
	return 0;
}
