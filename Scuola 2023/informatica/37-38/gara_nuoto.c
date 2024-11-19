#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Fusar Bassini Simone 3ic esercizio gara nuoto*/


#define MAX_LONG_NOM 20
#define PARTECIPANTI 5


void winner(float tempi[PARTECIPANTI], char nomiPartecipanti[PARTECIPANTI][MAX_LONG_NOM]){
    int indiceMinimo=0;

    for(int i=0; i<PARTECIPANTI; i++){
        if(tempi[i]<=tempi[indiceMinimo]){
            indiceMinimo=i;
        }
    }
    printf("Il Vincitore e' : %s , con un tempo di %.2f",nomiPartecipanti[indiceMinimo],tempi[indiceMinimo]);

}

float mediaTempiGara(float tempi[PARTECIPANTI], char nomiPartecipanti[PARTECIPANTI][MAX_LONG_NOM]){
    float somma=0.0;
    for(int i= 0; i<PARTECIPANTI; i++){
        somma=somma+tempi[i];
    }
    return somma/PARTECIPANTI;
}

void risultati(float tempi[PARTECIPANTI], char nomiPartecipanti[PARTECIPANTI][MAX_LONG_NOM]){
    for (int i = 0; i < PARTECIPANTI; i++)
    {
        printf("NOME: %s   TEMPO: %.2f\n",nomiPartecipanti[i],tempi[i]);
    }
    
}

int main(){
    float tempoModifica;
    int flag=1;
    char nomeModifica[MAX_LONG_NOM];
    float tempi[PARTECIPANTI]={10,20,12.5,17.5,15};
    char nomiPartecipanti[PARTECIPANTI][MAX_LONG_NOM]={"Matteo","Marco","Luca","Giovanni","Gesu"};
    char sn;
    int opzioni;
    while(flag!=0){
    
        printf("Cosa desideri sapere? \n 1:Informazioni sul vincitore\n 2:Stampare media dei tempi della gara complessiva \n 3:Elenco di tutti i partecipanti con risultato ottenuto \n 4:Modificare il tempo di un partecipante che ha sbagliato \n 5:USCita dal programma\n");
        scanf("%d",&opzioni);


        switch (opzioni)
        {
        case 1:
            winner(tempi,nomiPartecipanti);
            break;
        

        case 2:
            printf("%.2f",mediaTempiGara(tempi,nomiPartecipanti));
            break;

        case 3:
           risultati(tempi,nomiPartecipanti);
           break;
        case 4:
            printf("Quale tempo vuoi modificare? Inserisci il nome di chi: \n");
            scanf("%s",nomeModifica);

            printf("Insrisci il tempo con il quale lo vuoi modifcare : ");
            scanf("%f",&tempoModifica);

            for (int j = 0; j < PARTECIPANTI; j++)
            {
                if(strcmp(nomeModifica,nomiPartecipanti[j])==0){
                    tempi[j]=tempoModifica;
                    break;     
                }            
            }

            break;

        case 5:
            flag=0;
            break;
        
        default:
            printf("Opzione non disponnibile :(");
            break;
        
        }
        printf("\nANcora? S/N ");
        scanf(" %c",&sn);
        if(sn=='n' || sn=='N'){
            flag=0;
        }
    }

}


