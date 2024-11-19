#include <stdio.h>
#define NUMERO_TEMPERATURE 7
    int main(){
        float temperature[NUMERO_TEMPERATURE],temperaturaMin;
        int i,giornoTMax=0;

        for(i=0;i<NUMERO_TEMPERATURE;i++){
            printf("Inserisci la temperatura ordierna: Giorno %d ",i+1);
            scanf("%f",&temperature[i]);
            if(i==0)
                temperaturaMin=temperature[0];    
           
            if(temperature[i]<=temperaturaMin){
                temperaturaMin=temperature[i];
                giornoTMax=i+1;
            }
        }
        printf("Il giorno con la temperatura minima era il %do giorno. La temperatura era di %.5f",giornoTMax,temperaturaMin);
 
        }