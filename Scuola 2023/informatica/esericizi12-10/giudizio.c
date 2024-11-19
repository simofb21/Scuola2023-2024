/*
Fusar Bassini Simone 
3IC
giudizio.c
Consegna
Scrivere un programma che legge un voto e dice se è sufficiente o meno;  
se non è insufficiente distingue tra gravemente insufficiente (minore o uguale a 4) o insufficiente ovvero compreso tra 4 (escluso) e 6 (escluso).
*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
 int main(){
float voto;
bool suff,ins,gi;
	suff=false;
	gi=false;
	ins=false;
printf("INSERISCI IL VOTO; ANCHE SE NON E' UN INTERO \n");
scanf("%f",&voto);
if 	((voto>=6)&&(voto<=10)){
		suff=true;
		printf("Sei sufficiente");	
}
else if(voto<=10){
		ins=true;
}

if ((ins)&&(voto<=4))
{
	ins=false;
	gi=true;
}

if (gi){
	printf("Sei gravemente insufficiente");
}
if (ins){
	printf("Insufficienza minore");
}
}
