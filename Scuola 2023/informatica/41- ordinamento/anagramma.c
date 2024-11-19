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
    char parola1[]="pietra";
    char parola2[]="aperti";

    bubbleStringa(strlen(parola1),parola1);
    bubbleStringa(strlen(parola2),parola2);

    if(strcmp(parola1,parola2)==0)
        printf("le due parole sono anagrammi");
    else 
        printf("le 2 parole non sono anagrammi");
    return 0;

}