#include <stdio.h>
//passsaggio per indirizzi
    void radd(int *numero){
        *numero= *numero * 2 ;
    }

    
    // raddoppio
    int raddoppia2(int a){
        return 2*a;
    }

       
         
int main(){   
        int  valore=5;   //serve x quella con riferimento
        int numero=10;  //normale
            radd(&valore);
            printf("%d",valore); //valore  per riferimento
            printf(" Ora aggiorniamo il valore\n");
            numero=raddoppia2(numero);
             printf("%d",numero); // valore normale

        }
