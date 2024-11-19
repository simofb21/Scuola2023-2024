/*
Fusar Bassini Simone 3ic
bingo
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

    void numeroEstratto(int dimensione, int nEstratti[]){       //estraiamo 200 volte un numero da 1 a 90 , e lo piazzamo nell' array
        srand(time(0));
        for(int i=0; i<200;i++){
              nEstratti[i]=rand()%90+1;
             printf("Estrazione %d : Numero %d\n",i+1,nEstratti[i]);       
        
        }
    }
  
  
    void numeri1t90(int dimensione, int numeri[]){  //riempio il vettore numeri con i numeri da 1 a 90 
            for(int i=0;i<90;i++){
                 numeri[i]=i+1;
        }
    }
   
   
    int main(){
        int dimensione=200,nEstratti[200];
        int volteUscitoN,i,nEstrazioni=0;
        int numeri[90];
        
        numeroEstratto(dimensione,nEstratti);
        numeri1t90(90,numeri);
       
        for(i=0;i<90;i++){      //faccio andare i da 1 a 90, i lo uso appunto per i 90 numeri che possono essere estratti
             nEstrazioni=0;
            for(int k=0;k<200;k++){ //faccio andare k da 1 a 200, per verificare se l ' array in quegli indici(da 1 a 200), ha il valore dell'i, che viene incrementato dopo che ho fatto queste 200 prove
                 if(numeri[i]==nEstratti[k]){
                    nEstrazioni++;

            }}
            printf("Il numero %d, e' stato estratto %d volte\n",numeri[i],nEstrazioni);
           
            
        }
    }