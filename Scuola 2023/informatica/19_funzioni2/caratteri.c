/*
FUsar Bassini Simone 
caratteri.c
Creare una funzione che permetta di stampare una riga costituita dalla ripetizione di un carattere c per n volte, dove n e c sono passati dall’utente.
Creare un programma che permette di stampare un quadrato di simboli di dimensione x passata dall’utente, con righe alternate una di ‘-‘ e una di ‘+’.*/
#include <stdio.h>
//funzione che stampa il carattere per tot righe...
void stampaRiga(char c,int n){
    int i;

    for (i=1;i<=n;i++)
        printf(" %c",c);

}
//main
int main(){
    int nRighe,i;
    char car;
    printf("Inserisci il numero di righe \n");
    scanf("%d",&nRighe);
    //ciclo for; che stampa la riga ...
        for (i=1;i<=nRighe;i++){
             printf("\n");
            if(i%2==0)
                    stampaRiga('+',nRighe);
                   
            else 
                  stampaRiga('-',nRighe);
                 
        }
}