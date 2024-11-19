# include <stdio.h>
int main(){
    float n;
    printf("inserisci n ");
    scanf("%f",&n);
    printf("%f\n",n);
    do{
        n=2.0*n;
        printf("%f\n",n);
        if(n>=1){
           // printf("1");
            n=n-1; 
       } //else 
            //printf("0");
    }while(n!=0);
        return 0;
}