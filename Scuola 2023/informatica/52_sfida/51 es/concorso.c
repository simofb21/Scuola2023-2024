#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NPART 10
typedef struct {
    char nome[20] ;
    int punteggi[NPART];

} result;

int main(){
    int indice=0;
    result vet[]={
{"Rossi", {4,6,1,2,0,4,0,1,2,2}}, 
{"Bianchi", {12,0,9,4,5,2,1,1,0,5}}, 
{"Verdi", {2,3,7,9,10,4,5,9,7,2}}, 
{"Astolfi", {0,2,6,1,8,5,9,10,7,8}}, 
{"Lorenzi", {6,9,7,1,0,0,4,5,2,1}}, 
{"Franchi", {1,10,11,19,4,7,2,0,2,7}}
 };

for(int j = 0; j < NPART; j++){ //fa scorrere i nomi
    for (int i = 0; i < 6; i++) //fa scorrere i punteggi
    {
        
        if(vet[i].punteggi[j]>vet[indice].punteggi[j]){
            indice=i;
        }
    }
    printf("%s %d \n",vet[indice].nome,vet[indice].punteggi[j]);
}
return 0;
}