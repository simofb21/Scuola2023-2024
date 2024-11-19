#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
/*
ANALISI: 
GESTISCO I PARTECIPANTI COME UNA STRTTUA DI DATI invece che array paralleli :
-il numero intero di partecipaziione
-il nome
il tempo
INIZIALMENTE CHIEDO QUANTI SONO GLI ISCRITTI. 
Faccio un array di Partecipanti di dimensione ideale di 100, ma terrò presente il numero reale di essi
-utilizzo la funzione rand per assegnare un tempo casuale, 
-utilizzo un algoritmo bubbe sort per l' ordinamento in ordine cresciente
-utilizzrò il valore assoluto per visualizzare i temmpi più  vicini
farò quindi le funzioni per:
-inseriire i nomi all' inteerno dell' array di struct
-carica casuale dei tempi > genero un rand tra 490 e 750  e poi divido per 10 
-bubble sort
-stampa
-ricerca tempo vicino
-assegnare numeri 
Il controllo input lo gestisco con dei cicli do while
*/
#define NUM 100 //definisco il numero dei partecipanti con una costante
#define LUN_STR 20
typedef char stringa[LUN_STR];

 typedef struct{// definisco struttura di dati
	char username[LUN_STR];
	float tempo;
	int numero;
	
}Partecipante;

void inserisciNomi(  Partecipante elenco[], int num); //funzione per far inserire i nomi
void assegnaPunteggioRandom( Partecipante elenco[], int num);
void assegnaNum( Partecipante elenco[], int num);
void stampa(Partecipante elenco[],int num);
int tVicino(Partecipante elenco[],int num, float tempoRicerca);
void ordinaCrescente(Partecipante elenco[],int num);

int main(){
	int nPart; 
	int indiceVicino;
	float tempoRicerca;
	Partecipante elenco[NUM];
	srand(time(NULL)); //inizializzo a 0 per rand
	printf("Quanti sono i partecipanti (min 1 max 100)? ");
	do{	//ciclo lettura numero partecipanti che continua finche non è un numero valido
		
		scanf("%d",&nPart);
		if(nPart>NUM || nPart <1)
			printf("Non puoi inserire questo numero di  partecipanti  \n Rinserisci il numero ");
	}while(nPart>=NUM || nPart<1);
	
	inserisciNomi(elenco,nPart); //inserisco nomi
	assegnaNum(elenco,nPart); //assegno numero 
	assegnaPunteggioRandom(elenco,nPart); //assegno tempo casuale
	printf("Elenco giocatori \n");
	stampa(elenco,nPart); //stampo ordino e ristmpo
	ordinaCrescente(elenco,nPart);
	printf("Stampa ordinata \n");
	stampa(elenco,nPart);
	printf("Inserisci il tempo vicino al quale dobbiamo cercare: ");
	scanf("%f",&tempoRicerca);
	indiceVicino=tVicino(elenco,nPart,tempoRicerca); //calcolo il tempo più vicino e stampo i dati di quell' iindice
	printf("Atleta con tempo piu' vicino a %.2f : %s %d %.2f",tempoRicerca,elenco[indiceVicino].username,elenco[indiceVicino].numero,elenco[indiceVicino].tempo );
	return 0;
}

void inserisciNomi( Partecipante elenco[], int num){//funzione per far inserire i nomi
	int flag;
	for(int i = 0; i < num; i++){
		flag=0;
		printf("Inserisci il nome di un  partecipante (Max 20 carattteri)");
		do{
			scanf("%s",elenco[i].username);
			if(strlen(elenco[i].username)>LUN_STR){ //contrllo lunghezza nome
				printf("Rinserisci");
				flag=1;}
		}while(flag==1);
		
	}
}
void assegnaNum( Partecipante elenco[], int num){
	for(int i = 0; i<num; i++){
		elenco[i].numero=i+1; //assegno l' indice +1 per andare da 1 a n
	}
}

void assegnaPunteggioRandom( Partecipante elenco[], int num){
	int tempo;
	for(int i = 0; i<num; i++){
		tempo=rand()%(750-479)+480;	 //faccio un numero casuale tra 479 e 750 poi lo divido per averlo tra 47.9 e 75.0 , lo converto prma in float però
		elenco[i].tempo=(float)tempo/10;
	}
}
void ordinaCrescente(Partecipante elenco[],int num){ //ordinamento bubble sort con sentinella 
	int cambi;
	Partecipante temp; //variabile per scambio
	do{
		cambi=0;
		for(int i= 0; i < num-1; i++){
			if(elenco[i].tempo>elenco[i+1].tempo){ //se quello attuale > di quello dopo , allora scambio
				temp= elenco[i];
				elenco[i]=elenco[i+1];
				elenco[i+1]=temp;
				cambi=1;
			}
		}
	}while(cambi==1);
}
void stampa(Partecipante elenco[],int num){
	for(int i = 0; i < num; i++)
		printf("%s\t%d\t%.2f \n",elenco[i].username, elenco[i].numero, elenco[i].tempo); //stampo tutti i dati ricevendo l ' array
	
}
int tVicino(Partecipante elenco[],int num, float tempoRicerca){
	float  tempoVicino=elenco[0].tempo;
	int indiceVicino;
	for(int i= 0; i< num; i++){
		if(fabs(tempoRicerca-elenco[i].tempo) <= fabs(tempoRicerca-tempoVicino)){ //calcolo con il valore assoluto se quello attuale è più vicino al migliore per poi returnare l' indice
			tempoVicino=elenco[i].tempo;
			indiceVicino=i;
		}
	} 
	return  indiceVicino;
	
}
