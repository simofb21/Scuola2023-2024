/*
Simone Fusar Bassini
3IC
calcoloPi_Greco.c
Il metodo Monte Carlo è un'ampia classe di metodi computazionali basati sul campionamento casuale per ottenere risultati numerici. 
Il metodo è usato per trarre stime attraverso simulazioni.
Un esempio di uso del metodo di Montecarlo è il calcolo del valore della costante PiGreco. 
Il programma chiede all'utente di inserire il numero di punti da generare (per una buona stima è necessario un numero elevato di punti). 
Successivamente, viene utilizzata la funzione rand() per generare le coordinate x e y di ogni punto all'interno del quadrato unitario (con lati di lunghezza 1) 
e viene calcolata la distanza dal centro del cerchio inscritto (con raggio 1) utilizzando il teorema di Pitagora.
 Se la distanza è minore o uguale a 1, il punto si trova all'interno del cerchio e viene incrementato un contatore.
Alla fine del ciclo, il valore di Pi Greco viene calcolato come il rapporto tra
 il numero di punti all'interno del cerchio e il numero totale di punti generati, moltiplicato per 4. 
Questo perché il rapporto tra l’area del quarto di circonferenza di raggio 1 e l’area del quadrato di lato 1 è esattamente PiGreco/4.  
AreaFetta = R*R*Pi / 4 = Pi/4
AreaQuadrato = L*L = 1
AreaFetta/AreaQuadrato = Pi/4

Poiché i punti sono distribuiti casualmente e uniformemente nell’area del quadrato che contiene il quarto di circonferenza il numero di punti che ricadono all’interno di un’area sono proporzionali all’area stessa. Vedi illustrazione.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <math.h>
    int main()
    {
        srand(time(0));
        int nPunti,i;
        double x,y,distanza,piGr;
        int nMinori=0,nMaggiori=0;
        printf("Inserisci il numero di punti da generare ");
        scanf("%d",&nPunti);

        for(i=1;i<=nPunti;i++)  {

                    x=(double)(rand()%1000)/(double)1000;            //genera casualmente i punti x e 7 tra 0 e 1
                    y=(double)(rand()%1000)/(double)1000;
                    distanza=sqrt(x*x+y*y);                 //calcolo distanza

                    if(distanza<=1)
                        nMinori++;
        }

    piGr=(double)nMinori/(double)nPunti*4;
    printf("Il valore Montecarlo di Pigreco e'%f",piGr);
    }