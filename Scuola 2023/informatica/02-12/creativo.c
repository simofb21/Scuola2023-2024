#include <stdio.h>
#include "conio.h"



int main(){
    int i;
    int y=10;
    //primo quadratino 
    
    //riga in alto
    gotoxy(10,10);
    for(i=1;i<=50;i++){
        if(i%2==0)
            setcolor(BLUE);
        else setcolor(BLACK);
        printf("*");}
    
//lato a dx
   y=10;
    for(i=1;i<=50;i++){
          if(i%2==0)
            setcolor(BLUE);
        else setcolor(BLACK);
        gotoxy(60,y);
       printf("*");
         y++;}
    //lato a sx
    y=10;
     for(i=1;i<=50;i++){
          if(i%2==0)
            setcolor(BLUE);
        else setcolor(BLACK);
       gotoxy(10,y);
       y++;
        printf("*");}
   
     gotoxy(10,60);
    for(i=1;i<=50;i++){
          if(i%2==0)
            setcolor(BLUE);
        else setcolor(BLACK);
        printf("*");
    }
    gotoxy(20,18);
    setcolor(GREEN);
        printf("Prof Vailati mi metta 10");
    setcolor(BLACK);
}