/*
Fusar Bassini Simone 3IC
tabelline.c

3. TABELLINE. Riprendi il programma dell'esercizio 9.2 e modificalo in modo che anzich� proporre sempre 4 tabelline, 
si possa specificare un numero di tabelline desiderato all'inizio. Naturalmente modifica il giudizio in proporzione!
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int risposte_esatte = 0;
    int risposta_utente, risposta_corretta;
    int num1, num2,nTabelline=0,i=0;

    // Imposta il generatore di numeri casuali
    srand(time(NULL));
    printf("Quante tabelline vuoi? ");
    scanf("%d",&nTabelline);
    while(i<nTabelline){
        // Genera due numeri casuali tra 1 e 10
        num1 = rand() % 10 + 1;
        num2 = rand() % 10 + 1;

        // Calcola la risposta corretta
        risposta_corretta = num1 * num2;

        // Stampa la domanda
        printf("Quanto fa %d x %d ? ", num1, num2);

        // Leggi la risposta dell'utente
        scanf("%d", &risposta_utente);
        i=1+i;

        // Verifica se la risposta � corretta e aggiorna il punteggio
        if (risposta_utente == risposta_corretta) {
            printf("Risposta corretta!\n");
            risposte_esatte++; 
        } else {
            printf("Risposta errata. La risposta corretta � %d.\n", risposta_corretta);
        }
	}
    printf("Punteggio: %d risposte esatte su %d - ", risposte_esatte,nTabelline);
     return 0;
}
