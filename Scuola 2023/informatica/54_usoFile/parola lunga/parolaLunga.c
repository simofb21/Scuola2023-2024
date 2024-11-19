#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE * file = fopen("inputParola.txt","r");
    char parolaLunga[50];
    char parolaLetta[50];
    int lungParola=-999;
    int lenParola;

    if(file==NULL){
        printf("Errore nell' apertura del file");
        return 1;
    }

    while(fscanf(file,"%s",parolaLetta)==1){
        lenParola=strlen(parolaLetta);
        if(lenParola>lungParola){
            lungParola=lenParola;
            strcpy(parolaLunga,parolaLetta);
        }
    }
    fclose(file);
    printf("la parola piu lunga e' %s ",parolaLunga);
    return 0;
}