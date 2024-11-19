/*
FUSAR BASSINI SIMONE 3IC 
ternaPitagorica.c
CONSEGNA:
Leggi tre numeri in ingresso e stabilisci se questi formano una terna pitagorica
 (tre numeri formano una terna pitagorica se il quadrato del primo numero è pari alla somma degli altri due).
*/
#include <stdbool.h>
#include <stdio.h>
int main(){
	bool tripletta;
	float a,b,c,maggiore;
	printf("Inserisci un numero\n");
	scanf("%f",&a);
	printf("Inserisci un numero\n");
	scanf("%f",&b);
	printf("Inserisci un numero\n");
	scanf("%f",&c);
	tripletta=false;
	if((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b)){
		tripletta=true;
	}
/*	maggiore=a;
	if (b>maggiore){
		maggiore=b;
	}if (c>maggiore){
		maggiore=c
	}
		if((maggiore==a)&&((a*a)==(b*b+c*c))){
			tripletta=true;
		}
		else if((maggiore==b)&&((b*b)==(a*a+c*c))){
			tripletta=true;
		}
		else if((maggiore==c)&&((c*c)==(a*a+b*b))){
			tripletta=true;
		} */
		if(tripletta){
			printf("\ntripletta pitagorica");
		}else{
			printf("\nNon è una tripletta");
		}
}
