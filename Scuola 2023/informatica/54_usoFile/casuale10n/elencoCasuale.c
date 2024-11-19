#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    FILE *file;
    file=fopen("output.txt", "wt");

    if(file==NULL){
        printf("Errore nell' apertura del file  \n ");
        return 1;
    }
    for (int j = 0; j < 10; j++)
    {
        int n=rand()%90+1;
        fprintf(file,"%d\n",n);
    }
    fclose(file);
    
    printf("fatto");
    return 0;
}

