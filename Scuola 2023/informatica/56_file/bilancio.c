#include <stdio.h>
#include <string.h>
#define MAX 50
typedef struct{
    char movimento;
    float importo;
}Movimento;
int  main(){
    float uscite=0,entrate=0;
    Movimento array[MAX];
    int nELementi=0;
    FILE * movimenti = fopen("movimenti.txt","r");
    FILE * outputUscite = fopen("uscite.txt","w");
    FILE * outputEntrate = fopen("entrate.txt","w");
    if(movimenti == NULL){
        printf("Errore nell ' apertura del file\n");
        return 1;
    }
    if(outputEntrate == NULL){
        printf("Errore nella scrittura  del file\n");
        return 1;
    }
    if(outputUscite == NULL){
        printf("Errore nella scrittura del file\n");
        return 1;
    }
    while(fscanf(movimenti, " %c %f ",&array[nELementi].movimento,&array[nELementi].importo) == 2){
        nELementi++; //riempio l' array
    } 
    for(int i = 0; i < nELementi; i++){
        if(array[i].movimento== 'E'){
            fprintf(outputEntrate, "%c %.2f\n",array[i].movimento,array[i].importo);
            entrate+=array[i].importo;
        }
        else{
            fprintf(outputUscite, "%c %.2f\n",array[i].movimento,array[i].importo);
            uscite += array[i].importo;
        } 

    }
    fclose(movimenti);
    fclose(outputEntrate);
    fclose(outputUscite);
    printf("Le entrate sono %.2f \n",entrate);
    printf("Le uscite sono %.2f \n",uscite);
    printf("Il bilancio e' %.2f \n",entrate-uscite);
    return 0;
}