#include <stdio.h>
#include "conio.h"
    int main(){
        setcolor(RED);
        gotoxy(20,1);
        printf("Se vedi rosso spara a vista");
        setcolor(BLUE);
        gotoxy(30,5);
        printf("\n Se vedi Blu, urla barbablu");
        setcolor (GREEN);
    }