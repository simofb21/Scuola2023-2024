/*
Fusar Bassini Simone 3IC 
cilindro.c
*/
#include <stdio.h>

//funzione per l' area 
float areaCerchio(float raggio){
    float pi = 3.14159;
    float area = raggio * raggio * pi;
    return area;
}
//funzione per il volume del cilindro 
float volumeCilindro(float raggio, float altezza){
    float area = areaCerchio(raggio);
    float volume = area * altezza;
    return volume;
}
//main
int main(){
     float altezza, raggio, volume;
    printf("Inserisci il raggio: ");
    scanf("%f", &raggio);
     printf("Inserisci l'altezza: ");
    scanf("%f", &altezza);
    volume = volumeCilindro(raggio, altezza);
    printf("Il volume del cilindro e': %f",volume);
}