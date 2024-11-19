#include <stdio.h>
#include <string.h>

#define LUNGHEZZA 5 //es controllo ma fatto con array di stringhe

int controllo(char dueParole[2][20]){
    int i=0;
    int flag=1;
    int gradoSomiglianza=5;
        
        if(strlen(dueParole[0])!= strlen(dueParole[1]) )
            flag=0;

        else{
            for(int j=0;j<LUNGHEZZA;j++){
                if(dueParole[0][j]!=dueParole[1][j]){
                    gradoSomiglianza--;
                    break;
                }
                    
            }    
        }    
    
    if(flag==1)    
        return gradoSomiglianza; 
    else return 0;
}
int main(){
    char dueParole[2][20];
    
    for(int i=0; i<2; i++){
        printf("Inserisci la parola %d (ricorda deve essere di 5 caratteri): ",i+1);
        scanf("%s",dueParole[i]);
    }
    
    printf("Il grado di somiglianza e' : %d",controllo(dueParole)); 
}