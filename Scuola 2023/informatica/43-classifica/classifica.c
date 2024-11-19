#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define PAR 8

void ordinePunti(char elenco[PAR][20], int punti[8]){
    int cambi, i;
    char temp[20];
    int valoreTemp;
    do{
        cambi=0;
        for(i = 0; i < PAR-1; i++){
            if(punti[i]<punti[i+1]){
                strcpy(temp,elenco[i]);
                valoreTemp=punti[i];
                strcpy(elenco[i],elenco[i+1]);
                punti[i]=punti[i+1];
                strcpy(elenco[i+1],temp);
                punti[i+1]=valoreTemp;
                cambi=1;
            }
        }
    }
    while(cambi==1);
    
}
void ordineAlfabetico(char elenco[PAR][20], int punti[8]){
    int cambi, i;
    char temp[20];
    int valoreTemp;
    do{
        cambi=0;
        for(i = 0; i < PAR-1; i++){
            if(strcmp(elenco[i],elenco[i+1])>0){
                strcpy(temp,elenco[i]);
                valoreTemp=punti[i];
                strcpy(elenco[i],elenco[i+1]);
                punti[i]=punti[i+1];
                strcpy(elenco[i+1],temp);
                punti[i+1]=valoreTemp;
                cambi=1;
            }
        }
    }
    while(cambi==1);
    
}


int main(){
    char elencoNomi[PAR][20]={"Mario","Luca","Tommaso","Federico","Alessandro","Dario","Luigi", "Giacomo"};
    int  punti[]={100,23,412,432,231,1,91,104};
    int scelta;
    int flag=0;
    while(flag==0)
    {
        printf("Come vuoi visualizzare i risultati : 1 ORDINE ALFABETICO, 2 ORDINE PER PUNTEGGIO , 3 NON VOGLIO PIU' VISUALIZZARE I RISULTATI \n");
        scanf("%d",&scelta);
        switch (scelta)
        {
        case 1:
            ordineAlfabetico(elencoNomi,punti);
            for(int i = 0; i<PAR; i++)
            {
                printf("%d:%s PUNTI %d\n",i+1,elencoNomi[i],punti[i]);
            }
            break;
        case 2:
            ordinePunti(elencoNomi,punti);
            for(int j = 0; j<PAR; j++)
            {
                printf("%d :  %s PUNTI %d\n",j+1,elencoNomi[j],punti[j]);
            }
            break;
        case 3:
            flag=1;
            printf("FINE");
            break;  
        
        default:
            break;
        }
    }

}