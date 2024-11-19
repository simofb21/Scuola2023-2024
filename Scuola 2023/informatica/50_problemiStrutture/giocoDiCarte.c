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
visualizzaMano(carta mano[5]){
    for(int i = 0; i<5; i++){
        visualizzaCarta(mano,i);
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
void estrai(carta manodiCarte[5], carta mazzo[52]){
    mescola(mazzo); //mescolo ancora prima di estrarre
    int j=0;
    for(int i = 0; i<5; i++){
        manodiCarte[i]=mazzo[j];
        j++;
    }
}

void scambia(carta mazzo[52],carta singola){
    srand(time(0)); //fa uno scambio di variabile semplice in una posizione random del mazzo
    carta temp; 
    int randomIndice=rand()%52;
    temp=mazzo[randomIndice];
    mazzo[randomIndice]=singola;
    singola=temp;
    visualizzaCarta(singola);
}
int main(){
    int numeroCarta;
    int indiceScambio;
    carta mazzo[52];
    char scelta;
    carta manoDiCarte[5];
    printf("Mischia carte  in corso \n");
    riempiMazzo(mazzo);

    mescola(mazzo); 
    printf("Ecco la tua mano:   \n");
    visualizzaMano;
    printf("Vuoi cambiare una carta ? S/N ");
    scanf(" %c",&scelta);
    if(scelta=='S'|| scelta=='s'){
        printf("\nInserisci in che posizione ce l' hai in mano ?"); // è l' indice che ha nell' array la carta
        scanf("%d",&indiceScambio);
        scambia(mazzo,mano[indiceScambio]);
    }
       

}
    
