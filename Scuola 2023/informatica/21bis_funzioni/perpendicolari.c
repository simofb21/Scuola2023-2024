/*
Fusar Bassini Simone 3ic
perpendicolari.c
COnsegna:
– Scrivere una funzione che riceva in ingresso i coefficienti angolari m1 e m2 di due rette espresse nella forma y = mx + q, valuti
 la loro perpendicolarità e restituisca il valore 1 se le rette sono perpendicolari oppure 0 se le rette non sono perpendicolari
  Scrivi poi un main per provare la funzione  
chiede all'utente di inserire i coefficienti di due rette e mostra il messaggio opportuno in base al valore restituito dalla funzione).*/

#include <stdio.h>
#include <math.h>
/*
float perperndicolaris(float m1, float m2){
    if(m1==pow(-m2,-1))
        return 1;
    else 
        return 0;
}*/
// la funzione era meglio farla così:
int sonoPerpendicolariT(float m1, float m2) {
    const float tolleranza = 0.00001;
    // Verifica se i coefficienti sono opposti e reciproci (-1/m2)
    if (fabs(m1 * m2 + 1) < tolleranza) {
        return 1; // Le rette sono perpendicolari
    } else {
        return 0; // Le rette non sono perpendicolari
    }
}


int main(){
    float ma,mb;
    printf("Inserisci il coefficiente angolare della prima retta e della seconda ");
    scanf("%f %f",&ma,&mb);
    if (sonoPerperndicolariT(ma,mb)==1)
        printf("Sono perpendicolari ");
    else 
        printf("Non sono perpendicolari");

}