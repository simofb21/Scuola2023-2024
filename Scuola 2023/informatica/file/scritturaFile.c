#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char nomeFile[30];
    int numero;
    printf("Inserisci un numero(positivo): ");
    scanf("%d",&numero);
    if(numero<0){
        printf("Il numero inserito non e' positivo\n");
        return 1;
    }
    printf("Inserisci il nome del file: ");
    scanf("%s",nomeFile);
    strcat(nomeFile,".txt"); //ci attacchiamo noi l' estensione

    FILE *file = fopen(nomeFile,"wt");

    if (file==NULL) //se il file non esiste , ne crea uno e lo fa normalmente. da errore se il file che esiste è magari già aperto e sta già venendo scritto ad esempio dall ' editor, opprue non esiste il percorso file
    {
        printf("Errore nell' apertura del file\n");
        return 1;
    }
    for(int i = 1; i<=numero; i++){
        fprintf(file,"%d\n",i); 
    }
    fclose(file);
    printf("File %s scritto correttamente\n",nomeFile);
    return 0;
}