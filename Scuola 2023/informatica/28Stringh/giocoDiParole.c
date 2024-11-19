#include <stdio.h>
#include <string.h>
#include <stdlib.h>


    int main(){
    char parolaToGuess[20];
    int tentativi=1;
    char firstWORD[20]="ABACO";
    char lastWORD[20]="ZUZZERELLONE";
    char parolaTRY[20];


    char promptFaiInserire[100]="Inserisci la tua parola, che poi proveremo ad indovinare in 10 tentativi : ";

    printf("%s",promptFaiInserire);
    scanf("%s",parolaToGuess);

    while (tentativi<=10)

    {
        system("cls");
        printf("La parola deve andare da %s a %s\n",firstWORD, lastWORD);
        printf("Ora inserisci la tua parola: tentativo n %d :",tentativi);
        scanf("%s",parolaTRY);

        if(strcmp(parolaToGuess,parolaTRY)==0)
            break;
        
        else if(strcmp(parolaToGuess,parolaTRY)<0)
            strcpy(lastWORD,parolaTRY);
        
        else if(strcmp(parolaToGuess,parolaTRY)>0)
            strcpy(firstWORD,parolaTRY);

        tentativi++;
    }
    
    if(tentativi>10)
            printf("\nHai perso. Perche' non sei riuscito ad indovinare la parola entro il numero di tentativi precedentemente stabilito ");
    else
        printf("\nBravo. Hai indovinato in %d tentativi",tentativi);

    
    return 0;
    
    }    