/*
Simone Fusar Bassini 3IC
nCifre.c
scrivi un programma che dato un numero , determini il numero di cifre
*/
#include <stdio.h>
int main(){
    int n,nCifre=0;
    printf("Inserisci il numero: \n");
    scanf("%d",&n);
    while (n>0){
        n=n/10;
        nCifre+=1;
    } 
    printf("%d",nCifre);
   }