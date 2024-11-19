#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LEN 50
typedef struct{
    char cognome[LEN];
    char nome[LEN];
    char sesso;
    int anno;
}Person;

void ordinEta(Person arrray[], int len){
    int scambi=0;
    Person temp;
    do{
        scambi=0;
        for (int i = 0; i < len-1; i++)
    {
        if(arrray[i].anno<arrray[i+1].anno){
            temp=arrray[i];
            arrray[i]=arrray[i+1];
            arrray[i+1]=temp;
            scambi=1;
        }    //ordine decrescente di eta
    }   
    }while (scambi==1);
    
}
int main(){
    FILE * file = fopen("amici.txt","r");
    FILE * fileDonne = fopen("donne.txt","w");
    FILE * fileUomini = fopen("uomini.txt","w");
    Person array[100];
    int n=0;

    if(file==NULL){
        printf("Errore nell' apertura del file");
        return 1;
    }

    while(fscanf(file,"%s %s %c %d",array[n].cognome,array[n].nome,&array[n].sesso,&array[n].anno)!=EOF){
        n++;    
    }
    ordinEta(array,n);

    for (int i = 0; i < n; i++)
    {
        if(array[i].sesso=='M'){
            fprintf(fileUomini,"%s %s %c %d\n",array[i].cognome,array[i].nome,array[i].sesso,array[i].anno); //stampa uomini
        }
    }
    for (int i = 0; i < n; i++)   
    {
        if(array[i].sesso=='F'){
            fprintf(fileDonne,"%s %s %c %d\n",array[i].cognome,array[i].nome,array[i].sesso,array[i].anno); //stampa donne
        }
    }
    fclose(file);
    fclose(fileDonne);
    fclose(fileUomini);
    printf("Fatto");
    return 0;
}