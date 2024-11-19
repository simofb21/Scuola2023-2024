/*
Fusar Bassini Simone
3IC
countdown.c
consegna:1. . COUNT-DOWN. Scrivi un programma in C che chiede all'utente di inserire il numero N di partenza di un conto alla rovescia,
 quindi il programma stampa su righe successive tutti i numeri da N a 0.*/
#include <stdio.h>
#include <windows.h>
int main(){
    int i,n;
    printf("Inserisci un numero intero positvo ");
    scanf("%d",&n);
    for(i=n;i>=0;i=i-1)  {
            Sleep(1000); //ritardo di un secondo
            printf("%d,",i);
        }

  
}
