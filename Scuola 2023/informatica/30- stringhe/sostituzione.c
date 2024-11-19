#include <stdio.h>
#include <string.h>

    int modificaLettere(char parolaDaMoficare[], int nLettere, char lettera1, char lettera2 ){
            int nCambi;
        
            for(int i=0; i<nLettere; i++){
                if(parolaDaMoficare[i]==lettera1){
                    parolaDaMoficare[i]=lettera2;
                    nCambi++;
                    }
            }
            return nCambi;
        }
    

    int main(){

        int nLettere; 
        char parola[20];
        char lettera1, lettera2;
        int nLettCamb;

        printf("Inserisci la parola: ");
        scanf("%s",parola);

        printf("Inserisci la lettera da cercare all' interno della parola ");
        scanf(" %c",&lettera1);

        printf("Inserisci la lettera con la quale andremo a sostituire la %c :  ",lettera1);
        scanf(" %c",&lettera2);

        nLettCamb=modificaLettere(parola, strlen(parola), lettera1, lettera2);

        printf("La tua parola modificata e'  : %s \n Sono stati fatti %d cambi ",parola,nLettCamb);

        return 0; 

    }