/*
Fusar Bassini Simone 3IC
binario.c
stampa un intero positivo in binario
*/
#include   <stdio.h>
int main(){
    int intero,resto;

    printf("Inserisci il numero intero ");
    scanf("%d",&intero);
    
    while(intero>0){
        resto=intero%2;
        intero=intero/2;
        printf("%d   ",intero);
         printf("%d\n",resto);

        }
}