#include <stdio.h>
#include <math.h>
int main() {
    int x, y;

    x = 1;

    printf("Inserisci Y: ");
    scanf("%d", &y);

    while (pow(x, x) < y) {
        x += 1;
    }

    // Riduci x di uno per ottenere il massimo valore che soddisfa la condizione
  

    printf("Il massimo valore di X per X^X <= Y e': %d", x);

    return 0;
}
