#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define NUM_CONCORRENTI 5
#define NUM_MANCHES 3
#define LUNGHEZZA_MAX 20


void inserimento(char nomi[NUM_CONCORRENTI][LUNGHEZZA_MAX], int punti[NUM_CONCORRENTI][NUM_MANCHES]){

    int i,j;

    for(i=0; i<NUM_CONCORRENTI; i++){
        printf("Nome concorrente %d : ",i+1);
        scanf("%s",nomi[i]);
        for(j=0; j<NUM_MANCHES; j++){
            printf("Punteggio manches %d di %s : " ,j+1,nomi[i]);         
            scanf("%d",&punti[i][j]);   
        }
    }


}



int cercaConcorrente(char nomi[NUM_CONCORRENTI][LUNGHEZZA_MAX], char nomeDaCercare[LUNGHEZZA_MAX]){

    int i;

    for (i = 0; i < NUM_CONCORRENTI; i++)
    {
        if(strcmp(nomeDaCercare,nomi[i])==0){
            return i;

        }
    }
    return -1;
    
}


float calcolaMedia(int punti[NUM_CONCORRENTI][NUM_MANCHES], int indice ) {

    float somma=0.0;

    for (int j = 0; j < NUM_MANCHES; j++)
    {
        somma=somma + punti[indice][j];
    }
    return somma/NUM_MANCHES  ; //return media
    
}



int main(){
    //Dati; 

    char concorrenti[NUM_CONCORRENTI][LUNGHEZZA_MAX];
    int Punteggi [NUM_CONCORRENTI][NUM_MANCHES];
    char nomeCercato[LUNGHEZZA_MAX];
    int indiceCercato;
    int j;

    inserimento(concorrenti, Punteggi) ;

    printf("Inserisci il nome del concorrente : ");
    scanf("%s",nomeCercato);
    indiceCercato=cercaConcorrente(concorrenti,nomeCercato);

    if(indiceCercato != 1 ){
        printf("Risultati di %s: ",nomeCercato);
        for (j = 0; j < NUM_MANCHES; j++)
        {
            printf("%d\n",Punteggi[indiceCercato][j]);

        }
        printf("\nLa media e' : %.2f",calcolaMedia(Punteggi,indiceCercato));
        
    }
    else printf("\nNON TROvATO :( ");




}