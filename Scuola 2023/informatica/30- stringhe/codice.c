#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    char codice[20];
    char codiceControllo[20];
    bool controllo=true;
    int lunghezza=10;

    printf("Inserisci il tuo codice: ");

    do{
    
    scanf("%s",codice);
    lunghezza=strlen(codice);
    if(strlen(codice)<10){
        printf("Il codice che hai inserito non e' abbastanza lungo. Rinseriscilo . ");

    }

    }while(lunghezza<10);
    
    system("cls");
    

    printf("Conferma il tuo codice: ");
    scanf("%s",codiceControllo);


    
        if(strcmp(codice,codiceControllo)!=0)
            controllo=false;
        
       
        if(controllo)
            printf("Le due parole si corrispondono ");
        else printf("Le due parole non corrispondono ");
    



}