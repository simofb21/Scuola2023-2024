#include <stdio.h>
#include <string.h>
int main(){
    FILE * file = fopen("ciaao.txt","at");
    for(int i = 0; i < 10; i++)
        fprintf(file,"%d\n",i);
    fclose(file);
}