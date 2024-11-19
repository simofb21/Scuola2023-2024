#include <stdio.h>
int main(){
    int anno=1700;
    while(anno>=1700 && anno<=2100){
        if ((anno%4==0 && anno%100!=0) || anno%400==0){
            printf("%d\n",anno);
        }
        anno+=1;
    }
}