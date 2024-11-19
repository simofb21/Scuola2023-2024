#include <stdio.h>
    void sommaProdotto(int a, int b, int *somma, int *prodotto){
        *somma=a+b;
        *prodotto=a*b;
    }
    
    int main(){
        int a=1,b=104,somma,prodotto;
            sommaProdotto(a,b,&somma,&prodotto);
            printf("Somma %d \n prodotto %d",somma,prodotto);    }