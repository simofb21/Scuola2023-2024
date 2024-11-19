/*
Combinazioni.c
fusar bassini simone 3ic 
*/
#include <stdio.h>
//fattoriale
    int fattoriale(int a){
        int i,fat=1;
        for (i=2;i<=a;i++){
            fat=fat*i;
        }
        return fat;
    }
    // calolo combinazioni
    int calcoloCombinazione(){
        
    }
int main(){
    int a,b;

    printf("Quanti oggetti vuoi disporre?\nIl programma ti dira' in quanti modi puoi farlo ");
    do{
        scanf("%d",&a);
        if(a>=10)
            printf("a non puo essere maggiore  di 10, riprova con un nuovo valore ");
    }
    while(a>=10);
    b=fattoriale(a);
    printf("Puoi disporli in %d modi",b);
}