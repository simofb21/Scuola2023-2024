#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LUN 50

typedef struct{
    char italiano[MAX_LUN];
    char inglese[MAX_LUN];
} CoppiaWord;

void cercaParola(char parola[], char lingua[]){
    char temp[MAX_LUN];
    int trovato=0;
    CoppiaWord coppia;

    FILE *file= fopen("dizionario.txt", "r");
    while(fscanf(file, "%s %s", coppia.italiano, coppia.inglese)==2){ //se è =2 posso andare avanti oppure la verifica la faccio con EOF che è una costante per i file di testo, che viene restituita dallo scanf quanddo il file è finito
        if(strcmp(parola, coppia.italiano)==0 && strcmp(lingua, "italiano")==0){
            printf("La parola in inglese e': %s\n", coppia.inglese);
            trovato=1;
            break;
        }
        else if(strcmp(parola, coppia.inglese)==0 && strcmp(lingua, "inglese")==0){
            printf("La parola in italiano e': %s\n", coppia.italiano);
            trovato=1;
            break;
        }
        
    }
    fclose(file);
    if(trovato==0){
        printf("Parola non trovata\n");
    }
}
void aggiungiCoppia(){
    CoppiaWord nuovaCoppia;
    FILE *file= fopen("dizionario.txt", "a"); //apro il file di scrittura in modalità append, quindi lo scrive alla fine, non sovrascrive
    printf("Inserisci la parola italiana: ");
    scanf("%s", nuovaCoppia.italiano);
    printf("Inserisci la parola inglese: ");
    scanf("%s", nuovaCoppia.inglese);
    fprintf(file, "\n%s %s", nuovaCoppia.italiano, nuovaCoppia.inglese);
    fclose(file);
    printf("Coppia aggiunta\n");

}

int main(){
    int scelta;
    char parola[MAX_LUN];
    char lingua[MAX_LUN];
    //apre il file per vedere se il dizionario esiste
    FILE *file= fopen("dizionario.txt", "rt");
    if(file==NULL){
        printf("Il dizionario non esiste, creiamone uno\n");
        return 1;
    }
    else fclose(file);
    while(1){
        printf("Menu:\n1. Traduci parola da italiano a inglese \n2.Traduci parola da inglese a italiano\n3. Aggiungi parola\n4. Esci\n");
        scanf("%d", &scelta);
        
        switch(scelta){
            case 1:
                printf("Inserisci la parola italiana  da tradurre: ");
                scanf("%s", parola);
                cercaParola(parola, "italiano");
                break;
            case 2:
                printf("Inserisci la parola inglese da tradurre: ");
                scanf("%s", parola);
                cercaParola(parola, "inglese");
                break;
            case 3:
                aggiungiCoppia();
                break;
            case 4:
                return 0;

            default:
                printf("Scelta non valida\n");
                break;;
        }
    }
}