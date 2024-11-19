#include <stdio.h>
#include <string.h>

typedef struct 
{   
    char cognome[20];
    int giorno;
}Ambulatorio;
int main(){
    Ambulatorio elencoPrenotazioni[]={
  {"Astolfi", 27},
  {"Bianchi", 3},
  {"Carli", 15},
  {"Conti", 26},
  {"Diaz", 2},
  {"Ferro", 22},
  {"Finotti", 21},
  {"Marangoni", 13},
  {"Montale", 18},
  {"Nardo", 1},
  {"Natale", 30},
  {"Papi", 28},
  {"Pasquali", 4},
  {"Ranieri", 10},
  {"Salvi", 20},
  {"Tommasi", 7},
  {"Verdi", 25},
  {"Zanetti", 17},
  {"Zucchi", 14}
}; //struct inizializzazione nel main

for(int giorno = 1; giorno<=30; giorno++){ //ciclo che fa controlli giorno per giorno
    int occupato=0;
    for (int i = 0; i < sizeof(elencoPrenotazioni)/sizeof(elencoPrenotazioni[0]); i++) //ciclo che finisce internamente alla lunghezza effettiva
{
    if(elencoPrenotazioni[i].giorno==giorno){
        occupato=1;
        break;
    }    
}
    if(occupato==0)
        printf("Il giorno %d e' vuoto \n",giorno);
}
}