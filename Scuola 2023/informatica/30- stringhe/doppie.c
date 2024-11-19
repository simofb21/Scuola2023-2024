#include <stdio.h>
#include <string.h>

int trovateDoppie( char parola[], int lunghezza){

int k=1;

    for(int i = 0; i< lunghezza -1 ; i++){          //metto -1 , perché ultimo è terminatore : in c funziona anche sempre , in altri linguaggi non esiste terminatore, quindi controllo con ultima da non fare
    

                if(parola[i]==parola[k]){
                    return 1; }

                k++;


    }
    return 0;

}

int main(){
    char parola[20];
    int lunghezza;

    printf("inserisci la tua parola : ");
    scanf("%s",parola);

    if(trovateDoppie(parola, strlen(parola))==0){
        printf("non sono state trovate doppie");
    }
    else printf("Si , ci sono delle doppie.");


}