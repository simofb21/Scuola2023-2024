/*
Fusar Bassini Simone 3IC 
calcolatore.c
*/
#include <stdio.h>

//somma
float somma (int n){
    int i;
    float numeroDaSommare;
   float s=0;
    for(i=1;i<=n;i++){
        printf("Inserisci il numero da sommare ");
         scanf("%f",&numeroDaSommare);
        s=numeroDaSommare+s;
    }
    return s;
 }
 //prodotto
float prodotto (int n){
    int i;
    float numeroDaMoltiplicare;
    float molt=1;
    for(i=1;i<=n;i++){
        printf("Inserisci il numero da moltiplicare ");
         scanf("%f",&numeroDaMoltiplicare);
        molt=numeroDaMoltiplicare*molt;
    }
    return molt;
 }
 // media
float media (int n){
    int i;
    float numeroDaSommare;
    float parz=0;
    float Media;
    for(i=1;i<=n;i++){
        printf("Inserisci il numero da sommare per poi avere la media ");
         scanf("%f",&numeroDaSommare);
        parz=numeroDaSommare+parz;
    }
    return Media= parz/n;
 }
//main

    int main(){
        int opzione;
        float risultato,n;
        do {
            printf("Fai la tua scelta : OPZIONE 1 = SOMMA; OPZIONE 2 = PRODOTTO ; OPZIONE 3= MEDIA ; OPZIONE 4=ESCI \n");
            scanf("%d",&opzione);
         switch (opzione) {
            case 1:
                printf("Quanti numeri vuoi sommare? ");
                scanf("%f",&n);
                risultato=somma(n);
                printf("%f\n",risultato);
                break;
            case 2:
                printf("Quanti numeri vuoi moltiplicare? ");
                scanf("%f",&n);
               risultato=prodotto(n);
                printf("%f\n",risultato);
                break;
            case 3:
                printf("Su quanti numeri vuoi la media? ");
                scanf("%f",&n);
                risultato=media(n);
                 printf("%f\n",risultato);
                break;
            case 4: 
                printf("fine\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
                break;
        }
    } while (opzione != 4);
    }