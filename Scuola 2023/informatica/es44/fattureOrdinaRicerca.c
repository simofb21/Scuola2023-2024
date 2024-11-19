#include <stdio.h>
#include <string.h>
#include <time.h>
 #include <stdio.h>

#define NUMERI 8 //numero di fatture


void ordinamentoBubbleDecresente(float array[NUMERI]){
    int cambi;
    float temp;
    do{
        cambi=0;
        for (int  i = 0; i < NUMERI-1; i++)
        {
            if(array[i]<array[i+1]){
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
                cambi=1;
            }    
        }
        
    }
    while(cambi==1);
}

// Funzione di ricerca dicotomica
int ricercaDicotomica(float vettore[], int inizio, int fine, float elemento) {
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
    int posizione;
    float ricerca;
    float importi[NUMERI]={10.40,12.21,23.23,321.23,53.50,10.0,213.40,1000.21};
    printf("Inserisci un importo da cercare: ");
    scanf("%f",&ricerca);
    posizione= ricercaDicotomica(importi,0,NUMERI-1,ricerca) +1;
   
    
    if(posizione!=-1){
         printf("Il valore %.2f e' presente in posizione %d\n", ricerca, posizione);
    }
    else 
        printf("Il valore %.2f non e' presente nell' array\n",ricerca);
    
    ordinamentoBubbleDecresente(importi);

    printf("Il valore massimo e' : %.2f\n",importi[0]);

    return 0;
}