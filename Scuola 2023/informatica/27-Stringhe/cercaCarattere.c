/*
Fusar Bassini Simone 3ic
cercaCarattere.c >> utolizzo stringhe*/

#include <string.h>
#include <stdio.h>


int cercaLettera(char parola[], int lunghezza, char target) {
    int conteggio = 0, i;

    for (i = 0; i < strlen(parola); ++i) {
        if (parola[i] == target) {
            conteggio++;
        }
    }

    return conteggio;
}


int main(){
    char parola[20];
    char lettera;
    printf("Inserisci la tua parola! ");
    scanf("%s",&parola);

    printf("Quale lettera desideri cercare all' interno di questa parola? ");
    scanf(" %c",&lettera);

    printf("La lettera %c e' presente : %d vte. ",lettera,cercaLettera(parola,30,lettera));
}