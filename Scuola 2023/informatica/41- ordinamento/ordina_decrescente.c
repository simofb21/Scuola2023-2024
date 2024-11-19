/*
fusar bassini simone 
esercizi su bubble sort*/
#define LUNGHEZZA 20
#define MAX 89
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void riempiCasuale(int vet[]){
  int i;
  srand(time(NULL));   
  for (i = 0; i < LUNGHEZZA; i++)     
    vet[i] = (rand() % MAX)+10;   
}

void ordinamentoBubbleDecresente(int array[]){
    int cambi;
    int temp;
    do{
        cambi=0;
        for (int  i = 0; i < LUNGHEZZA-1; i++)
        {
            if(array[i]<array[i+1]){
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
                cambi=1;
            }    
        }
        
    }
    while(cambi==1);
}


int main(){
    int array[LUNGHEZZA];
    riempiCasuale(array);
    ordinamentoBubbleDecresente(array);
    for(int i=0; i<LUNGHEZZA; i++){
        printf("%d   ",array[i]);
    }


    
}