#include <stdio.h>
#include <string.h>
#define PAROLE 6 


void bubbleELenco(char elenco[PAROLE][20]){
    int cambi;
    char temp[20];
    do{
        cambi=0;
        for(int i = 0; i < PAROLE-1; i++){
            if(strcmp(elenco[i],elenco[i+1])>0){
                strcpy(temp,elenco[i]);
                strcpy(elenco[i],elenco[i+1]);
                strcpy(elenco[i+1],temp);
                cambi=1;
            }
        }
    }
    while(cambi==1);
    
}


int main(){
    char elenco[PAROLE][20]={"Mario","Giovanni","Luca","Filippo","Giacomo","Sofia"};

    bubbleELenco(elenco);
    printf("Ecco l' elenco da te fornito in ordine alfabetico: \n");
    for(int i = 0; i<PAROLE; i++){
        printf("%s\n",elenco[i]);
    }
}