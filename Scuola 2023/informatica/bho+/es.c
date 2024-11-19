#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE * input, output;
    char nomeFile[30];
    printf("Inserisci il nome del file di input");
    scanf("%s",nomeFile);
    input = fopen(nomeFile, "rt");
    if ( input == NULL ){
        printf("Erore nella lettura del file \n");
        return 1;
    }
    printf("Inserisci il nome del file di output \n");
     scanf("%s",nomeFile); 
    output=fopen(nomeFile,"at"); 

}