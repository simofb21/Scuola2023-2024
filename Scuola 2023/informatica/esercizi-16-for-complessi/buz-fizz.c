/*
Simone Fusar Bassini
3IC
buzz-fizz.c
Scrivi un programma in C che stampi tutti i numeri da 1 a 100 mediante un ciclo a conteggio (for). 

Per ogni numero, se è divisibile per 3, stampare "Fizz" al posto del numero. 
Se è divisibile per 5, stampare "Buzz" al posto del numero. Se è divisibile sia per 3 che per 5, stampare "FizzBuzz".*/
#include <stdio.h>
int main(){
    int n;
    for(n=1;n<=100;n++){
        if(n%5==0  && n%3==0) 
            printf("Buzz Fizz\n");
        else if(n%3==0)
            printf("FIZZ\n");
        else if(n%5==0)
            printf("Buzz\n");
        else 
            printf("%d\n",n);
    }    
}