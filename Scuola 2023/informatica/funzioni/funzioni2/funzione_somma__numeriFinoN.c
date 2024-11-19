#include <stdio.h>

int sommatoria(int n){
    int s=0;
    for (int i=1; i<=n; i++){
        s=s+i;}
    return s;    
}

int main (){
    int b,c;
     b=4;       
    c=sommatoria(b);
    printf("%d",c);
    return 0;

}