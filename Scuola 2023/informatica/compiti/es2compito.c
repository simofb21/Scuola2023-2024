/*
Fusar Bassini Simone
es2compito.c 
Consegna:
Un gruppo di amici va in discoteca. Il gruppo è formato ad un numero di ragazzi e un numero di ragazze.
I ragazzi pagano 8€ e le ragazze pagano 5€. Chiesta all' utente la composizione del gruppo calcolare e mostrare quanto viene speso.
*/
#include <stdio.h>
int main(){
	int nWoman,nMan; //dichiaro variabili intere
	float costoMan,costoWoman,costoTot ; //dichiaro variabile reali
	costoMan=8.00; //assegno i 2 costi
	costoWoman=5.00;
	printf("inserisci il numero di uomini e di donne separato da una virgola \n"); //chiedo di inserire i dati
	scanf("%d,%d",&nMan,&nWoman);
	costoTot=nMan*costoMan+nWoman*costoWoman; //faccio i calcoli 
	printf("Il costo totale e' %f",costoTot); //stampo il risultato
}
