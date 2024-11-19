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

void stampaNome(char nome[], int lunghezza,char nomeCorretto[], int lung){
    char nomeLungo[20];
    noVocali(20,nome,nomeLungo);
            
            nomeCorretto[0]=nomeLungo[0];
            nomeCorretto[1]=nomeLungo[1];
            nomeCorretto[2]=nomeLungo[3];

        }



void stampaCognome(char cognome[], int lunghezza, char cognomeCorretto[], int lung){
    char cognomeLungo[20];
    noVocali(20, cognome,cognomeLungo);
    
        for(int i=0; i<3; i++){
            cognomeCorretto[i]=cognomeLungo[i];
        }

}



int main(){
    char nome[20];
    char cognome[30];
    char gma[8];
    char codiceFiscale[10];
    char cognomeCorretto[3],nomeCorretto[3];

    printf("Inserisci il tuo nome : ");
    scanf("%s",nome);
    printf("Inserisci il tuo cognome  : ");
    scanf("%s",cognome);
   //parte tolta: il programma fa solo stampa nome e cognome printf("Inserisci la tua data di nascita in numeri. Non inserire spazi."); 
   // scanf("%s",&gma);

    stampaCognome(cognome,strlen(cognome),cognomeCorretto,3);

    stampaNome(nome,strlen(nome),nomeCorretto,3);

    strcat(cognomeCorretto,nomeCorretto);

    printf("La prima parte del tuo codice fiscale e' %s",cognomeCorretto);


    


    

   
    
}
