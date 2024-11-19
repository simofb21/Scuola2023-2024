#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct 
{
    char nome[20];
    int valore;
}Dato;

int main(){
    char nomeMax[20];
    char nomeFile[20];
    Dato dato;
    FILE * f;
    int valMax=-999;
    printf("Inserisci il nome del file di dati ");
    fscanf(stdin,"%s",nomeFile);
    f=fopen(nomeFile,"rt");
    if(f==NULL){
        printf("Errore nell'apertura del file\n");
        return 1;
    }
    //ciclo lettura
    while(fscanf(f,"%s %d",dato.nome,&dato.valore)==2){ // Finchè lo scanf avviene ovvero legge 2 dati(nome e valore)
        fprintf(stdout,"DATO LETTO: %s %d\n",dato.nome,dato.valore);
        if(dato.valore>valMax){
            valMax=dato.valore;
            strcpy(nomeMax,dato.nome);
        }
    }
    printf("Il valore massimo e' %d e corrisponde a %s\n",valMax,nomeMax);
    fclose(f);
    return 0;
}