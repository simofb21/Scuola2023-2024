#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
typedef struct {
    int nConto;
    float differenza;
}DatoIn;

typedef struct {
    float entrate;
    float uscite;
    float saldo;
}OutData;
int main(){
    int nEl;
    int nContiCorr = 3;
    FILE * input;
    FILE * output= fopen("saldo.txt","wt");
    char nomeFile[MAX];
    DatoIn array[MAX];
    OutData elenco[3];
    printf("Inserisci il nome del file ");
    scanf("%s",nomeFile);
    input = fopen(nomeFile,"rt");
    if(input == NULL){
        printf("File lettura dati non trovato\n");
        return 1;
    }
    if(output == NULL){
        printf("Errore nel file di scrittura\n");
        return 1;
    }
    while(fscanf(input,"%d %f",&array[nEl].nConto,&array[nEl].differenza) == 2){
        nEl++;
    }
    fclose(input);
    fprintf(output,"Conto\tEntrate\tUscite\tSaldo\n");
    for(int j = 0; j < nEl; j++){
        switch(array[j].nConto){
            case 1:
                if(array[j].differenza >= 0)
                elenco[0].entrate += array[j].differenza;
                else elenco[0].uscite += array[j].differenza;
                elenco[0].saldo += array[j].differenza;
                break;
            case 2:
                if(array[j].differenza >= 0)
                    elenco[1].entrate += array[j].differenza;
                    else elenco[1].uscite += array[j].differenza;
                    elenco[1].saldo += array[j].differenza;
                    break;
            case 3:
                if(array[j].differenza >= 0)
                    elenco[2].entrate += array[j].differenza;
                    else elenco[2].uscite += array[j].differenza;
                    elenco[2].saldo += array[j].differenza;
                    break;
        }
    }
    for(int i = 0; i < nContiCorr; i++){
        fprintf(output,"%d\t\t",i+1); //scrivo il numero  conto
        fprintf(output,"%.2f\t",elenco[i].entrate); // scrivo altri dati
        fprintf(output,"%.2f\t",elenco[i].uscite);
        fprintf(output,"%.2f\n",elenco[i].saldo);
    }
    fclose(output);
    printf("File scritto correttamente");
    return 0;
}