#include <stdio.h>
#define NUM 6
    
    int main(){
    
        int i,nSuperi=0,numero;
        float somma=0.0,media;

        printf("Quanti voti hai preso ? ");
        scanf("%d",&numero);
        float voti[numero];

        for(i=0;i<numero;i++){
            printf("Inserisci il %do voto ",i+1);
            scanf("%f",&voti[i]);
            somma= somma + voti[i];
        }
        media = somma / numero;
        printf("%.2f e' la tua media ",media);

        for(i=0;i<numero;i++){
            if (voti[i]>media)
                nSuperi++;
        

    }
        printf("Hai preso %d  voti superiori alla media ",nSuperi);
    }
