#include <stdio.h>
    //funzione
    void sommaDifferenza(int a,int b,int *somma, int *differenza){
            *somma= a+ b;
            *differenza= a- b;
    }

    int main(){
        int a=10,b=5,somma=0,differenza=0;
        sommaDifferenza(a,b,&somma,&differenza);
            printf("La somma e' %d .\n La differenza e' %d",somma,differenza);



    }