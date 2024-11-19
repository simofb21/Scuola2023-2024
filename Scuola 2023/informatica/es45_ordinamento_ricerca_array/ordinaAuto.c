#include <stdio.h>
#include <string.h>

#define MACCHINE 5

void ordinaPerTarga(char arrayDiStringhe[MACCHINE][20], float kmPercorsi[MACCHINE]){
    int cambi,i;
    char tempTarga[20];
    float kmTemp;
    do{
        cambi=0;
        for (i = 0; i < MACCHINE-1; i++)
        {
            if(strcmp(arrayDiStringhe[i],arrayDiStringhe[i+1])>0){
                strcpy(tempTarga,arrayDiStringhe[i]);
                strcpy(arrayDiStringhe[i],arrayDiStringhe[i+1]);
                strcpy(arrayDiStringhe[i+1],tempTarga);
                kmTemp=kmPercorsi[i];
                kmPercorsi[i]=kmPercorsi[i+1];
                kmPercorsi[i+1]=kmTemp;
                cambi=1;
            }
        }
        
    }
    while(cambi==1);
}
void ordinaPerKm(char arrayDiStringhe[MACCHINE][20], float kmPercorsi[MACCHINE]){
    int cambi,i;
    char tempTarga[20];
    float kmTemp;
    do{
        cambi=0;
        for (i = 0; i < MACCHINE-1; i++)
        {
            if(kmPercorsi[i]>kmPercorsi[i+1]){
                strcpy(tempTarga,arrayDiStringhe[i]);
                strcpy(arrayDiStringhe[i],arrayDiStringhe[i+1]);
                strcpy(arrayDiStringhe[i+1],tempTarga);
                kmTemp=kmPercorsi[i];
                kmPercorsi[i]=kmPercorsi[i+1];
                kmPercorsi[i+1]=kmTemp;
                cambi=1;
            }
        }
        
    }
    while(cambi==1);
}

int ricercaDicotomica(char arrayDiStringhe[MACCHINE][20], float kmPercorsi[MACCHINE], char targa[20]) {
    int inizio = 0, fine = MACCHINE-1, medio;

    ordinaPerTarga(arrayDiStringhe,kmPercorsi);

    while (inizio <= fine) {
        medio = (inizio + fine) / 2;

        int confronto = strcmp(arrayDiStringhe[medio], targa);

        if (confronto == 0) {
            // Targa trovata
            return medio;
        } else if (confronto < 0) {
            inizio = medio + 1;
        } else {
            fine = medio - 1;
        }
    }

    // Targa non trovata
    return -1;
}
void stampaElenco(char arrayDiStringhe[MACCHINE][20], float kmPercorsi[MACCHINE]){
    for (int i = 0; i < MACCHINE; i++)
    {
        printf("Targa auto: %s KM percorsi : %.2f \n",arrayDiStringhe[i],kmPercorsi[i]);
    }
    
}
int main(){
    char targa[MACCHINE][20]={"a1","GB213HS","IQ123DH","PQ219CN","NS232SD"};
    float km[MACCHINE]={100.4,69.0, 104.012, 213.12, 491.021};
    int scelta;
    char targaRicerca[20];
    int indice;
    int flag=0;

    while(flag==0){
        printf("Fai la tua scelta:\n1. Stampa elenco ordinato per targa\n2. Stampa elenco ordinato per chilometri percorsi\n3. Cerca chilometri percorsi per targa\n4. Esci:\n");
        scanf("%d", &scelta);


        switch (scelta)
        {
        case 1:
            ordinaPerTarga(targa,km);
            stampaElenco(targa,km);
            break;
        case 2:
            ordinaPerKm(targa,km);
            stampaElenco(targa,km);
            break;
        case 3:
            printf("Inserisci la targa da cercare all' interno dell' elenco\n");
            scanf("%s",targaRicerca);
            indice=ricercaDicotomica(targa,km,targaRicerca);
            if(indice!=-1)
                printf("ha percorso %.2f km \n",km[indice]);
            else printf("Non si trova nell' elenco\n");
            break;
        case 4:
            printf(">fine<");
            flag=1;
            break;
        default:
            break;
        }
    }
    return 0;

}