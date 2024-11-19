/*
Fusar Bassini Simone 3IC 
distanza.c
*/
#include <stdio.h>
#include <math.h>

// Funzione per calcolare la distanza tra due punti
double distanza2Punti(double xa, double ya, double xb, double yb) {
    double d;
    d = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
    return d;
}

// main 
int main() {
    double k, x1, x2, y1, y2;
     printf("Inserisci le coordinate del punto A: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Inserisci le coordinate del punto B: ");
    scanf("%lf %lf", &x2, &y2);
     k = distanza2Punti(x1, y1, x2, y2);
    printf("La distanza tra i due punti e': %f\n", k);
    return 0;
}
