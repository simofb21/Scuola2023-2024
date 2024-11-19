/*
Fusar Bassini Simone 
pixel.c
Un pixel è codificato con tre valori interi compresi tra 0 e 255 che rappresentano l’intensità dei componenti rosso, verde e blu. Scrivi:
- una funzione che riceve in input il codice di una componente e restituisca un valore logico (0 o 1) che indica se è valido oppure no.
- una funzione che riceve in input il valore per le tre componenti del colore e restituisca un valore logico (0 o 1) che indica se sono tutti e tre validi.
- una funzione che calcoli la luminosità media di un pixel come valore medio intero delle sue tre componenti.
- un main che chiede all’utente di inserire i valori delle tre componenti di un pixel e stampi sullo schermo il valore della luminosità media se è possibile calcolarla, altrimenti un opportuno messaggio di errore.
*/
#include <stdio.h>
#include <stdbool.h>
//funzione che verifica solo 1 
bool singoloValido(int valoreRGB){      
    bool isValid=false;
    if(valoreRGB>=0&&valoreRGB<=255)
        isValid=true;
    return isValid;
}
// funzione che verifica tutte e 3
bool validTutte(int red, int green, int blue){
    bool isValid=false;
    bool validRed;bool validGreen; bool validBlue;
    validRed=singoloValido(red);
    validGreen=singoloValido(green);
    validBlue=singoloValido(blue);
    if(validRed && validGreen && validBlue)
        isValid=true;
    return isValid;
}//funzione che verifica la validità, poi stampa la media , o altimenti un valore diverso, e negativo, in modo che stampo se non e' valido
float media(int red, int green, int blue){
    float m;
    if (validTutte(red,green,blue))
        m=((float)red+(float)green+(float)blue)/3;
    else m=-111;

    return m;
} //main
int main(){
    int r,g,b;
    float luminosit;
    printf("Inserisci la quantita di rossa: ");
    scanf("%d",&r);
    printf("Inserisci la quantita di green: ");
    scanf("%d",&g);
    printf("Inserisci la quantita di blue: ");
    scanf("%d",&b);

    luminosit=media(r,g,b);
    if (luminosit==-111)    //verifico appunto se non sono corretti
        printf("Dati non corretti");
    else 
        printf("La luminosita' e' %f",luminosit);
    

}
