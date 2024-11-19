#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
    char descrizione[20];
    int quantita;
    int scadenzAnno;
}
Prodotto;
int main(){
    FILE * input = fopen("prodotti.txt","r");
    FILE * output = fopen("prodottiBuoni.txt","w");
    Prodotto array[50];
    int n=0;
    
    if(input==NULL){
        printf("Errore nell' apertura del file");
        return 1;
    }
    while(fscanf(input,"%s %d %d",array[n].descrizione,&array[n].quantita,&array[n].scadenzAnno)==3){
        n++;
    }
    fclose(input);
    for (int i = 0; i < n; i++)
    {
        if(array[i].scadenzAnno>=2020){
            fprintf(output,"%s %d %d\n",array[i].descrizione,array[i].quantita,array[i].scadenzAnno);
        }
    }
    fclose(output);
    printf("File scritto correttamente");
}