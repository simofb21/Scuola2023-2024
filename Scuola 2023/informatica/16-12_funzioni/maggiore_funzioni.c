/*
Fusar Bassini Simone : funzione per fare il  maggiore*/

#include <stdio.h>

      float maggiore(float a, float b){
            float maggiore=a;
           
            if(b>=maggiore)
                maggiore=b;
            
           return maggiore;
        }

//main : comunichiamo all' utente quale numero è il maggiore tra 2 proposti da lui;
int main(){

    float a,b,magg;
     printf("Inserisci due numeri a e b: ");
     scanf("%f %f",&a,&b);
     magg=maggiore(a,b);
     printf("Il maggiore e' : %.2f",magg);
}