/*
Fusar Bassini Simone 3IC 
esBolletta.c
Consegna:La bolletta del gas � calcolata cos�: 
     - una quota fissa di 10 euro, 
     - una quota variabile per ogni metro cubo di gas consumato cos� definita:
                   0,10 euro/mc se il consumo � meno di 500, 
                   0,12 euro/mc per il consumo eccedente i 500. 
   Dati in ingresso i metri cubi consumati, calcolare quanto si � speso.
*/
#include<stdio.h>
#define FIXQUOTA 10
int main(){
	float mCubiCons,spesa,quota1,q1=0.10,q2=0.12;
	printf("Inserisci il numero di metri cubi consumati \n");
	scanf("%f",&mCubiCons);
	if(mCubiCons<500){
		quota1=q1*mCubiCons;
	}
	else{
		quota1=q1*500 + q2*(mCubiCons-500);
	}
	spesa=quota1+FIXQUOTA;
	printf("Devi pagare %.2f euro di bolletta",spesa);
	
}
