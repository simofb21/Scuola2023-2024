/*
Fusar Bassini Simone 3ic
frequenza
*/
#include <stdio.h>


    void riceviArray(int dimensione, int array[] ){
        for(int i=0; i<dimensione;i++){
            printf("Inserisci il numero %d \n", i+1);
            scanf("%d",&array[i]);
        }
    }

  void trovaPrimoNumero(int dimensione, int array[], int * trovato, int * nTrovato){
        for(int i=0;i<dimensione;i++){
            int volte=0;  //inizializzo il numero  di volte a 0
            for (int k=0;k<dimensione;k++){     //faccio un ciclo che verifica se il numero è stato trovato tot volte e aggiungo
                if(array[i]==array[k]){
                    volte++;}
 }
            if(volte>*trovato){ //se è il numero trovo più volte
                *nTrovato=array[i];
                *trovato=volte;
                    }
                
            }
           
 
        }
    
    int main()
    {
      
        int trovato=0, nTrovato;
        int dimensione=10;
        int array[dimensione];
        riceviArray(dimensione,array);
        trovaPrimoNumero(dimensione,array,&trovato,&nTrovato);
        printf("Il numero trovato piu' volte e' %d, trovato %d volte",nTrovato,trovato);
        return 0;
    }
    