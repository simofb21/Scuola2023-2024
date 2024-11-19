/*
Simone Fusar Bassini 
funzione che scrive una parola presa con anche vocali, la riscrive senza esse
*/
#include <stdio.h>
#include <string.h>


void noVocali(int lunghezza, char parola[],char nuovaParola[]){
    int j=0;
    char vocali[5]={"aeiou"};

        for(int i=0; i<lunghezza; i++){
         
            if(strchr(vocali,parola[i])==NULL){
                            nuovaParola[j]=parola[i];
                            j++;
                }           
            }
}

int main(){
    char parola[20],nuovaParola[20];

    printf("inserisci la tua parola ");
    scanf("%s",&parola);

    noVocali(strlen(parola), parola, nuovaParola);
    printf("La nuova parola e' %s ", nuovaParola);
}
