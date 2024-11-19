#include <stdio.h>
#include <string.h>

#define MAX_AUTOMOBILI 100

// Definizione della struct Auto
typedef struct {
    char targa[10];
    float km;
} Auto;

// Funzione di ordinamento per targa
void ordinaPerTarga(Auto b[], int n) {
    int i, j;
    Auto temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(b[j].targa, b[j + 1].targa) > 0) {
                // Scambia le posizioni
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
}

// Funzione per stampare l'elenco ordinato
void stampaElenco(Auto box[], int n) {
    int i;
    printf("\nElenco ordinato:\n");
    for (i = 0; i < n; i++) {
        printf("Targa: %s, Chilometri: %.2f\n", box[i].targa, box[i].km);
    }
}

// Funzione per la ricerca dicotomica in un array ordinato per targa
int ricercaDicotomica(Auto b[], int n, char target[]) {
    int inizio = 0, fine = n - 1, medio;

    ordinaPerTarga(b, n);

    while (inizio <= fine) {
        medio = (inizio + fine) / 2;

        int confronto = strcmp(b[medio].targa, target);

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
    Auto parcheggio[MAX_AUTOMOBILI];
    
    int numAuto = 0;
    char targaCerca[10];

    // Aggiungi alcune auto di esempio
    strcpy(parcheggio[0].targa, "ABC123");
    parcheggio[0].km = 50000.0;

    strcpy(parcheggio[1].targa, "jfrje");
    parcheggio[1].km = 1.0;

    strcpy(parcheggio[2].targa, "fo2r");
    parcheggio[2].km = 80.0;

    strcpy(parcheggio[3].targa, "djwd");
    parcheggio[3].km = 31.0;

    numAuto = 4;

    // Menu principale
    int scelta;
    do {
        printf("\n1. Stampa elenco ordinato per targa\n");
        printf("2. Stampa elenco ordinato per chilometri percorsi\n");
        printf("3. Cerca chilometri percorsi per targa\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                ordinaPerTarga(parcheggio, numAuto);
                stampaElenco(parcheggio, numAuto);
                break;
            case 2:
                // Aggiungi la funzione per ordinare per chilometri percorsi
                break;
            case 3:
                // Ricerca dicotomica per chilometri percorsi dato il numero di targa
                printf("\nInserisci la targa da cercare: ");
                scanf("%s", targaCerca);

                int indice = ricercaDicotomica(parcheggio, numAuto, targaCerca);

                if (indice != -1) {
                    printf("Chilometri percorsi per %s: %.2f\n", targaCerca, parcheggio[indice].km);
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

    return 0;
}
