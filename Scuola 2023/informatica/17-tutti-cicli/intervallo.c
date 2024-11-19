/*
Fusar Bassini Simone 3IC
intervallo.c
1. INTERVALLO. Si vuole realizzare un algoritmo che consenta, dati in ingresso due numeri interi, 
di stampare tutti i numeri compresi tra il minore e il maggiore inclusi.
*/
#include <stdio.h>
int main(){
                int nMax,nMin,i,temp;
                printf("Inserisci un numero  ");          // ho messo due numeri qualsiasi , se poi... gli cambio il valore
                scanf("%d",&nMin);
              printf(" e Inserisci un numero "  );
                scanf("%d",&nMax);
                temp=nMin;
                if (nMin>nMax)
                  {
                    nMin=nMax;
                    nMax=temp;
                  }
                for (i=nMin;i<=nMax;i++){
                    printf("%d,",i);
                }



}