#include <stdio.h>
#include <string.h>

#define LUNGHEZZA 5

int controllo(char parola1[10],char parola2[10]){
    int i=0;
    int flag=1;
    int gradoSomiglianza=5;
        
        if(strlen(parola1) !=strlen(parola2) && (strlen(parola1)!=LUNGHEZZA || strlen(parola2)!=LUNGHEZZA))
            flag=0;

        else{
            for(int j=0;j<LUNGHEZZA;j++){
                if(parola1[j]!=parola2[j]){
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
    char parola1[10];
    char parola2[10];

        printf("Inserisci la  prima parola (ricorda deve essere di 5 caratteri): ");
        scanf("%s",parola1);
        printf("Inserisci la  seconda parola (ricorda deve essere di 5 caratteri): ");
        scanf("%s",parola2);
    
    printf("Il grado di somiglianza e' : %d",controllo(parola1,parola2)); 
}