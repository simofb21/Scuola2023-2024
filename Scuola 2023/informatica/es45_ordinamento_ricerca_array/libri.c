#include <string.h>
#include <stdio.h>

#define N_LIBRI 10


int ricercaBinaria(char elenco[N_LIBRI][20], int inizio, int fine, char parolaRicerca[20]) {
    
    while (inizio <= fine) {
        int medio = inizio + (fine - inizio) / 2;

        // Se l'elemento è al centro, restituisci la posizione
        if (strcmp(elenco[medio],parolaRicerca)==0) {
            return medio;
        }

        // Se l'elemento è nella metà sinistra, aggiorna "fine"
        if (strcmp(elenco[medio],parolaRicerca)>0) {
            fine = medio - 1;
        }

        // Se l'elemento è nella metà destra, aggiorna "inizio"
        else {
            inizio = medio + 1;
        }
    }

    return -1; // Elemento non trovato
}

void bubbleELenco(char elenco[N_LIBRI][20]){
    int cambi;
    char temp[20];
    do{
        cambi=0;
        for(int i = 0; i < N_LIBRI-1; i++){
            if(strcmp(elenco[i],elenco[i+1])>0){
                strcpy(temp,elenco[i]);
                strcpy(elenco[i],elenco[i+1]);
                strcpy(elenco[i+1],temp);
                cambi=1;
            }
        }
    }
    while(cambi==1);   
    
}

int main(){
    int indice;
    char libroRIcerca[20];
    char elenco[N_LIBRI][20]={"Artu","Pinocchio","Biancaneve","Tunnel","Decameron","DivinaCommedia","Tekken","Paperino","1984","Wonder"};
    
    bubbleELenco(elenco);

    printf("Inserisci un libro da cercare nell' elenco\n");
    scanf("%s",libroRIcerca);
    indice=ricercaBinaria(elenco,0,N_LIBRI-1,libroRIcerca);
    if(indice!=-1){
        printf("E' presente in posizione %d ",indice+1);
    }
    else printf("Non e' presente ");
    
    return 0;
}