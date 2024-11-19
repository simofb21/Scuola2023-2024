#include <stdio.h>

int main() {
    int num1, num2, num3;
    int numeroMaggiore, numeroMinore, numeroMedio;

    // Chiedi all'utente di inserire tre numeri
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    printf("Inserisci il terzo numero: ");
    scanf("%d", &num3);

    // Trova il numero maggiore
    numeroMaggiore = num1;
    if (num2 > numeroMaggiore) {
        numeroMaggiore = num2;
    }
    if (num3 > numeroMaggiore) {
        numeroMaggiore = num3;
    }

    // Trova il numero minore
    numeroMinore = num1;
    if (num2 < numeroMinore) {
        numeroMinore = num2;
    }
    if (num3 < numeroMinore) {
        numeroMinore = num3;
    }

    // Calcola il numero medio
    numeroMedio = num1 + num2 + num3 - numeroMaggiore - numeroMinore;

    // Stampa i numeri in ordine crescente
    printf("Numeri in ordine crescente: %d, %d, %d\n", numeroMinore, numeroMedio, numeroMaggiore);
    printf("Numero maggiore: %d\n", numeroMaggiore);
    printf("Numero minore: %d\n", numeroMinore);
    printf("Numero medio: %d\n", numeroMedio);

    return 0;
}
