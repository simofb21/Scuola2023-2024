#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef char stringa[20];
typedef struct{
    int ore;
    int minuti;
    stringa codice;
}Ingresso;

int converti( int ore, int minuti){
    return ore*60+minuti;
}

int main(){
    int minAssInizio,minutiAssFine,diffAss;
    int n=0;
    int oreFine=24,minFine=0; //la giornata finisce alla mezzanotte
    Ingresso tuttiUtenti[50];
    Ingresso riempiFile[50];
    FILE * output=fopen("output.txt","w");
    FILE * input=fopen("dati.txt","r");
    
    if(input == NULL){
        printf("Errore nell' apertura del file  \n");
        return 1;
    }
    if(output == NULL){
        printf("Errore nella scrittura del file  \n");
        return 1;
    }
    while(fscanf(input,"%d %d %s",&tuttiUtenti[n].ore,&tuttiUtenti[n].minuti,tuttiUtenti[n].codice)==3){
        n++;
    }
    minutiAssFine=converti(oreFine,minFine);
    for(int i = 0; i < n; i++){
        strcpy(riempiFile[i].codice,tuttiUtenti[i].codice);
        minAssInizio=converti(tuttiUtenti[i].ore,tuttiUtenti[i].minuti);
        diffAss=minutiAssFine-minAssInizio;
        riempiFile[i].ore= diffAss/60;
        riempiFile[i].minuti=diffAss%60;
    }
    for(int i = 0; i < n; i++){
        fprintf(output,"%2d %2d %s\n",riempiFile[i].ore,riempiFile[i].minuti,riempiFile[i].codice);
        
    }
    printf("Fatto");
   fclose(output);
   fclose(input);
       return 0;

}
