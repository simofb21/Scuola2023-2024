#include <stdio.h>
    void scambia(int* a, int* b){
        int temporanes=*a;
        *a=*b;
        *b=temporanes;
    
    }
    int main(){
        int a=10,b=101;
        scambia(&a,&b);
            printf("%d a  %d b ",a,b);
    }