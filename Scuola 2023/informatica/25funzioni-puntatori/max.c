#include <stdio.h>
    int max(int n1, int n2, int n3){
        if(n1>=n2 && n1>=n3)
            return n1;
        else if(n2>=n1 && n2>=n3)
            return n2;
        else
             return n3;
    }
    int main(){
        int a=1,b=10,c=1;
           printf("%d",max(a,b,c)) ;
                
        }