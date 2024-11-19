#include <stdio.h>
#include <stdlib.h>

// Struttura per rappresentare gli intervalli di ricarica
typedef struct {
    int start;
    int end;
} Interval;

// Funzione per il calcolo del massimo numero di punti di carica necessari
int maxCharge(int N, Interval intervals[], int M) {
    int maxCharge = 0;
    int currentCharge = 0;

    for (int i = 0; i < N; i++) {
        int chargeGain = intervals[i].end - intervals[i].start + 1;
        currentCharge += chargeGain;

        if (currentCharge > maxCharge) {
            maxCharge = currentCharge;
        }
    }

    return maxCharge;
}

int main() {
    int M, N;
    printf("Inserisci il numero totale di minuti M: ");
    scanf("%d", &M);
    printf("Inserisci il numero di intervalli N: ");
    scanf("%d", &N);

    // Dichiarazione e inizializzazione degli array per gli intervalli
    Interval *intervals = (Interval*)malloc(N * sizeof(Interval));
    printf("Inserisci gli intervalli di minuti (Ai, Bi):\n");
    for (int i = 0; i < N; i++) {
        printf("Intervallo %d: ", i+1);
        scanf("%d %d", &intervals[i].start, &intervals[i].end);
    }

    int minCharge = maxCharge(N, intervals, M);

    printf("La minima quantità di punti di carica necessaria e' : %d\n", minCharge);

    free(intervals);

    return 0;
}
