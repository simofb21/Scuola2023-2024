#include <stdio.h>

int nLati=6;
    void volumeSuperficie(float lato, float *volume, float *superficie);

    int main(){
        float lato, volume, superficie;
        printf("Inserisci il lato ");
        scanf("%f",&lato);
        volumeSuperficie(lato,&volume,&superficie);
        printf("La superficie e' %f. Il volume e' %f",superficie,volume);
    }
//funzione calcolo volume e area
     void volumeSuperficie(float lato, float *volume, float *superficie){
        *superficie= lato * lato* nLati; //superficie
        *volume= lato * lato * lato;// calcolo volume
     }
