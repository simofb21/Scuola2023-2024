#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubbleSort(int *vet, int n){
    int i, j, temp;
    int scambi=0;
    do{
        scambi=0;
        for (int i = 0; i < n-1; i++)
        {
            if(vet[i]>vet[i+1]){
                temp=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=temp;
                scambi++;
            }
        }
        
    }while(scambi!=0);
}      
int main(){
    FILE *fInput;
    FILE *fOutput;
    int nElementi; // è il carattere della prima riga
    fInput=fopen("disordinato.txt","rt"); // apre il file in lettura
    fOutput=fopen("ordinato.txt","wt"); //apre il file in scrittura
    if(fInput==NULL){
        printf("Errore nell'apertura del file disordinato.txt per la lettura dei numeri disordinati");
        return -1;
    }
    if(fOutput==NULL){
        printf("Errore nell'apertura del file ordinato.txt per la scrittura dei numeri ordinati");
        return -1;
    }

    fscanf(fInput,"%d",&nElementi); // legge il numero di elementi, nella prima riga del file
    int vet[nElementi]; // dichiaro un vettore di nElementi 
    for (int i = 0; i< nElementi; i++)
    {
        fscanf(fInput,"%d",&vet[i]); //riempio il vvetore con i numeri del file
    }
    bubbleSort(vet,nElementi); //ordino il vettore con il bubble sort
    for (int i = 0; i < nElementi; i++)
    {
        fprintf(fOutput,"%d\n",vet[i]); //riempio il nuovo file
    }
    printf("fatto"); //stampo un messaggio
    fclose(fInput);
    fclose(fOutput); //chiudo i file
    return 0;
}