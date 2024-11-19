/*
Simone Fusar Bassini 
funzione per trovare una parola palindroma in c*/
#include <stdio.h>
#include <string.h>

int palindromicita(char parola[],int lunghezza){
 
    for(int i=0; i<lunghezza/2; i++){
        if(parola[i]!=parola[lunghezza-(i+1)]){
            return 0;
            break ;
            }
        else return 1;
    }
}

int main(){
    char parola[50];
    int lunghezza;
    printf("Il programma verifica se la tua parola e' palindroma  o no.\n Inserisci la parola ");
    scanf("%s",&parola);
    if(palindromicita(parola,strlen(parola))==1)
        printf("La tua parola e' palindroma");
    else printf("La tua parola non e' palindroma ! ");
}