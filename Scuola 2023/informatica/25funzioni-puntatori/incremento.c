#include <stdio.h>
    void indirizzoIncrementato(int*a){
        *a=*a+1;

    }
    int main(){
      int  a=10;
      indirizzoIncrementato(&a);
        printf("%d",a);

    }