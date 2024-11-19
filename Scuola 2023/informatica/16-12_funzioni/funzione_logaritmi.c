/*
Fusar Bassini SImone: 
funzione_logaritmi.c
*/
#include <stdio.h>
#include <math.h> 

    void logaritmo(float x, float b){

        float logX=log(x);
        float logB=log(b);
        float result=logX/logB;
        printf("Il logaritmo in base %f di %f e' %f",b,x,result);

    }

int main(){
    float x,b;
    printf("Inserisci il numero di cui vuoi avere il logaritmo, e la base ");
    scanf("%f %f",&x,&b);
    logaritmo(x,b);

}