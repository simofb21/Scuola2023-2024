#include <stdio.h>
#include <string.h>

#define MAX_AUTOMOBILI 100

// Struttura per rappresentare le informazioni sull'auto
struct Auto {
    char targa[10];
    float chilometri;
};

// Funzione di ordinamento per targa
void ordinaPerTarga(struct Auto automobili[], int n) {
    int i,j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(automobili[j].targa, automobili[j + 1].targa) > 0) {
                // Scambia le posizioni
                struct Auto temp = automobili[j];
                automobili[j] = automobili[j + 1];
                automobili[j + 1] = temp;
            }
        }
    }
}

// Funzione di ordinamento per chilometri percorsi
void ordinaPerChilometri(struct Auto automobili[], int n) {
    int i,j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (automobili[j].chilometri > automobili[j + 1].chilometri) {
                // Scambia le posizioni
                struct Auto temp = automobili[j];
                automobili[j] = automobili[j + 1];
                automobili[j + 1] = temp;
            }
        }
    }
}

// Funzione per stampare l'elenco ordinato
void stampaElenco(struct Auto automobili[], int n) {
    int i;
    printf("\nElenco ordinato:\n");
    for (i = 0; i < n; i++) {
        printf("Targa: %s, Chilometri: %.2f\n", automobili[i].targa, automobili[i].chilometri);
    }
}

// Funzione per la ricerca dicotomica in un array ordinato per targa
int ricercaDicotomica(struct Auto automobili[], int n, char target[]) {
    int inizio = 0, fine = n - 1, medio;

    ordinaPerTarga(automobili,n);
    
    while (inizio <= fine) {
        medio = (inizio + fine) / 2;

        int confronto = strcmp(automobili[medio].targa, target);

        if (confronto == 0) {
            // Targa trovata
            return medio;
        } else if (confronto < 0) {
            inizio = medio + 1;
        } else {
            fine = medio - 1;
        }
    }

    // Targa non trovata
    return -1;
}

int main() {
    struct Auto automobili[MAX_AUTOMOBILI];
    int numAuto = 0;
    FILE * input = fopen("input.txt", "r");
    if(input == NULL){
        printf("File non disponibile");
        return 1;
    }
    while(fscanf(input,"%s %f",automobili[numAuto].targa,&automobili[numAuto].chilometri)==2){
        numAuto++;
    }
    

    // Ordina per targa prima di effettuare la ricerca dicotomica
    ordinaPerTarga(automobili, numAuto);

    // Menu principale
    int scelta;
    char targaCerca[10];
    do {
        printf("\n1. Stampa elenco ordinato per targa\n");
        printf("2. Stampa elenco ordinato per chilometri percorsi\n");
        printf("3. Cerca chilometri percorsi per targa\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                ordinaPerTarga(automobili, numAuto);
                stampaElenco(automobili, numAuto);
                break;
            case 2:
                ordinaPerChilometri(automobili, numAuto);
                stampaElenco(automobili, numAuto);
                break;
            case 3:
                // Ricerca dicotomica per chilometri percorsi dato il numero di targa

                printf("\nInserisci la targa da cercare: ");
                scanf("%s", targaCerca);

                int indice = ricercaDicotomica(automobili, numAuto, targaCerca);

                if (indice != -1) {
                    printf("Chilometri percorsi per %s: %.2f\n", targaCerca, automobili[indice].chilometri);
                } else {
                    printf("Auto con targa %s non trovata.\n", targaCerca);
                }
                break;
            case 0:
                printf("Programma terminato.\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
        }
    } while (scelta != 0);
    fclose(input);
    return 0;
}