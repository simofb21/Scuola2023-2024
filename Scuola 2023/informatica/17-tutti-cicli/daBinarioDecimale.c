/*
Fusar Bassini Simone 3IC
binario.c
stampa da binario a decimale 
*/
#include   <stdio.h>
#include <math.h>
int main(){
    int intero=0,i,nCifre=0,binario,binario2,PrimaC;

    printf("Inserisci il numero binario ");
    scanf("%d",&binario2);
    binario=binario2;
      while (binario2>0){   //verifico il n di cifre
        binario2=binario2/10;
        nCifre+=1;
    } 

    for (i=0;i<=nCifre;i+=1){
        if (binario%10!=0){     //calcolo binario; se il bit in questione è 1 , sommo
                 intero=intero+ pow(2,i);
        }
        binario=binario/10;
        }
        printf(" Il tuo numero intero e' %d",intero);
}