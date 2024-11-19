#include <stdio.h>
#include <string.h>

#define NMACCHINE 5
 
int main(){
    char targa[NMACCHINE][10];
    int kmPercorsi[NMACCHINE];
    int i,j,q;
    char targaVerifica[10];

    for(i=0; i<NMACCHINE; i++){ //riempiuo array
        printf("Inserisci la targa della macchina %d: ",i+1);
        scanf("%s",targa[i]);
        printf(" Inserisci il numero di km percorsi da quella macchina: ");
        scanf("%d",&kmPercorsi[i]);
    }
    //km percorsi sapendo targa
    printf("Inserisci la targa della tua macchina per conoscere i km percorsi: ");
    scanf("%s",targaVerifica);
    
    for(q=0; q<NMACCHINE; q++)
    {
        if(strcmp(targaVerifica,targa[q])==0){
            printf("I km percorsi sono : %d\n\n",kmPercorsi[q]);
        }
    }

    for(j=0; j<NMACCHINE; j++) //stampo targhe con più di 10kkm
    {
        if(kmPercorsi[j]>=10000){
            printf("QUESTA TARGA CORRISPONDE A UNA MACCHINA CHE HA SUPERATO I  10K KM : %s",targa[j]);
        }
    }

}