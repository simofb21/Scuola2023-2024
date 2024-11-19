/*
Fusar Bassini Simone 3ic
frequeEnzaCaraTtere.c >> utolizzo stringhe */

#include <string.h>
#include <stdio.h>

void invertiStringa(char parola[], int lunghezza, char invertiParola[]){
         int k=0;
        for(int i=lunghezza-1 ;i>=0; i=i-1){
           
            invertiParola[i]=parola[k];
            k++;
    }
    invertiParola[k]=0;
}

int main(){
    char parola[20];
    char invertiParola[20];
    
    printf("Inserisci la  tua parola ")  ;
    scanf("%s", parola);

    invertiStringa(parola,strlen(parola),invertiParola);
    printf("La stringa invertita e' %s",invertiParola);

}
