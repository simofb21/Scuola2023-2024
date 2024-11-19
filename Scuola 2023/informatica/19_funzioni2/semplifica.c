/*
fusar bassini simone 
semplifica.c 
Scrivi una funzione che restituisce il MCD tra due numeri interi (utilizzando l'algoritmo di Euclide).
Scrivi un programma che permette di semplificare una frazione: chiedere all'utente di inserire una frazione (es.  8/12 leggendo due numeri interi numeratore e dennominatore separatamente) e il programma mostra la frazione semplificata (nell'esempio 2/3) ottenuto dividendo numeratore e denominatore per il loro MCD.*/

#include <stdio.h>
// fa il mcd ,per poi semplificare
int  mcd(int a,int b) {
    int ris;int resto;
	while(b!=0){
		resto=a%b;
		a=b;
		b=resto;
	}
	 return ris=a;
	
}
    
int main(){
    int num1,den1,n,d;
    printf("Inserisci la  frazione : numeratore denominatore ");
    scanf("%d %d",&num1 ,&den1);
    n=num1/mcd(num1,den1);
    d=den1/mcd(num1,den1);
    printf("La frazione semplificata e' : %d/%d",n,d);


}