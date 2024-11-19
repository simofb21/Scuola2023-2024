/*
Fusar Bassini Simone 3ic
frequeEnzaCaraTtere.c >> utolizzo stringhe*/

#include <string.h>
#include <stdio.h>


void cercaLettera(char parola[], int lunghezza) {
    int conteggio = 0;
    char i;

    
    for (i = 'a'; i <= 'z'; i++) {
        conteggio=0;

        for(int k=0; k<lunghezza; k++){
            
            if (i==parola[k]) {
              conteggio++;
        }
          
            
    }
       printf("La lettera %c e' presente %d volte\n",i,conteggio);
    }

  
}

int main(){
    char parola[20];
    
    printf("Inserisci la  tua parola ")  ;
    scanf("%s", parola);
    cercaLettera(parola,strlen(parola));

}
