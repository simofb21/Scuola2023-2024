#include <stdio.h>
    int main(){
        int num[20];

        for(int i=0;i<20;i++){

            printf("Inserisci il numero %d ",i+1);
            scanf("%d",&num[i]);
        }
            printf("Ecco i numri scritti al contrario\n");
        for(int i=19;i>=0;i--){
          
            printf("%d\n",num[i]);
        }
        
    }