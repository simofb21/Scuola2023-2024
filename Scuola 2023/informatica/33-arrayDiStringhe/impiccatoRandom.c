
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void inizializzaGioco(char parolaInserita[],char  parolaDaFAVED[], int lunghezzaParolaInserita){
    int i=0;
    
    parolaDaFAVED[0]=parolaInserita[0];

    parolaDaFAVED[lunghezzaParolaInserita-1]=parolaInserita[lunghezzaParolaInserita-1];

    while(i<lunghezzaParolaInserita){
        if(i!=0 && i!=(lunghezzaParolaInserita-1))
            parolaDaFAVED[i]='_';       //inserisco manualmente i trattini, ma prima ho mostrato la lettera 1 e l ' ultima
        i++;
    }
   parolaDaFAVED[lunghezzaParolaInserita] = '\0'; //terminatore per stringa

}

int guessChar(char parolaInserita[],char  parolaDaFAVED[], int lunghezzaParolaInserita){
    int tentativi=0;
    char LetteraInserita;
    int flagTrovata=0;
    
     while(tentativi<6){
        flagTrovata=0;
        printf("Rimangono %d tentativi \n",(6-tentativi));
        printf("Che lettera proviamo? ");
        scanf(" %c",&LetteraInserita);
        system("cls"); //cancello
        

        for(int i=0;i<lunghezzaParolaInserita;i++){ //si riesce, ma dovrei escludere anche le lettere già riempite. altrimenti da errori
            if(parolaInserita[i]==LetteraInserita){
                parolaDaFAVED[i]=LetteraInserita;   //se trova la lettera nella stringa, mette la flag a 1 e riempie la parola costruita dal giocatore
                flagTrovata=1;
                
            }
            }

            if(flagTrovata==1){
                printf("La lettera  e' stata trovata\n"); 
               
            }else{
                printf("La tua lettera non e' stata trovata . Attento , hai perso un tentativo. \n");
                tentativi++;}
            
            
            if(strcmp(parolaDaFAVED,parolaInserita)==0){    //confronto per terminare
                break;
            }
        
             printf("\n La tua nuova parola e' %s \n\n",parolaDaFAVED);
    }
    return tentativi;   //restituisco per fare un if nel main

}

int main(){
    int nLettere;
    int nTentativi;
    char letteraInserita;
    char parole[15][20]={"pastasciutta","pomodoro" , "affettati","parmigiano", "giovannino", "rinocerbiattolo", "alessia", "marcotogni", "clashroyale", "tempestanera", "lorenzino", "findomestic", "carestia","ortobio","zuzzurellone"};
    char parolaDaFAVED[20];
    int numeroRandomConParola;
    char parola[20];
    
    srand(time(0));

    numeroRandomConParola=rand()%15;

    strcpy(parola,parole[numeroRandomConParola]);

    nLettere=strlen(parola);
    system("cls");
    printf("Si faccia avanti chi vuole indovinare. BUONA FORTUNA\n");

    inizializzaGioco(parola, parolaDaFAVED, nLettere);

    printf("Il gioco inizia con la parola strutturata cosi': \n  %s\n", parolaDaFAVED);

    nTentativi=guessChar(parola, parolaDaFAVED, nLettere);

    system("cls"); //cancello per separare la sttampa del risultato dal resto

    if(nTentativi<6){
        printf("Bravo . Hai indovinato la parola con %d errori \n Era %s\n",nTentativi,parola);
    }
    
    else printf("Sei stato impiccato :(\n");

    

    system("pause");

}