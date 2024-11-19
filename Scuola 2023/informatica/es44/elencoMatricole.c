#include <stdio.h>
#include <string.h>
#include <time.h>
 #include <stdlib.h>

#define NUMERI 1000

void riempiCasuale(int numero[NUMERI]){
  int i;
  srand(time(NULL));   
  for (i = 0; i < NUMERI; i++)     
    numero[i] = rand()%9999;   //genero un numero random
}

void bubbleSort(int numeriMatricole[NUMERI]) {
  int  y, temp;
  int scambi = 0;
  do{                                    
    scambi = 0;                      
    for (y = 0; y < NUMERI - 1; y++){     
      if (numeriMatricole[y] > numeriMatricole[y + 1]){   
        temp = numeriMatricole[y];            
        numeriMatricole[y] = numeriMatricole[y + 1];
        numeriMatricole[y + 1] = temp;
        scambi = 1;     
      }                                    
    }                                     
              // visualizza il vettore 
  }while (scambi == 1);               
}

// Funzione di ricerca dicotomica
int ricercaDicotomica(int vettore[], int inizio, int fine, int elemento) {
    while (inizio <= fine) {
        int medio = inizio + (fine - inizio) / 2;

        // Se l'elemento è al centro, restituisci la posizione
        if (vettore[medio] == elemento) {
            return medio;
        }

        // Se l'elemento è nella metà sinistra, aggiorna "fine"
        if (vettore[medio] > elemento) {
            fine = medio - 1;
        }

        // Se l'elemento è nella metà destra, aggiorna "inizio"
        else {
            inizio = medio + 1;
        }
    }

    return -1; // Elemento non trovato
}



int main(){
    int numeroRicerca;
    int nMatricole[NUMERI];
    riempiCasuale(nMatricole);
    
    bubbleSort(nMatricole);
    printf("Inserisci il numero di  matricola da cercare\nTi diremo se e' presente nell' elenco\n");
    scanf("%d",&numeroRicerca);
    

    if(ricercaDicotomica(nMatricole,0,NUMERI-1,numeroRicerca)==-1)
        printf("Non e' presente nell' elenco");
    else printf("E' presente");

    return 0;
}