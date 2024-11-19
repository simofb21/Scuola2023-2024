#include <stdio.h>
#include <string.h>

typedef char Stringa[20];

typedef struct 
{
    Stringa nome;
    float prezzo;
    int qta;
}Articolo;

void stampa(Articolo articolo){
    printf("Nome: %s Prezzo : %.2f Quantita' disponibile: %d\n",articolo.nome,articolo.prezzo,articolo.qta);
}

void scambia(Articolo magazzino[3]){ //scambio quelli del primo e del secondo utilizzando uno struct temporaneo
    Articolo temp;
    strcpy(temp.nome,magazzino[0].nome);
    temp.prezzo=magazzino[0].prezzo;
    temp.qta=magazzino[0].qta;
    strcpy(magazzino[0].nome,magazzino[1].nome);
    magazzino[0].prezzo=magazzino[1].prezzo;
    magazzino[0].qta=magazzino[1].qta;
    strcpy(magazzino[1].nome,temp.nome);
    magazzino[1].prezzo=temp.prezzo;
    magazzino[1].qta=temp.qta;
}
int main(){
    Articolo magazzino[3]={{"Biscotti",5.50,10},{"Insaccati",5.10,100},{"Creme",5.20,4}};
    Articolo a1;
    strcpy(a1.nome,"Zaini");
    a1.prezzo=10.50;
    a1.qta=45;

    stampa(a1);
    scambia(magazzino);
    stampa(magazzino[0]);
    stampa(magazzino[1]);
    stampa(magazzino[2]);
}