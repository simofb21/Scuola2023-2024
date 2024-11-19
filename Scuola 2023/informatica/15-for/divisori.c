/*
Fusar Bassini Simone
3IC
divisori.c
consegna:1. DIVISORI. Scrivere un programma in C che letto un numero intero n scrive tutti i suoi divisori
Es. inserendo 18 scrive 2, 3, 6, 9*/
#include <stdio.h>
int main(){
    int i,n;
    printf("Inserisci un numero intero positvo ");
    scanf("%d",&n);
    for(i=2;i<n;i+=1)  {
        if(n%i==0)
            printf("%d,",i);
        }
            

}
