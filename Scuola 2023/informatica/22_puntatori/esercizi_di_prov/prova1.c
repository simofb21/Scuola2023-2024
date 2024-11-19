#include <stdio.h>
void modifica_pointer(int *p){
    *p=*p+1;
}
int main(){
    int a=1;
    modifica_pointer(&a);
    printf("%d",a);
}