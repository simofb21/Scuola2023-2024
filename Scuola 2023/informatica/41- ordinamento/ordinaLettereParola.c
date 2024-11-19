#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

void bubbleStringa(int lunghezza, char stringa[]){
    int cambi;
    char temp;
    do{
        cambi=0;
        for(int i = 0; i < lunghezza-1; i++){
            if(stringa[i]>stringa[i+1]){
                temp=stringa[i];
                stringa[i]=stringa[i+1];
                stringa[i+1]=temp;
                cambi=1;
            }
        }
    }
    while(cambi==1);
    
}
int main(){
    char stringa[]="zainetto";

    bubbleStringa(strlen(stringa),stringa);
    printf("%s",stringa);
}