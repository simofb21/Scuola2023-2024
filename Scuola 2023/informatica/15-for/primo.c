/*
Fusar Bassini Simone
3IC
primo.c
stampa i numeri primi*/
#include <stdio.h>
int main(){
    int i,n,nDivisori=0;
    printf("Inserisci un numero intero positvo ");
    scanf("%d",&n);
    for(i=2;i*i<n;i+=1)  { 		//mi fermo alla radice 
        if(n%i==0)
            nDivisori+=1;
           if (nDivisori>=1)
            	break;		//aggiungo il break così esce subito dal ciclo
       
}
  if(nDivisori>0){
    printf("Non e' un numero primo");
  }else{
    printf("Primo");
  }
}
