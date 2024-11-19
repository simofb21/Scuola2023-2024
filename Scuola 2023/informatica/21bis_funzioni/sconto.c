/*Fusar Bassini SImone 

2. [sconto] - Scrivere una funzione che riceva in ingresso un numero double corrispondente al prezzo 
iniziale di un articolo e un numero intero s rappresentante il valore percentuale di sconto (cioè, se ad esempio s = 20, 
significa che all'articolo si applica lo sconto del 20%) e restituisca il prezzo scontato. Scrivi poi un main per provare la funzione 
(chiede all'utente di inserire il prezzo pieno del prodotto e mostra il valore del prezzo scontato restituito dalla funzione).
*/
#include <stdio.h>
    double saldi(double prezzoInt,double sconto){
        float prezzo;
        return prezzo=(prezzoInt*(1-(sconto/100)));
    }


int main(){
    double prezzoInt,sconto,prezzoEff;
    printf("Inserisci il prezzo intero ");
    scanf("%lf",&prezzoInt);
    printf("Inserisci lo sconto ");
    scanf("%lf",&sconto);
    prezzoEff=saldi(prezzoInt,sconto);
    printf("%.2lf",prezzoEff);


}