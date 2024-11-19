//fusar bassini simone : il programma prende il mese e stampa il mese scritto in cifre
#include <stdio.h>

    void data(int mese){
        switch (mese)
        {
        case 1:
            printf("Gennaio");
            break;
         case 2:
            printf("Febbraio");
            break;
         case 3:
            printf("Marzo");
            break;
         case 4:
            printf("Aprile");
            break;
         case 5:
            printf("Maggio");
            break;
         case 6:
            printf("Giugno");
            break;
         case 7:
            printf("Luglio");
            break;
         case 8:
            printf("Agosto");
            break;
         case 9:
            printf("Settembre");
            break;
         case 10:
            printf("Ottobre");
            break;
        case 11:
            printf("Novembre");
            break;
        case 12:
            printf("Dicembre");
            break;
        default:
            printf("Mese non valido");
            break;
        }
    }
int main(){
    int giorno,anno,mese;
    printf("Inserisci il giorno(numero)\n");
    scanf("%d",&giorno);
    printf("Inserisci il mese(numero)\n");
    scanf("%d",&mese);
    printf("Inserisci l'anno(numero)\n");
    scanf("%d",&anno);

    printf("La  data e' : %d ",giorno);
    data(mese);
    printf(" %d",anno);

}