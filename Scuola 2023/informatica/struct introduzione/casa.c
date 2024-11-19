#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int mq; //metri quadrati 
    char classeEnerg; 
    int costo;
}Casa;
int costoMinore(Casa vettoreDiCase[3]){
    int iMin=0;
    for (int i = 0; i < 3; i++)
    {
        if(vettoreDiCase[iMin].costo>vettoreDiCase[i].costo)
            iMin=i;
    }
    return iMin;
}
int classeMinore(Casa vettoreConCase[3]){
    int iMin=0;
    for (int i = 0; i < 3; i++)
    {
        if(vettoreConCase[iMin].classeEnerg>vettoreConCase[i].classeEnerg)
            iMin=i;
    }
    return iMin;
}

int main(){
    Casa vetCase[3];
    
    for(int i = 0 ; i < 3; i++){
        printf("Dati casa  n %d : \n",i+1);
        printf("Metri quadrati : ");
        scanf("%d",&vetCase[i].mq);
        printf("\nCosto: ");
        scanf("%d",&vetCase[i].costo);
        printf("\nClasse energetica : ");
        scanf(" %c",&vetCase[i].classeEnerg);
        

    }
    system("CLS");
    printf("\nElenco case : \n");
    for(int j = 0 ; j < 3; j++){
        printf("Casa %d : Metri quadri = %d Costo = %d  Classe = %c \n",j+1,vetCase[j].mq, vetCase[j].costo, vetCase[j].classeEnerg);
    }
   
    int posMinCosto=costoMinore(vetCase);
    printf("Miglior prezzo : \n Casa %d  Costo %d  Classe %c Metri quadri %d \n",posMinCosto+1,vetCase[posMinCosto].costo, vetCase[posMinCosto].classeEnerg, vetCase[posMinCosto].mq);


    int posMinClasse=classeMinore(vetCase);
    printf("Classe minore  : \n Casa %d  Costo %d  Classe %c Metri quadri %d ",posMinClasse+1,vetCase[posMinClasse].costo, vetCase[posMinClasse].classeEnerg, vetCase[posMinClasse].mq);

}