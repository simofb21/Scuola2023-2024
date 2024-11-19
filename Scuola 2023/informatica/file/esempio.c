#include <stdio.h>
#include <stdlib.h>
int main() {
    int nNumeri=0;
    char nomeFile[100];
    FILE * fInput; // Puntatore al file di input
    int somma=0; //sommerà i numeri del file
    int dato;
    printf("Inserisci il nome del file: ");
    scanf("%s", nomeFile); //solitamente faccio dire il nome file , che è inserito dall' utente, e si trova nella stessa cartella del file in c
    fInput = fopen(nomeFile, "rt"); // Apro il file in lettura testo (rt)
    if(fInput==NULL) {
        printf("Errore nell'apertura del file\n");  //se null, errore, non c' è il file ecc
        exit(1);
    }
    
    while(fscanf(fInput,"%d",&dato)==1) { // Finchè lo scanf avviene
        somma += dato; // Aggiungo il dato alla somma
        nNumeri++;
    }
    fclose(fInput); // Chiudo il file

    printf("La somma dei numeri nel file %s e' %d\n", nomeFile, somma); // Stampo la somma
    printf("La media e' %d ", somma/nNumeri);

    return 0 ;
}