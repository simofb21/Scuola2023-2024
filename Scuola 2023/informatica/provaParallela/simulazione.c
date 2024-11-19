/*
rircordarsi nella prova:
-FARE ANALISI
FARE PROTOTIPO delle funzioni
FARE CODICE
VERIFICA INPUT
return 0

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/*
ANALISI:
FACCIO UNA STRUCT DI TIPO PARTECIPANTE CON : COLORE PALLINA, NUMERO DI REGISTRAZIONE PROGRESSIVO, NOME E PUNTEGGIO NELLA PARTITA. 
FACCIO UNA FUNZIONE PER L' ISCRIZIONE QUINDI CHE VA DA 1 A 20, FACCIO INSERIRE IL NOME, ASSEGNO PUNTEGGIO E CHIAMO LA FUNZIONE GENERA CASUALLE PALLINA RANDOM : faccio un numero random da 1 a 2 e poi se 1 bianco, se 2 rosso
funzione per assegnare il punteggio casualmente a ogni elemento con un ciclo e un random da 1 a 100
funzione per ordinare e stampare i dettagli dei giocatori in base a ordine registrazione
funzione per ordinare punteggi in ordine decresciente e stampare
trovare il punteggio massimo di ciascun colore pallina, faccio un ciclo in cui trovo il massimo, una volta avuto il valoree, ripercorro l' array e stampo nome giocatore

*/

#define MAX_PART 20
typedef char stringa[30];
typedef struct {
    stringa nomeUtente;
    int pallina; //0 bianca 1 rossa
    int numReg;
    int punteggio;
}Partecipante;

int iscrizione(Partecipante elenco[MAX_PART]);
void stampa(Partecipante elenco[], int nPart);
void ordinaDecresciente(Partecipante elenco[MAX_PART],int nPartEff);
int generaRandom(int min, int max);
void punteggioPallina(Partecipante elenco[MAX_PART],int nPartEff);

int main(){
    srand(time(0));
    Partecipante elenco[MAX_PART];
    int nPartEff;
    nPartEff=iscrizione(elenco);
    stampa(elenco,nPartEff);
    punteggioPallina(elenco,nPartEff);
    ordinaDecresciente(elenco,nPartEff);
    return 0;

}
int generaRandom(int min, int max){ //funzione random , ricevo il massimo e il minimo 
    return rand()%(max-min+1)+min; //restituisco un numero random tra il minimo e il massimo 
}
int iscrizione(Partecipante elenco[MAX_PART]){ //int perché restituisce dimensione effettiva
    int sn;
    int i;
    for (i = 0; i < MAX_PART; i++)
    {       
            printf("Inserisci il nome ");
            scanf("%s",elenco[i].nomeUtente);
            elenco[i].punteggio=generaRandom(1,100); 
            elenco[i].numReg=i+1;
            elenco[i].pallina=generaRandom(0,1); //assegno colore pallina partecipante : 0 bianco, 1 rosso
            printf("Vuoi inserire un altro partecipante? 1 si, 0 no ");
            scanf("%d",&sn);
            if(sn==0)
                break;
    }
    return i+1; //restituisco la dimensione effettiva dei partecipanti
}

void stampa(Partecipante elenco[], int nPart){
    for (int i = 0; i < nPart; i++)
    {
        printf("Giocatore n di registrazione %d\n",elenco[i].numReg); //stampo i dettagli dei giocatori
        printf("Nome : %s\nColore pallina :",elenco[i].nomeUtente);
        if(elenco[i].pallina==0)
            printf("Bianca\n");
        else  
            printf("Rossa\n");
        printf("Il punteggio e' %d\n",elenco[i].punteggio);
    }
}
void ordinaDecresciente(Partecipante elenco[MAX_PART],int nPartEff){
    Partecipante temp;
    int scambi=0;
    do
    {   scambi=0;
        for (int i = 0; i < nPartEff-1; i++) //ordinamento bubble sort
        {
            if(elenco[i].punteggio<elenco[i+1].punteggio){
                temp=elenco[i];
                elenco[i]=elenco[i+1];
                elenco[i+1]=temp;
                scambi=1;
            }
        }    
    } while (scambi==1);            
}
  
void punteggioPallina(Partecipante elenco[MAX_PART],int nPartEff){
     ordinaDecresciente(elenco,nPartEff);
    int maxBianca=-99999, maxRossa=-99999; //inizializzo a un valore molto basso
    int indiceBianco, indiceRossa;
    for (int i = 0; i < nPartEff; i++)
    {
        if(elenco[i].pallina==0){ //controllo se è 0 perché vuol dire bianca
            if(elenco[i].punteggio>maxBianca){
                maxBianca=elenco[i].punteggio;
                indiceBianco=i;}
        }
        else{ //controllo se è 1 ovvero rossa
            if(elenco[i].punteggio>maxRossa){
                maxRossa=elenco[i].punteggio;
                indiceRossa=i;}
        }
    }
    printf("Il punteggio massimo della pallina bianca e' %d di %s \n",maxBianca,elenco[indiceBianco].nomeUtente);
    printf("Il punteggio massimo della pallina rossa e' %d di %s \n",maxRossa,elenco[indiceRossa].nomeUtente);

    
}