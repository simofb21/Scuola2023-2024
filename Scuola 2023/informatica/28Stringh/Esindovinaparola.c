#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char segreta[20];
    char tentativo[20];
    char prima[20]="ABACO";
    char ultima[20]="ZUZZURELONE";
    int tentativi=10;

    printf("Inserisci la parola da indovinare: ");
    scanf("%s",segreta);

    while(tentativi>0){

        system("cls");  //comando windows per pulire lo schermo
        printf("%s\n-------------\n%s\n", prima, ultima);
        printf("Inserisci una parola: ");
        scanf("%s", tentativo);

        if(strcmp(tentativo, segreta)==0){

            break;

        }

        else if(strcmp(tentativo, segreta)<0){

            strcpy(prima,tentativo);

        }

        else if(strcmp(tentativo, segreta)>0){

            strcpy(ultima,tentativo);

            tentativi--;

        }
    }

    if(tentativi==0){

        printf("Hai perso la parola era %s", segreta);

    }

    else{

        printf("Bravo, hai indovinato in %d tentativi\n",10-tentativi);

    }
    system("pause");

}

