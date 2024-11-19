#include <stdio.h>
int main (){
    int n ;
    printf ("Inserisci un numero tra 1 e 10 \n");
    do{
        scanf("%d",&n);
        if((n<1)||(n>10)){
            printf("Ripeti \n");}}
        while(n<1 || n>10);
        
	printf("Il numero e¨ %d",n);
    }

