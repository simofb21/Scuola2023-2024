/*
FUsar Bassini Simone 
calcoloOrari.c
Scrivere una funzione che riceve in ingresso tre numeri interi h, m e s che rappresentano ore minuti e secondi e restituisce il numero
di secondi trascorsi dalla mezzanotte.
Scrivere una seconda funzione che riceve in ingresso un numero intero che rappresenta un valore in secondi e stampa a video ore , minuti e secondi corrispondenti.
Scrivere poi un programma che usa queste funzioni per calcolare il tempo in ore, minuti e secondi trascorsi tra due orari entrambi contenuti entro il ciclo di una giornata. Ad esempio, se i due orari inseriti fossero 12:30:00 e 13:40:30 il programma dovrebbe stampare: sono trascorsi 1 ora, 10 minuti 30 secondi.
*/
#include <stdio.h>
//funzione da ore minuti secondi a secondi 
int daHMS_Secondi(int ore, int minuti, int secondi) {
    
    int secondi_trascorsi = ore * 3600 + minuti * 60 + secondi;
    return secondi_trascorsi;
}
//funzione da secondi a ore minuti secondo
void secondiToHMS(int sTrascorsi){
    int ore;int minuti; int secondi;
    ore=sTrascorsi/3600; 
    minuti=(sTrascorsi-ore*3600)/60;
    secondi=sTrascorsi-(ore*3600+minuti*60);
    printf("%d:%d:%d",ore,minuti,secondi);
}



int main(){
    int o,o1,m,m1,s1,s, differenza,tempoSecondi1,tempoSecondi2;
    
    printf("Inserisci il primo orario ; in formato ORE: MINUTI: SECOONDI ");
    scanf("%d %d %d", &o, &m, &s);

    printf("Inserisci il secondo  orario ; in formato ORE: MINUTI: SECOONDI ");
     scanf("%d %d %d", &o1, &m1, &s1);
    tempoSecondi1=daHMS_Secondi(o,m,s);
     tempoSecondi2=daHMS_Secondi(o1,m1,s1);
    if (tempoSecondi1>=tempoSecondi2)
        differenza=tempoSecondi1-tempoSecondi2;
    else
        differenza=tempoSecondi2-tempoSecondi1;
     
   secondiToHMS(differenza);
    
   
}