#include <stdio.h>
#include <string.h>
typedef struct extra {
    char ruota[20];
    int numeri[5];
} Estrazione;

// da realizzare
void leggiDati(Estrazione d[]){
    FILE *input = fopen("estrazione.txt", "r");
    int i,j;
    if(input==NULL){
        printf("Errore nell'apertura del file\n");
        return;
    }
    for(i=0; i<10; i++){
        fscanf(input,"%s",d[i].ruota);
        for(j=0; j<5; j++)
            fscanf(input,"%d",&d[i].numeri[j]);
    }
    fclose(input);
}

void stampaDati(Estrazione d[]){
    int i,j;
     for(i=0; i<10; i++)
        {
            printf("%s\t",d[i].ruota);
            for(j=0; j<5; j++)
                printf("%d\t",d[i].numeri[j]);
            printf("\n");
        }
}

//  da realizzare
void controlla(Estrazione d[],char ruota[],int num[],int n){
    int ruotaTrovata=0, numTrovato=0;
    for(int i=0; i<10; i++){
        if(strcmp(d[i].ruota,ruota)==0){
          ruotaTrovata=1;
          for(int j=0; j<n; j++){
            if(num[j]==d[i].numeri[j]){
                printf("Numero %d estratto \n",num[j]);
                numTrovato++;}
          }
        }
    }
    if(ruotaTrovata==0)
        printf("Ruota non trovata\n");
    if(numTrovato==0)
        printf("Nessun numero trovato\n");
    else printf("Hai trovato %d numeri\n",numTrovato);
}
int main(){
    int i,n;
    char ruota[20];
    int num[10];
    Estrazione dati[10];
    leggiDati(dati);
    stampaDati(dati);
    printf("Quale ruota: ");
    scanf("%s",ruota);
    printf("Quanti numeri: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
     {
         printf(" numero: ");
         scanf("%d",&num[i]);
     }
    controlla(dati,ruota,num,n);

    return 0;
}