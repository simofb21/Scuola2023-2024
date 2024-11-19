#include <stdio.h>
#include <math.h>

struct punto //definisco la struttura di una variabile struct punto, con 2 punti interi
{
    int x;
    int y;
};
struct punto creapunto ( int a , int b) { //funzione che ritorna struct

    struct punto q;
    q.x = a-1; //ci tolgo  1 a caso
    q.y = b-1;
    return q;
}

float distanza ( struct punto a , struct punto b){     //restituisco la distazna tra due punti 
    return sqrt((a.x-b.y)*(a.x-b.y) +(a.y-b.y)* (a.y-b.y)); 
}
int main(){
    struct punto p1,p2,p3;
    struct punto p4 = {3,7};
    p1.x = 0;
    p2.y= 0 ;
    p3 = p4 ; 
    struct punto p5 = creapunto(6,9); 
    printf("Le cordinate del punto sono (%d,%d)",p5.x,p5.y);

    float distanza2p = distanza(p4,p5);
    printf("La distanza e' %.2f",distanza2p);
    return 0;

}