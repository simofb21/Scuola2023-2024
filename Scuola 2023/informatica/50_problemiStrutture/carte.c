#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct 
{
    int valore;
    char seme;
}carta;
void riempiMazzo(carta mazzo[52]){
    char semi[4]={'C','Q','P','F'};
    for(int i = 0 ; i < 4; i ++){
        for(int j = 0; j<13; j++){
            mazzo[i*13+j].valore=j+1;
            mazzo[i*13+j].seme=semi[i];
        }
    }
}

void visualizzaCarta(carta mazzo[52], int posizioneCartaVedere){
    printf("Carta %d : ",posizioneCartaVedere);
    printf("%c",mazzo[posizioneCartaVedere].seme);
            
    switch (mazzo[posizioneCartaVedere].valore)
            {
            case 1:
                printf("A\n");
                break;
            case 11:
                printf("J\n");
                break;
            case 12:
                printf("Q\n");
                 break;
            case 13:
                printf("K\n");
                break;
            default:
                printf("%d\n",mazzo[posizioneCartaVedere].valore);
                break;
            }
        }

void visualizzaMazzo(carta mazzo[52]){
    printf("Ecco l' intero mazzo\n");
    for(int i = 0; i<52; i++){
        visualizzaCarta(mazzo,i);
    }
}
void mescola(carta mazzo[52]){
    srand(time(NULL));
    carta temp;

    for(int j = 0 ; j<100; j++){
        for(int i=0;i<52;i++){
            int randomIndice=rand()%52;
            temp=mazzo[i];
            mazzo[i]=mazzo[randomIndice];
            mazzo[randomIndice]=temp;
        }
        
    }
}
int main(){
    int numeroCarta;
    carta mazzo[52];
    int scelta;
    int flag=1;
    
    riempiMazzo(mazzo);

    do
    {
        printf("Fai la tua scelta: \n 1. Visualizza una carta dicendoci la posizione \n 2. Visualizzare tutto il mazzo \n 3.Mescolare il mazzo \n 4. Finire ");
        scanf("%d",&scelta);
        switch (scelta)
        {
        case 1:
            printf("Inserisci il numero della carta che vuoi visualizzare: ");
            scanf("%d",&numeroCarta);
            visualizzaCarta(mazzo,numeroCarta);
            break;
        case 2:
            visualizzaMazzo(mazzo);
            break;
        case 3:
            mescola(mazzo);
            printf("Cook\n");
            break;
        case 4:
            printf(">End<\n");
            flag=0;
            break;

        default:
            break;
        }
    } while (flag==1);
    return 0;
}