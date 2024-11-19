/*
Fusar Bassini Simone 3IC 
divisoriFunzioni.c
*/
#include <stdio.h>
//funzione stampa divisori
void stampadivisori(int n) {
    int i;
    // Trova i divisori e stampa
    for (i = 1; i <= n; i += 1) {
        if (n % i == 0)
            printf("%d,",i);
    }
}
//funzione primo o no
int primo(int n) {
    int i, isPrime = 1;\
    if (n <= 1)
        isPrime = 0;
    else {
        for (i = 2; i * i <= n; i += 1) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    return isPrime;
}
//main
int main() {
    int k;
    printf("Inserisci un numero intero: ");
    scanf("%d", &k);
    if (primo(k))
        printf("Il numero e' primo\n");
    else {
        printf("Il numero non e' primo, ecco i suoi divisori: ");
        stampadivisori(k);
        printf("\n");
    }

    return 0;
}
