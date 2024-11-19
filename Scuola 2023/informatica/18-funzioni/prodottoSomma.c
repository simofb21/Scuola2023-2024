
#include <stdio.h>

int somma(int n1,int n2){
    int s= n1+n2;
    return s;
}
int prodotto(int n1,int n2){
     int p= n1*n2;
    return p;
}
int main(){
    int n1,n2,som,prod;
    printf("Inserisci n1\n");
    scanf("%d",&n1);
    printf("Inserisci n2\n");
    scanf("%d",&n2);
    som=somma(n1,n2);
    printf("Somma : %d",som);
    prod=prodotto(n1,n2);
    printf("prodotto: %d",prod);

}
