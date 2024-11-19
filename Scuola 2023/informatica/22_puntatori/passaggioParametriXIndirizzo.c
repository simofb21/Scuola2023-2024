#include <stdio.h>
    int  mcd(int a,int b) {
    int ris;int resto;
	while(b!=0){
		resto=a%b;
		a=b;
		b=resto;
	}
	 return ris=a;}
	

    void semplifica(int *num, int *den){
            int MCD=mcd(*num,*den);
            *num=*num/MCD;
            *den=*den/MCD;
    }


    int main(){
        int n,d;
        printf("Inserisci la frazione n/d ");
        scanf("%d/%d",&n,&d);
        semplifica(&n,&d);
        printf("La frazione semplificata e' %d/%d",n,d);
    }
