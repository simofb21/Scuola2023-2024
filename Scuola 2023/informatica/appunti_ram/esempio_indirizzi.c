#include <stdio.h>
  /* int main(){
        char alfa;
        int beta;
        printf("L' indirizzo di alfa = %p",&alfa);
         printf("\nL' indirizzo di beta = %p",&beta);
    }*/ /*
int doppio(int a ){
    return a=2+a;
   
}
int main(){
    int a=5;
    int k;
    k=doppio(a);
    printf("%d\n%d",k,a);
}
*/
void somma(int *a){
    *a=(*a)+2;
}
int main(){
    int b=5;
    somma(&b);
    printf("%d\n",b);
}