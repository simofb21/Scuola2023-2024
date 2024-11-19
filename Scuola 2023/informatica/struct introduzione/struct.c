#include <stdio.h>

struct punto //definisco la struttura di una variabile struct punto, con 2 punti interi
{
    int x;
    int y;
};

int main()
{
    int a;
    float b;
    struct punto p; //inizializzo p , che usa la struttura  punto 
    struct punto p2;    //inizializzate  p2 e p3 anche 
    struct punto p3={4,-4}; //ini<iali<<ato p3 con già valori x e y

    a = 1;
    b=4.7;
    p.x = -7;
    p.y = 3;

    p2=p;

    printf("Le cordinate del punto sono (%d,%d)",p3.x,p3.y);
    return 0;
}
